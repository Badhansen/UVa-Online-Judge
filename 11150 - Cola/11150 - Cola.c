/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
int main ()
{
    int n;
    while (scanf ("%d", &n) !=EOF){
        int a,sum=0;
        if (n%2==0){
            a=n+1;
            for (a;a>1;a=a-3){
                sum=sum+1;
                a=a+1;
            }
        }
        else {
            a=n;
            for (a;a>1;a=a-3){
                sum=sum+1;
                a=a+1;
            }
        }
        printf ("%d\n", sum+n);
    }
    return 0;
}
