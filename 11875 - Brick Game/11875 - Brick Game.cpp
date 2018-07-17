#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int T, n, c=1;
    cin >> T;
    while (T--){
        cin >> n;
        int ara[1+n];
        for (int i=0; i<n; i++){
            cin >> ara[i];
        }
        sort (ara, ara+n);
        cout <<"Case " << c++ << ": " << ara[n/2] << endl;
    }
    return 0;
}
