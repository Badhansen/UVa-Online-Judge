#include <bits/stdc++.h>

using namespace std;

#define MAX 50000
/// This function multiplies x with the number represented by result[].
/// result_size is size of result[] or number of digits in the number represented
/// by result[]. This function uses simple school mathematics for multiplication.
/// This function may value of result_size and returns the new value of result_size

int Multiply(int x, int result[], int result_size)
{
    int carry;
    ///initialize value
    carry=0;
    /// One by one multiply n with individual digits of result[]
    for (int i=0;i<result_size;i++){
        int temp;
        temp=result[i]*x + carry;
        result[i]=temp%10; ///Store last digit of temp
        carry=temp/10;  ///put the rest in carry
    }
    while (carry>0){
        result[result_size]=carry%10;
        carry/=10;
        result_size++;
    }
    return result_size;
}

/// This function finds factorial of large numbers and prints them

void Factorial(int n)
{
    int result[MAX], result_size;
    ///initialize value
    result[0]=1;
    result_size=1;
    /// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int i=2; i<=n; i++){

        result_size=Multiply(i, result, result_size);
    }

    cout << n << "!" << endl;

    for (int i=result_size-1; i>=0; i--){
        cout << result[i];
    }
    cout << endl;
}



int main ()
{

    int n;
    while (scanf("%d", &n)!=EOF){
        Factorial(n);
    }
    return 0;
}
