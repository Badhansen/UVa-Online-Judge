/**
                                Badhan Sen
                            Student of C.S.E
                jessore University of Science & Technology
                        Mail: galaxybd9@gmail.com

                        Solved

*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int H, M;
    char S;
    while (1){
        cin >> H >> S >> M;
        if (H==0 && M==0) break;


        double angle, mx, ck;
        mx=60*H;
        ck=11*M;

        angle=fabs((mx-ck)/2);
        if(angle>180){
            angle=360.00-angle;
        }
        cout << fixed;
        cout << setprecision(3) << angle << endl;
    }
    return 0;
}


