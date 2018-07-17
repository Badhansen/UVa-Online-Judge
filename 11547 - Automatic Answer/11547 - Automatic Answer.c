/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
int good (int a)
{
    int b=a*567;
    int c=b/9;
    int d=c+7492;
    int e=d*235;
    int f=e/47;
    int g=f-498;
    return g;
}
int main ()
{
    int a,b,i;
    scanf ("%d", &a);
    for (i=0;i<a;i++){
        scanf ("%d", &b);
        int c=b;
        int x=good (c);
        int y=x/10;
        int z=y%10;
        printf ("%d\n", z>0?z:-(z));
    }

    return 0;
}
