#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>

using namespace std;

typedef long long int LL;
LL Power (LL x, LL y, LL p)
{
    x%=p; /// if x is grater than p
    ///y%=p; /// if y is grater than p
    LL res=1;    ///initialize value
    while (y>0){
        /// If y is odd, multiply x with result
        if (y&1)
            res=(res*x) % p;

        ///y must be even now

        y=y>>1;
        x=(x*x) % p;

    }
    return res;
}

int main()
{
    LL x, y, p;
    freopen("input.txt", "r", stdin);
    freopen("input9999.txt", "w", stdout);

    while (scanf ("%lld %lld %lld", &x, &y, &p)!=EOF){
        cout << Power(x, y, p) << endl;
    }
    return 0;
}

