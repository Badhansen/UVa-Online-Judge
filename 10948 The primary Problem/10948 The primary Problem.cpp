#include <bits/stdc++.h>
#include <cmath>
bool dp[10000009];

using namespace std;
int main ()
{
    long long int i, j, n, ck, pk, c=0;
    ck=sqrt(10000000);
    for (i=4; i<=10000000; i+=2){
        dp[i]=1;
    }
    for (i=3; i<=ck; i+=2){
        if (dp[i]==0){
            for (j=i*i; j<=10000000; j+=i){
                dp[j]=1;
            }
        }
    }
    while (1){
        cin >> n;
        if (n==0) break;

        for (i=2; i<=n/2; i++){
                if (dp[i]==0){
                    if (dp[n-i]==0){
                        pk=i;
                        c=1;
                        break;
                    }
                }
        }
        if (c==1){
            cout << n << ":\n" << pk << "+" << n-pk << endl;
            c=0;
        }
        else
            cout << n << ":\n" << "NO WAY!" << endl;
    }
    return 0;
}

