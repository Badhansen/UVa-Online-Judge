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

int x[]={+0, +0, +1, -1};
int y[]={+1, -1, +0, +0};





/*

    MY code start here
    solved

*/

bool matrix[1001][1001];
bool visited[1001][1001];
int d[1001][1001];
int row, column;
bool inline valid(int nx, int ny)
{
    if (nx>=0 && nx<row && ny>=0 && ny<column && matrix[nx][ny]==false && visited[nx][ny]==false){
        return true;
    }
    return false;
}
int bfs(int r, int c, int rd, int cd)
{

    queue<pair<int, int> > q;
    q.push(make_pair(r, c));
    visited[r][c]=true;
    d[r][c]=0;
    while (!q.empty()){
        pair<int, int> node;
        node=q.front();
        q.pop();
        if (node.first==rd && node.second==cd){
            return d[rd][cd];
        }
        for (int i=0; i<4; i++){
            int nx, ny;
            nx=node.first+x[i];
            ny=node.second+y[i];
            if (valid(nx, ny)){
                visited[nx][ny]=true;
                d[nx][ny]=d[node.first][node.second]+1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main ()
{
    //freopen("int.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(scanf("%d%d", &row, &column) && row!=0 && column!=0){
        memset(matrix, false, sizeof matrix);
        memset(visited, false, sizeof visited);
        memset(d, 0, sizeof d);
        int n;
        scanf("%d", &n);
        for (int i=0; i<n; i++){
            int r, num;
            scanf("%d%d", &r, &num);
            for (int j=0; j<num; j++){
                int c;
                scanf("%d", &c);
                matrix[r][c]=true;
            }
        }
        int r, c, rd, cd;
        scanf("%d%d%d%d", &r, &c, &rd, &cd);
        cout << bfs(r, c, rd, cd) << endl;

    }
    return 0;
}



