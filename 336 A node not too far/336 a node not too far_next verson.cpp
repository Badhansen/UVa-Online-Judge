// solved

#include<bits/stdc++.h>

using namespace std;

vector <int> graph[31]; //decreased the size
map<int, int> visited;
map <int, int> mp;
void bfs (int start)
{
    queue <int> q;

    q.push(start);

    visited[start]=0;
    while (!q.empty()){
        int top=q.front();
        q.pop();
        int Size=graph[top].size();
        for (int i=0; i<Size; i++){
            int n=graph[top][i];
            if (!visited.count(n)){
                visited[n]=visited[top]+1;
                q.push(n);
            }
        }
    }
}

int main ()
{
    freopen("int.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int edges, c=1;
    while (scanf("%d", &edges)&&edges){ // input ends when edges = 0
		for(int i = 0; i < 31; i++) graph[i].clear(); //added this line
        mp.clear();
        int asign=0;
        for (int i=0; i<edges; i++){

            int x, y;
            cin >> x >> y;

            if (mp.find(x)==mp.end()){
                mp[x]=asign++;
            }
            if (mp.find(y)==mp.end()){
                mp[y]=asign++;
            }
            int u, v;
            u=mp[x];
            v=mp[y];
            graph[u].push_back(v);

            graph[v].push_back(u);

        }


        int source, ttl;

        while (1){
            cin >> source >> ttl;

            if (source==0 && ttl==0) break;
            visited.clear();
            int start=mp[source];

            bfs(start);
            int res=0;
            map <int,int> :: iterator it;
            for (it=visited.begin(); it!=visited.end(); it++) {
                if ((*it).second>ttl) res++;

            }
            res+=mp.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", c++, res, source, ttl);

        }

    }

    return 0;
}
