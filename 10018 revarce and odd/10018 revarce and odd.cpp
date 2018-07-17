/*
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include <bits/stdc++.h>
using namespace std;
long long R (long long a){
    long long ck=0;
    while (a!=0){
        ck=ck*10;
        ck=ck+a%10;
        a/=10;
    }
    return ck;
}
int main ()
{
    int N;
    cin >> N;
    while (N--){
        long long a, ck=0, pk, sum, c=1;
        cin >> a;
        pk=R(a);
        sum=pk+a;
        while (1){
            if (sum==R(sum)) break;
            else {
                ck=R(sum);
            }
            c++;
            sum=sum+ck;
            }
        cout << c << " "<< sum << endl;
    }

    return 0;
}
