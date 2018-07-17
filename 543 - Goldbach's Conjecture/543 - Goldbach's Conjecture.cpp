/**

                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;
bool dp[10000001];

int main ()
{
    long long int n, m, i, j, a, mx;
    mx=sqrt(1000000);
    for (i=4;i<=1000000;i+=2){
        dp[i]=1;
    }
    for (j=3;j<=mx;j+=2){
        if (dp[j]==0){
            for (a=j*j;a<=1000000;a+=j){
                dp[a]=1;
            }
        }
    }
    freopen("input.txt", "r", stdin);
    freopen("iout.txt", "w", stdout);
    while (1){

        scanf ("%lld", &n);
        int ck=0;
        if (n==0) return 0;
        else {
            for (i=2;i<=n/2;i++){
                if (dp[n-i]==0 && dp[i]==0){
                    printf ("%lld = %lld + %lld\n", n, i, n-i);
                    ck=1;
                    break;
                }
            }
            if (ck==0) printf ("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}

