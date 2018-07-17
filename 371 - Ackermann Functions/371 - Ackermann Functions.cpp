/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <bits/stdc++.h>

long long length (long long a);
int main ()
{

    long long i,j,b,c=0,ara,ck=1, pk;
    while (scanf ("%lld %lld",&i,&j)!=EOF){
        if (i==0 && j==0){
            break;
        }
        ck=1;
        if (i<j){
            pk=i;
            for (b=i;b<=j;b++){
                ara=length (b);
                if (ara>ck){
                    ck=ara;
                    pk=b;
                }
                else
                    ck=ck;
            }
        }
        else {
            pk=j;
            for (b=j;b<=i;b++){
                ara=length (b);
                if (ara>ck){
                    ck=ara;
                    pk=b;
                }
                else
                    ck=ck;
            }
        }
    if (i<j)
        printf ("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", i, j, pk, ck-1);
    else
        printf ("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", j, i, pk, ck-1);
    }
    return 0;
}
long long length (long long a){
    long long c=0;
        while (a!=0){
            if (a%2==0){
                a/=2;
            }
            else {
                a=a*3+1;
            }
            c++;
            if (a==1)
                break;
        }
        return c+1;
    }


