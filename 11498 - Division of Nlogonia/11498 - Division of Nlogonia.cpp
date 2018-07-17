/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int k;
    int n, m;
    while (1){
        cin >> k;
        if (k==0) break;
        cin >> n >> m;
        while (k--){
            int x, y;
            cin >> x >> y;
            if (x==n || y==m){
                cout << "divisa" << endl;
            }

            if (x<n && y!=m){
                if (y<m)
                    cout << "SO" << endl;
                else
                    cout << "NO" << endl;
            }
            if (x>n && y!=m){
                if (y>m)
                    cout << "NE" << endl;
                else
                    cout << "SE" << endl;
            }
        }
    }
    return 0;
}
