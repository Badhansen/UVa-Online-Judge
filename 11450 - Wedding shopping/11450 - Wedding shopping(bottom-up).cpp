/*
    11450 - Wedding shopping is an interesting dp problem
    The main idea is to build a table of reachable in bottom up manner and
    calculate the base case of first row. if i bought the
    first item then check the other item can be bought.
    In this manner i reached the last step so there is a solution if not
    "no solution" .......



    Thanks to Steven & Felix ....

*/

#include<bits/stdc++.h>

using namespace std;
int N, M, C;
int price[21][21];
int reachable[21][201];
int main ()
{

    int i, j, g, k, money;

    scanf("%d", &N);
    while (N--){
        scanf("%d%d", &M, &C);
        for (i=0; i<C; i++){
            scanf("%d", &price[i][0]);
            for (j=1; j<=price[i][0]; j++){
                scanf("%d", &price[i][j]);
            }

        }
        memset (reachable, false, sizeof reachable);

        for (g=1; g<=price[0][0]; g++){
            if (M-price[0][g]>=0){
                reachable[0][M-price[0][g]]=true;
            }
        }

        for (g=1; g<C; g++){
            for (money=0; money<M; money++){
                if (reachable[g-1][money]){
                    for (k=1; k<=price[g][0]; k++){
                        if (money-price[g][k]>=0){
                            reachable[g][money-price[g][k]]=true;
                        }

                    }
                }

            }
        }
        int flag=0;
        for (money=0; money<=M; money++){
            if (reachable[C-1][money]==true){
                flag=1;
                printf ("%d\n", M-money);
                break;
            }
        }
        if (flag==0){
            printf("no solution\n");
        }
    }
    return 0;
}
