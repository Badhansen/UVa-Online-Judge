#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main ()
{
    double n, p;
    double ck;
    while(scanf ("%lf %lf", &n, &p)!=EOF){
        ck=pow ((double)p, (double)1/n);
        printf("%.0lf\n", ck);
    }
    return 0;
}
