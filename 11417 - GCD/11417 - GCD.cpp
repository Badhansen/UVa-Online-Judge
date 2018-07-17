/**

                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
    if (a==0) return b;
    else return gcd(b%a, a);


}

int main ()
{
    int n;
    while (1){
        cin >> n;
        if (n==0) break;
        int G=0;
        for (int i=1; i<n;i++){
            for (int j=i+1; j<=n;j++){
                G=G+gcd(i, j);
            }
        }
        cout << G << endl;
    }
    return 0;
}



