/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long i,j,a,b,c,ck,pk=1;
    while (scanf ("%lld %lld",&i,&j)!=EOF){
            if (i<0 && j<0) break;
            a=i;
            b=j;
            long long c=0;
            while (a!=1){
                if (a%2==0){
                    a/=2;
                }
                else {
                    a=a*3+1;
                }
                if (a>b) break;
                c++;
            }
        ck=c+1;
        printf ("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", pk, i, j, ck);
        pk++;
    }
    return 0;
}
