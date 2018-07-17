
/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m, k, mx, ck, c=1, a;
    cin >> a;
    while (a--){
        cin >> n >> m >> k;
        mx=max(n, max(m, k));
        ck=min(n, min(m, k));
        if (n<mx && n>ck){
            cout << "Case " << c <<": "<< n << endl;
            c++;
        }
        else {
            if (m<mx && m>ck){
                cout << "Case " << c <<": "<< m << endl;
                c++;
            }
            else{
                cout << "Case " << c <<": "<< k << endl;
                c++;
            }
        }
    }
    return 0;
}
