// solved
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int T, n, c=1;
    string str[1001], st;
    cin >> T;
    while (T--){
        cin >> n;
        for (int i=0; i<n; i++){
            cin >> str[i];
        }
        cin >> st;
        cout << "Case " << c++ << ":"<< endl;
        for (int i=0; i<n; i++){
            if (st.size()==str[i].size()){
                int co=0;
                for (int j=0; j<str[i].size(); j++){
                    if (st[j]!=str[i][j]){
                        co++;
                    }
                }
                if (co==1 || co==0){
                    cout << str[i] << endl;
                }

            }
        }
    }


    return 0;
}
