#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main ()
{
    char str[1000];
    while (gets(str)){
        int len=strlen(str);
        for (int i=0; i<len; i++){
            printf("%c", str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
