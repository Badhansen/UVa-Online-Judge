#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int T, n, sum, a[10], ck;
    cin >> T;
    while (T--){
        cin >> n;
        a[0]=0;
        a[1]=0;
        a[2]=0;
        a[3]=0;
        a[4]=0;
        a[5]=0;
        a[6]=0;
        a[7]=0;
        a[8]=0;
        a[9]=0;
        for (int i=1; i<=n; i++){
            sum=i;
            while (sum){
                ck=sum%10;
                switch (ck){
                    case 0: a[0]++;
                    break;
                    case 1: a[1]++;
                    break;
                    case 2: a[2]++;
                    break;
                    case 3: a[3]++;
                    break;
                    case 4: a[4]++;
                    break;
                    case 5: a[5]++;
                    break;
                    case 6: a[6]++;
                    break;
                    case 7: a[7]++;
                    break;
                    case 8: a[8]++;
                    break;
                    case 9: a[9]++;
                    break;
                }
                sum/=10;
            }
        }
        for (int i=0; i<10; i++){
            if (i==9) cout << a[i] << endl;
            else
                cout << a[i] << " ";
        }
    }

    return 0;
}
