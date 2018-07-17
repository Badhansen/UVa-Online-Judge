#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, h, w;
    while(scanf("%d%d%d%d", &n, &b, &h, &w)!=EOF){
        int p, mx=9999999;
        for (int i=0; i<h; i++){
            scanf("%d", &p);
            for (int j=0; j<w; j++){
                int a;
                scanf("%d", &a);
                if (a>=n){
                    if (n*p<=b && n*p<mx){
                        mx=n*p;
                    }
                }
            }
        }
        if (mx!=9999999){
            printf("%d\n", mx);
        }
        else {
            printf("stay home\n");
        }



    }
    return 0;
}
