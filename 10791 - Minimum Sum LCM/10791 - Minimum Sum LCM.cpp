
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define mx 1000000
bool dp[1000001];

vector < ll > prime;

void seive ()
{
    memset (dp, false, sizeof (dp));
    ll i, j, k=0;
    for (i=2; i<=mx; i++){
        if (dp[i]==false){
            prime.push_back(i);
            for (j=i*i; j<=mx; j+=i){
                dp[j]=true;
            }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    ll a, c=1, sum;
    while (1){
        cin >> a;
        ll ck=0;
        ll n=a;
        sum=0;
        if (n==0) break;
        ll pk;
        ll i=0, k;
        for (k=1; k*k<=a; k++){
            pk=1;
            if (n%prime[i]==0){
                ck++;
                ll p=prime[i];
                while (n%p==0){
                    pk=pk*p;
                    n/=p;
                }
                sum+=pk;
            }
            i++;
        }
        if (ck==0 || ck==1){
            cout << "Case " << c++ << ": "<< a+1 << endl;
        }
        else {
            cout << "Case " << c++ << ": "<< sum << endl;
        }
    }
    return 0;
}


