/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
#include <string.h>
#define max 10000
int main ()
{

    char ara[max], ch;
    int i=0,b=0,len;
    while ((ch = getchar())!=EOF){
            ara[i]=ch;
            i++;
    }
    ara[i]='\0';
    i=0;
    len=strlen (ara);
    for (i=0;i<len;i++){
        if (ara[i]== '"' && b%2==0){
            b++;
            printf ("``");

        }
        else {
            if (ara[i]=='"' && b%2!=0){
                printf ("''");
                b++;
            }
            else
                printf ("%c", ara[i]);
        }
    }
    printf ("\n");
    return 0;
}
