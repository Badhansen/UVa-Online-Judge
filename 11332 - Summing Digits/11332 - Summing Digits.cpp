#include <bits/stdc++.h>
using namespace std;
long long int digit_sum (long long int number)
{
    long long int sum=0;
    while (number){
        sum=sum+number%10;
        number/=10;
    }
    return sum;
}
int main ()
{

    long long int T, number;
    while (1){
        cin >> number;
        if (number==0)
            break;
        long long int sum=0;
        sum=digit_sum(number);

        while (sum>9){
            sum=digit_sum(sum);
        }
        cout << sum << endl;
    }
    return 0;
}

