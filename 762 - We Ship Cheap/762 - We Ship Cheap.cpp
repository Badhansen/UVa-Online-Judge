// Solved

#include<bits/stdc++.h>

using namespace std;
#define MM 10009
vector<int> graph[MM];

map <int, int> visited;
map <string, int> mp;
map <int, string> mpp;
vector <int> path;


void bfs (int start, int destination)
{
    queue <int> q;
    int p[MM];
    path.clear();
    visited.clear();
    q.push(start);
    p[start]=start;
    visited[start]=0;
    while (!q.empty()){
        int top=q.front();
        q.pop();
        int Size=graph[top].size();
        for (int i=0; i<Size; i++){
            int n=graph[top][i];
            if (!visited.count(n)){
                visited[n]=visited[top]+1;
                p[n]=top;
                q.push(n);
            }
        }
    }
    if (visited[destination]==0){
            cout << "No route" << endl;
    }
    else {


        int n=destination;
        path.push_back(destination);
        while (n!=start){
            n=p[n];
            path.push_back(n);
        }
        reverse (path.begin(), path.end());
        int it=0;
        while (it < path.size()-1){
            if (it==0){
                cout << mpp[path[it]] << " " << mpp[path[it+1]] << endl;
            }
            else {

                if (it==path.size()-1){
                    cout << mpp[path[it]] << " " << mpp[path[it+1]];

                }
                else {
                    cout << mpp[path[it]] << " " << mpp[path[it+1]] << endl;

                }
            }
            it++;
        }

    }

}
int main ()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int number, i, co=1;
    while (scanf("%d", &number)!=EOF){
        for (i=0; i<MM; i++) graph[i].clear();
        if (co!=1) printf("\n");
        co++;
        int asign=1;
        for (i=0; i<number; i++){
            string _, __;
            cin >> _;
            cin >> __;
            if (mp.find(_)==mp.end()){
                mp[_]=asign++;
                mpp[asign-1]=_;
            }
            if (mp.find(__)==mp.end()){
                mp[__]=asign++;
                mpp[asign-1]=__;

            }
            int u, v;
            u=mp[_];
            v=mp[__];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        string st, en;
        cin >> st;
        cin >> en;
        int destination=mp[en];
        int start=mp[st];
        bfs(start, destination);
        //printf ("\n");

        mp.clear();
        mpp.clear();



    }

    return 0;
}
