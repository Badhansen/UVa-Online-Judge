#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll dp[21];

void fac()
{
    dp[0]=1;
    for (int i=1; i<21; i++){
        ll res=1;
        for (int j=1; j<=i; j++){
            res*=j;
        }
        dp[i]=res;
    }
}

int main()
{
    fac();
    ll n, c=1;

    scanf("%lld", &n);
    while(n--){
        char str[21];
        ll w[27]={0};
        scanf("%s", str);
        ll len=strlen(str);
        for (int i=0; i<len; i++){
            w[str[i]-'A']++;
        }
        ll res=dp[len];
        for (int i=0; i<27; i++){
            res/=dp[w[i]];
        }
        printf ("Data set %lld: %lld\n", c++, res);

    }
    return 0;
}
