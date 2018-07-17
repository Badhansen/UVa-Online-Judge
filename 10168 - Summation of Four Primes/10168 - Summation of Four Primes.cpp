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
    mx=sqrt(10000000);
    for (i=4;i<=10000000;i+=2){
        dp[i]=1;
    }
    for (j=3;j<=mx;j+=2){
        if (dp[j]==0){
            for (a=j*j;a<=10000000;a+=j){
                dp[a]=1;
            }
        }
    }
    while (scanf ("%lld", &n)!=EOF){
        long long int ck, pk;
        if (n%2==0 && n>7){
                ck=n-4;
                for (i=2; i<=ck/2; i++){
                    if (dp[ck-i]==0 && dp[i]==0){
                        printf ("2 2 %lld %lld\n", ck-i, i);
                        break;
                    }
                }
        }
        else {
            if (n<8)
                cout << "Impossible." << endl;
            else {
                ck=n-5;
                for (i=2;i<=ck/2;i++){
                    if (dp[ck-i]==0 && dp[i]==0){
                        printf ("2 3 %lld %lld\n", i, ck-i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}


