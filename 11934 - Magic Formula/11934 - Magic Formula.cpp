#include<bits/stdc++.h>

using namespace std;

int f (int x, int a, int b, int c)
{
    int sum;
    sum=a*pow(x, 2)+b*x+c;
    return sum;
}



int main ()
{
    int a, b, c, d, L;
    while (1){
        int ck=0;
        cin >> a >> b >> c >> d >> L;
        if (a==0 && b==0 && c==0 && d==0 && L==0) break;
        for (int i=0; i<=L; i++){
            if (f(i, a, b, c)%d==0) ck++;
        }
        cout << ck << endl;
    }

    return 0;
}




