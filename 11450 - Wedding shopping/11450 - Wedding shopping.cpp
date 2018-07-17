#include <bits/stdc++.h>

using namespace std;
int N, M, C, K;
int memo[210][23];
int price[21][21];
int shop (int money, int germent)
{
    if (money<0)
        return -99999999;

    if (germent==C)
        return M-money;

    if (memo[money][germent]!=-1)
        return memo[money][germent];

    int ans=-1;

    for(int i=1; i<=price[germent][0]; i++){
        ans=max(ans, shop(money-price[germent][i], germent+1));
    }

    return memo[money][germent]=ans;
}
int main ()
{
    int i, j;

    scanf("%d", &N);
    while (N--){
        scanf("%d%d", &M, &C);
        for (i=0; i<C; i++){
            scanf("%d", &price[i][0]);
            for (j=1; j<=price[i][0]; j++){
                scanf("%d", &price[i][j]);
            }

        }
        memset (memo, -1, sizeof memo);
        int ans=shop(M, 0);
        if (ans<0)
            printf("no solution\n");
        else {
            printf("%d\n", ans);
        }
    }


    return 0;
}
