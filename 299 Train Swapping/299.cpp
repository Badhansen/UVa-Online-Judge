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
    long long int n, x, a[50], i, j;
    cin >> n;
    while (n--){
        cin >> x;
        long long int a[x];
        for (i=0; i<x; i++){
            cin >> a[i];
        }
        long long int c=0;
        for (i=0; i<x; i++){
            for (j=i+1; j<x; j++){
                if (a[i]>a[j]){
                    long long int temp;
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    c++;

                }
            }
        }
        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
