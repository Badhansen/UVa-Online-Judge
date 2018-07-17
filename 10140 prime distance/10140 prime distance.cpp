#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define MM 1000000
bool p[MM+10];
vector <ll> v;

void seive ()
{
    ll i, j;
    p[0]=p[1]=false;
    for (i=2; i<=MM; i++){
        if (p[i]){
            v.push_back(i);
            for (j=i*i; j<=MM; j+=i){
                p[j]=false;
            }
        }
    }

}
vector <ll> temp;
long long first (ll low, ll i)
{
     if (low%i==0){
        return max(low, i*i);
     }
     else {
        return max(low+(i-(low%i)), i*i);
     }
}
int main ()
{
    memset(p, true, sizeof p);
    seive();
    ll l, r, i, j, k, mx, mi, a, b, c, d;
    while (scanf("%lld %lld", &l, &r)==2){
        memset(p, true, sizeof p);
        temp.clear();

        for (i=0; v[i]*v[i]<=r; i++){
            for (j=first(l, v[i]); j<=r; j+=v[i]){
                p[j-l+1]=false;
            }
        }
        if (l==1){
            p[l]=false;
        }
        for (i=1; i<=r-l+1; i++){
            if (p[i]){
                temp.push_back(i+l-1);
            }
        }
        mx=0; mi=99999999999;
        a=b=c=d=1;
        for (i=0; i<temp.size()-1 && i+1<temp.size(); i++){// if temp is empty
            if (temp[i+1]-temp[i]<mi){
                mi=temp[i+1]-temp[i];
                a=temp[i]; b=temp[i+1];
            }
            if (temp[i+1]-temp[i]>mx){
                mx=temp[i+1]-temp[i];
                c=temp[i]; d=temp[i+1];
            }
        }
        if (temp.size()>=2){
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n", a, b, c, d);
        }
        else {
            printf("There are no adjacent primes.\n");
        }
    }
    return 0;
}

