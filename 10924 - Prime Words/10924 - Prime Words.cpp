#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i, j, n, c=0, ck;
    n=100000;
    bool dp[n];
    ck=sqrt(n);
    for (i=4; i<=n; i+=2){
        dp[i]=1;
    }
    for (i=3; i<=ck; i+=2){
        if (dp[i]==0){
            for (j=i*i; j<=n; j+=i){
                dp[j]=1;
            }
        }
    }
    char str[100];
    while (scanf("%s", str)!=EOF){
        int len;
        len=strlen(str);
        c=0;
        for (int i=0; i<len; i++){
            if (str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-96;
                c=c+str[i];

            }
            else {
                str[i]=str[i]-38;
                c=c+str[i];
            }
        }
        if (dp[c]==0) cout << "It is a prime word."<< endl;
        else cout << "It is not a prime word." <<  endl;
    }
}
