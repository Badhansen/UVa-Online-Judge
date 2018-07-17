/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <stdio.h>
#include <string.h>
#define max 100000
int main ()
{
    char array[max], ch;
    int b=0;
    while ((ch = getchar())!=EOF){
        if (ch== '"' && b%2==0){
            b++;
            printf ("``");

        }
        else {
            if (ch=='"' && b%2!=0){
                printf ("''");
                b++;
            }
            else
                printf ("%c", ch);
        }
    }
    return 0;
}
