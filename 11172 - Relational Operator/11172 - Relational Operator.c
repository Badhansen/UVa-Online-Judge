/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
int main ()
{
    int t,i;
    scanf ("%d", &t);
    unsigned long long int a[t],b[t];
    for (i=0;i<t;i++){
        scanf ("%lld %lld", &a[i], &b[i]);
    }
    for (i=0;i<t;i++){
        if (a[i]==b[i])
            printf ("=\n");
        else if (a[i]>b[i])
            printf (">\n");
        else
            printf ("<\n");
    }
    return 0;
}
