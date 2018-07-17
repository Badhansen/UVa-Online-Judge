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
    int T, n, c=1, S;
    cin >> T;
    while (T--){
        cin >> n;
        int mx=0;
        while (n--){
            cin >> S;
            if (S>mx)
                mx=S;
        }
        cout << "Case " << c << ": " << mx << endl;
        c++;
    }

    return 0;
}


