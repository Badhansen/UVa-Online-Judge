// Solved

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define Max 30010
#define MaxCoin 11

ll coin[]={5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
ll ways[Max];

void coinChange(ll n)
{
    ways[0]=1;
    for(ll i=0; i<MaxCoin; i++){
        for(ll j=1; j<=n; j++){
            if(j-coin[i]<0) continue;
            ways[j]+=ways[j-coin[i]];
        }
    }

}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    coinChange(Max);
    ll x, y, n;
    double d;

    while(scanf("%lld.%lld", &x, &y)!=EOF){
        if(x==0 && y==0) break;

        n=x*100+y;
        d=y;

        printf("%3lld.%.2lld%17lld\n", x, y, ways[n]);
    }


    return 0;
}

