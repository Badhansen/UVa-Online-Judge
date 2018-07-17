#include<bits/stdc++.h>

using namespace std;

int main ()
{


    string str[12];
    str[0]="    ";
    str[1]=" .,?";
    str[2]=" abc";
    str[3]=" def";
    str[4]=" ghi";
    str[5]=" jkl";
    str[6]=" mno";
    str[7]=" pqrs";
    str[8]=" tuv";
    str[9]=" wxyz";
    int t, l, a[1001], b[1001];
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> l;


        for (int j=0; j<l; j++){
            cin >> a[j];
        }
        for (int j=0; j<l; j++){
            cin >> b[j];
        }

        for (int h=0; h<l; h++){
            if (a[h]==1 && b[h]==4){
                cout << char (34);
            }
            else {

                cout << str[a[h]][b[h]];
            }
        }
        cout << endl;
    }

    return 0;
}





