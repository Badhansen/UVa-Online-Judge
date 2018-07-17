#include <bits/stdc++.h>
using namespace std;
#define MX 50000

int Multiply (int n, int result[], int result_size)
{
    int carry;
    carry=0;
    for (int i=0; i<result_size; i++){
        int temp;
        temp=result[i]*n + carry;
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

int Factorial (int n)
{
    int result[MX], result_size, sum;
    result[0]=1;
    result_size=1;
    sum=0;
    for (int i=2; i<=n; i++){
        result_size=Multiply(i, result, result_size);
    }
    for (int i=result_size-1; i>=0; i--){
        sum=sum+result[i];
    }
    return sum;
}



int main ()
{
    int n;
    while (scanf("%d", &n)!=EOF){
        cout << Factorial (n) << endl;
    }

    return 0;
}
