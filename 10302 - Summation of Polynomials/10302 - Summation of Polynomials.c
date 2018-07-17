/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
int main ()
{
    unsigned long long int n,i;
    while (scanf ("%lld", &n)!=EOF){
        unsigned long long int sum=0;
        for (i=1;i<=n;i++){
            sum=sum+(i*i*i);
        }
        printf ("%lld", sum);
        printf ("\n");
    }
    return 0;
}
