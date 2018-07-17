#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int m, ara[1000];
        cin >> m;
        for (int j=0; j<m; j++){
            cin >> ara[j];
        }
        int c=0;
        for (int k=0; k<m; k++){
            for (int h=0; h<m-1; h++){
                for (int x=h+1; x<m; x++)
                    if (ara[h]>ara[x]){
                        int t;
                        t=ara[h];
                        ara[h]=ara[x];
                        ara[x]=t;
                        c++;
                        break;
                    }
            }
        }
        printf ("Optimal train swapping takes %d swaps.\n", c);
    }
    return 0;
}

