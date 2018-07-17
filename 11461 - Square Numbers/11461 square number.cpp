/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main ()
{
    long long int a, b;
    while (1){
        cin >> a >> b;
        if (a==0 && b==0) break;
        long long int c=0;
        long long int j;
        for (long long i=a;i<=b;i++){
            j=sqrt(i);
            if ((j*j)-i==0) c++;
        }
        cout << c << endl;
    }
    return 0;
}
