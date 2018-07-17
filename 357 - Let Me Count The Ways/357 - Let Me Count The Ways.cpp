// solved
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define Max 30010
#define MaxCoin 5

ll c[]={1, 5, 10, 25, 50};
ll ways[Max];
void coinChange(ll n)
{
    ways[0]=1;
    for(ll i=0; i<MaxCoin; i++){
        for(ll j=1; j<Max; j++){
            if(j-c[i]<0) continue;
            ways[j]+=ways[j-c[i]];
        }
    }
}
int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    coinChange(Max);
    ll n;
    while(scanf("%lld", &n)!=EOF){

        if(ways[n]==1){
            printf("There is only 1 way to produce %lld cents change.\n", n);
        }
        else{
            printf("There are %lld ways to produce %lld cents change.\n", ways[n], n);

        }

    }

    return 0;
}
