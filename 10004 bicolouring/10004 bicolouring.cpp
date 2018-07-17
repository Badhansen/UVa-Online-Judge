//solved
#include <bits/stdc++.h>

using namespace std;

vector<int> graph[210];

bool bfs (int source)
{
    int i, j;
    int vis[210];

    for (i=0; i<210; i++) {
        vis[i]=0;                 // 0 means white 1 means red and 2 means blue
    }
    vis[source]=1;                // 1 means visited and its color is red (as i wish)
    queue <int> q;
    q.push(source);
    while (!q.empty()){
        int top=q.front();
        q.pop();
        for (i=0; i<graph[top].size(); i++){
            int n=graph[top][i];
            if (vis[n]==0){       // 0 means white
                if (vis[top]==1){ // 1 means red (as i want)
                    vis[n]=2;     // 2 means blue (as i want)
                }
                else {
                    vis[n]=1;
                }
                q.push(n);
            }
            if (vis[top]==vis[n])
                return false;     // if two adjacency node is same color

        }

    }

    return true;


}
int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int nodes, edges, i, j;

    while (1){
        scanf("%d", &nodes);
        if (nodes==0) break;
        scanf("%d", &edges);
        for (i=0; i<edges; i++){
            int u, v;
            scanf ("%d%d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);

        }
        if (bfs(0)){
            printf ("BICOLORABLE.\n");

        }
        else {
            printf ("NOT BICOLORABLE.\n");

        }

        for (i=0; i<210; i++){
            graph[i].clear();  // clearing all the elements because of next test cases uses this information

        }

    }
    return 0;

}
