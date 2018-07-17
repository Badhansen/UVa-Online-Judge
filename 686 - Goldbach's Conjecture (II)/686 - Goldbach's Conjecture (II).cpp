/**

                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;
bool dp[32768];

int main ()
{
    long long int n, i, j, a, mx;
    mx=sqrt(32768);
    for (i=4;i<=32768;i+=2){
        dp[i]=1;
    }
    for (j=3;j<=mx;j+=2){
        if (dp[j]==0){
            for (a=j*j;a<=32768;a+=j){
                dp[a]=1;
            }
        }
    }
    while (1){
        scanf ("%lld", &n);
        int ck=0;
        if (n==0) return 0;
        else {
            for (i=2;i<=n/2;i++){
                if (dp[n-i]==0 && dp[i]==0){
                    ck++;
                }
            }
            printf("%d\n", ck);
        }
    }
    return 0;
}


