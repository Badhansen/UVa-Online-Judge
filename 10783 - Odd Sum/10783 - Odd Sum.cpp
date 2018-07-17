/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, a, b, sum, c=1;
    cin >> n;
    while (n--){
        cin >> a >> b;
        sum=0;
        if (a%2==1){
            for (int i=a;i<=b;i+=2){
                sum+=i;
            }
        }
        else{
            for (int i=a+1;i<=b;i+=2){
                sum+=i;
            }
        }
    cout << "Case " << c << ": " << sum << endl;
    c++;
    }
    return 0;
}


