#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define MM  100009

ll sum_div (ll number)
{
    ll i=1, sum=0;
    while(i*i<=number){
        if (number%i==0){
            if (i==(number/i)){
                sum+=i;
            }
            else {
                sum+=i;
                sum+=(number/i);
            }

        }
        i++;
    }
    return sum;
}
map <ll, ll> mp;
void print ()
{
    for (int i=1; i<=1000; i++){
        mp[sum_div(i)]=i;
    }
}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    print();
    ll n, c=1;
    while (1){
        scanf("%lld", &n);
        if (n==0) break;
        if (mp[n]==0){
            printf("Case %lld: -1\n", c++);

        }
        else {
            printf("Case %lld: %lld\n", c++, mp[n]);
        }
    }
    return 0;
}
