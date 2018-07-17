/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>

using namespace std;
int F91 (int n){
    if (n>=101) return n-10;
    else {
        return F91(F91(n+11));
    }
}
int main ()
{
    int n;
    while (1){
        cin >> n;
        if (n==0){
            break;
        }
        cout << "f91(" << n << ") = " << F91(n) << endl;
    }
    return 0;
}
