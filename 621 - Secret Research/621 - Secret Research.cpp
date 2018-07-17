#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main ()
{
    char str[1000000];
    int n;
    cin >> n;
    while (n--){
        cin >> str;

        if (str[strlen(str)-1]=='5' && str[strlen(str)-2]=='3')
            cout << "-" << endl;
        else if (str[0]=='9' && str[strlen(str)-1]=='4')
            cout << "*" << endl;
        else if (str[0]=='1' && str[1]=='9' && str[2]=='0')
            cout << "?" << endl;
        else
            cout << "+" << endl;
    }
    return 0;
}
