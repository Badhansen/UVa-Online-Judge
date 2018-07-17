// Ok code AC 263 position
#include<bits/stdc++.h>

using namespace std;
#define MAX 5000
int fac[501][10];
int result[MAX];
int Multiply(int x, int result[], int result_size)
{
    int carry;
    carry=0;
    for (int i=0;i<result_size;i++){
        int temp;
        temp=result[i]*x + carry;
        result[i]=temp%10;
        carry=temp/10;
    }
    while (carry>0){
        result[result_size]=carry%10;
        carry/=10;
        result_size++;
    }
    return result_size;
}
void Factorial(int n)
{
    int result_size;
    result[0]=1;
    result_size=1;
    fac[1][1]=1;
    for (int i=2; i<=n; i++){
        result_size=Multiply(i, result, result_size);
        for (int j=0; j<result_size; j++){
            fac[i][result[j]]++;
        }
    }
}
int main()
{

    Factorial(500);
    int n;
    while(1){
        scanf("%d", &n);
        if (n==0) break;
        printf("%d! --\n", n);
        for (int i=0; i<5; i++){
            if (i==4)
                printf("     (%d)%5d\n", i, fac[n][i]);
            else
                printf("     (%d)%5d", i, fac[n][i]);
        }
        for (int i=5; i<10; i++){
           if (i==9)
                printf("     (%d)%5d\n", i, fac[n][i]);
            else
                printf("     (%d)%5d", i, fac[n][i]);
        }

    }
    return 0;
}
