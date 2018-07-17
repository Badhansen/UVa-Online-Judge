/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
int main ()
{
    unsigned long long int a,b,sum;
    while (scanf ("%lld %lld", &a,&b)!=EOF){
        if (a>b){
            sum=a-b;
        }
        else{
            sum=b-a;
        }
        printf ("%lld\n", sum);
    }
    return 0;
}
