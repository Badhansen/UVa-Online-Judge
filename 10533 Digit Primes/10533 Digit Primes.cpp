#include <bits/stdc++.h>

using namespace std;

#define mx 1000001
typedef long long int ll;

vector <ll> prime;
ll sum[mx]={0};
ll csum[mx]={0};
bool dp[mx];
void seive ()
{

   ll i, j, k=0;
   dp[0]=true;
   dp[1]=true;
   for (i=4; i<=mx; i+=2){
        dp[i]=true;
   }
   for (i=2; i<=mx; i++){
        if (dp[i]==false){
            prime.push_back(i);
            for (j=i*i; j<=mx; j+=i){
                dp[j]=true;
            }
        }
   }

}
int ok (ll n)
{
    ll res, sum=0;
    while (n!=0){
        res=n%10;
        sum+=res;
        n/=10;
    }
    return sum;
}
void solve ()
{
    seive();
    ll i, j;
    for (i=1, j=0; i<mx; i++){
        if (i==prime[j]){
            ll mm=i;
            if (dp[ok(mm)]==false)
                sum[i]=1;
            j++;
        }
        else {
            sum[i]=0;
        }
    }
    for (i=1; i<=mx; i++){
        csum[i]=csum[i-1]+sum[i];
    }

}

int main ()
{
    solve();
    ll t, a, b;
    scanf("%lld", &t);
    for (int i=0; i<t; i++){
        scanf("%lld%lld", &a, &b);
        ll c=csum[b]-csum[a-1];
        printf("%lld\n", c);
    }
    return 0;
}


