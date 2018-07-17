#include<bits/stdc++.h>


using namespace std;


#define FIO()          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x)         x.begin(), x.end()


#define Max(x, y)      ((x)>(y) ? (x) : (y))
#define Min(x, y)      ((x)<(y) ? (x) : (y))
#define Abs(x)         ((x)<0 ? (-(x)): (x))


#define PI             acos(-1.0)
#define EPS            1e-9


#define MAX            2e18
#define MOD            1000000007


typedef long long i64;
typedef unsigned long long ui64;
typedef pair<int, int> pii;
typedef pair<i64, i64> pll;
typedef vector<int> vi;
typedef vector<i64> vl;


template<class T> T POW (T b, T p){T res=1;while(p>0){if (p&1) res*=b;p >>= (1ll), b*=b;}return res;}
template<class T> T bMOD (T a, T p, T m){ if (p==0) return (T) 1;if (!(p&1)){T temp=bMOD(a, p/2, m);return ((temp%m)*(temp%m))%m;}return ((a%m)*(bMOD(a, p-1, m)%m))%m;}
template<class T> T inMOD (T a, T m){return bMOD (a, m-2, m);}
template<class T> bool isPrime (T n){ for (T i=2; i*i<=n; i++){if (n%i==0) return false;}return true;}
template<class T> string toString (T n){ stringstream ss;string num;ss<<n;ss>>num;return num;}
template<class T> T sq (T n){ return (n*n);}
template<class T> T gcd (T a, T b){ return (b==0) ? a : gcd (b, a%b);}
template<class T> T lcm (T a, T b){ return (a/gcd (a, b))*b;}
bool iseq (double a, double b){ return fabs(a-b)<EPS;}
template<class T> T toDeg (T x){ return (180.0*x)/((T)PI);}
template<class T> T toReg (T x){ return (x*(T)PI)/(180.0);}
template<class T> double _distance (T x1, T y1, T x2, T y2){ return 1.0*sqrt(sq(x1-x2)+sq(y1-y2));}

int kx[]={-2, -2, +2, +2, +1, -1, +1, -1};
int ky[]={+1, -1, +1, -1, -2, -2, +2, +2};

int dx[]={+0, +0, -1, +1, +1, +1, -1, -1};
int dy[]={+1, -1, +0, +0, -1, +1, +1, -1};






/*

    MY code start here
    solved

*/
int row, column, r, c;

char matrix [100+5] [100+5];
bool visited[100+5][100+5];

int floodfill(int r, int c)
{
    if (r<0 || c<0 || c==column || r==row) return 0;
    if (matrix[r][c]=='L' || visited[r][c]) return 0;
    visited[r][c]=true;
    int ans=1;
    for (int i=0; i<8; i++){
        ans+=floodfill(r+dx[i], c+dy[i]);
    }
    return ans;
}

int main()
{

    //freopen("int.txt", "r", stdin);
    //freopen("in.txt", "w", stdout);
    int testCase;
    scanf ("%d", &testCase);
    getchar (); getchar ();
    bool blank = false;

    while ( testCase-- ) {
        char inp [1000];
        row = column = 0;

        if ( blank ) printf ("\n"); blank = true;

        while ( gets (inp) && strlen (inp) > 0 ) {
            if ( inp [0] == 'L' || inp [0] == 'W' ) {
                strcpy (matrix [row], inp);
                column = strlen (inp);
                row++;
            }
            else {
                int r, c;
                sscanf(inp, "%d %d", &r, &c);

                memset(visited, false, sizeof visited);
                cout << floodfill(--r, --c) << endl;

            }
        }
    }

    return 0;
}


