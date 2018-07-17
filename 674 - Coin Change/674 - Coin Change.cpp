// Solved


#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define Max 7500
#define MaxCoin 5



ll ways[Max];

ll coin[]={1, 5, 10, 25, 50};

void coinChange(ll amount)
{
    ways[0]=1;
    for(ll i=0; i<MaxCoin; i++){
        for(ll j=1; j<=amount; j++){
            if(j-coin[i]<0) continue;

            ways[j]+=ways[j-coin[i]];

        }
    }
}
int main()
{
    ll n;
    coinChange(Max);
    while(scanf("%lld", &n)!=EOF){

        if(n==0) printf("0\n");

        else printf("%lld\n", ways[n]);

    }
    return 0;

}

