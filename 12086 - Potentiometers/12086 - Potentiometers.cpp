/*
    A beautiful Bit problem
*/

#include<bits/stdc++.h>

using namespace std;
int ara[200009];
int b[200001];
int n;
int ok(int x)
{
    return x&(-x);
}

void built (int x, int val)
{
    while (x<=n){
        b[x]+=val;
        x+=ok(x);
    }
}
int query (int x)
{
    int sum=0;
    while(x>0){
        sum+=b[x];
        x-=ok(x);
    }
    return sum;
}

int query (int i, int j)
{
    return query(j)-(i==0?0:query(i-1));
}


int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  c=1, flag=0;
    while (1){
        cin >> n;
        if (n==0) {
            return 0;
        }
        if (n!=0 && flag!=0) {
            cout << endl;

        }
        flag++;
        memset (b, 0, sizeof b);
        for (int i=1; i<=n; i++){
            cin >> ara[i];
            built(i, ara[i]);
        }
        cout << "Case " << c++ << ":" << endl;
        string str;
        while (1){
            cin >> str;
            if (str=="END") {
                break;
            }
            if (str=="M") {
                int i, j;
                cin >> i >> j;
                cout << query(i, j) << endl;
            }
            if (str=="S") {
                int i, val;
                cin >> i >> val;
                int temp=val-ara[i];
                built(i, temp);
                ara[i]=val;
            }
        }
    }
    return 0;
}

