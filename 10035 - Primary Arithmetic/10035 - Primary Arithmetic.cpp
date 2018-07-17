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
    long long s, q, ck, pk;
    while (1)
    {
        cin >> s >> q;
        long long c=0, co=0;
        if (s==0 && q==0) break;
        while (s!=0 || q!=0)
        {
            ck=s%10;
            pk=q%10;
            if (ck+pk>=10)
             {
                 c++;
                 co=1;
             }
             else if (ck+pk==9 && co==1)
             {
                 c++;
                 co=1;
             }
             else if (ck+pk<9 && co==1)
             {
                 co=0;
             }
            s/=10;
            q/=10;
        }
        if (c==0)
            cout << "No carry operation." << endl;
        if (c==1)
            cout << c << " carry operation." << endl;
        if (c>1)
            cout << c << " carry operations." << endl;
    }
    return 0;
}
