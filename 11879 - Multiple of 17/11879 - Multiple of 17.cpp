#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<limits>


using namespace std;


#define filein()       freopen("in.txt", "r", stdin)
#define fileout()      freopen("out.txt", "w", stdout)

#define FIO()          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


#define all(x)         x.begin(), x.end()
#define nfound(v, n)   find(all(v), n)==v.end()
#define found(v, n)    find(all(v), n)!=v.end()
#define UB(v, n)       upper_bound(all(v), n)-v.begin()
#define LB(v, n)       lower_bound(all(v), n)-v.begin()


#define on(n, p)       (n | (1<<(p)))
#define off(n, p)      (n & ~(1<<(p)))
#define check(n, p)    (bool)(n & (1<<(p)))


#define MS(x, v)       memset(&x, v, sizeof(x))
#define CL(x)          memset(&x, 0, sizeof(x))
#define mp             make_pair
#define pb             push_back
#define p              push
#define sz             size
#define cl             clear
#define po             pop
#define em             emplty
#define ss             second
#define fi             first

#define sf             scanf
#define pf             printf
#define pf1(n)         pf("%d", n)
#define sc1(n)         sf("%d", &n)
#define scl1(n)        sf("%I64d", &n)
#define sc2(n, m)      sf("%d %d", &n, &m)
#define scl2(n, m)     sf("%I64d %I64d", &n, &m)
#define sc3(n, m, v)   sf("%d %d %d", &n, &m, &v)
#define scl3(n, m, v)  sf("%I64d %I64d %I64d", &n, &m, &v)
#define nl()           pf("\n")
#define endl           '\n'


#define Iterator(s)    for(typeof(s.begin()) it=s.begin(); it!=s.end(); it++)
#define FOR(i, k, n)   for(i=k; i<=n; i++)
#define For(i, k, n)   for(i=k; i<n; i++)
#define ROF(i, n)      for(i=n; i>=0; i--)
#define REP(i, n)      for(i=0; i<n; i++)


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


template<class T> inline void IO(T &x){char c=getchar();T sgn=1;while(c<'0' || c>'9'){if (c=='-') sgn=-1;c=getchar();}x=0;while(c>='0' && c<='9'){x=(T)(x<<1)+(x<<3)+c-'0';c=getchar();}x*=sgn;}
template<class T> T POW(T b, T p){T res=1;while(p>0){if (p&1) res*=b;p >>= (1ll), b*=b;}return res;}
template<class T> T bMOD(T a, T p, T m){if (p==0) return (T) 1;if (!(p&1)){T temp=bMOD(a, p/2, m);return ((temp%m)*(temp%m))%m;}return ((a%m)*(bMOD(a, p-1, m)%m))%m;}
template<class T> T inMOD(T a, T m){return bMOD(a, m-2, m);}
template<class T> bool isPrime(T n){for(T i=2; i*i<=n; i++){if (n%i==0) return false;}return true;}
template<class T> string toString(T n){stringstream ss;string num;ss<<n;ss>>num;return num;}
template<class T> T sq(T n){return (n*n);}
template<class T> T gcd(T a, T b){return (b==0) ? a : gcd (b, a%b);}
template<class T> T lcm(T a, T b){return (a/gcd (a, b))*b;}
bool iseq(double a, double b){return fabs(a-b)<EPS;}
template<class T> T toDeg(T x){return (180.0*x)/((T)PI);}
template<class T> T toReg(T x){return (x*(T)PI)/(180.0);}
template<class T> double _distance (T x1, T y1, T x2, T y2){return 1.0*sqrt(sq(x1-x2)+sq(y1-y2));}

int kx[]={-2, -2, +2, +2, +1, -1, +1, -1};
int ky[]={+1, -1, +1, -1, -2, -2, +2, +2};

int dx[]={+0, +0, -1, +1, +1, +1, -1, -1};
int dy[]={+1, -1, +0, +0, -1, +1, +1, -1};


int x[]={+0, +0, +1, -1};
int y[]={+1, -1, +0, +0};




/*

    @author: Badhan Sen
    CSE, JUST.
    mail: galaxybd9@gmail.com
    Solved
*/



// header files

struct Bigint {
    // representations and structures
    string a; // to store the digits
    int sign; // sign = -1 for negative numbers, sign = 1 otherwise

    // constructors
    Bigint() {} // default constructor
    Bigint( string b ) { (*this) = b; } // constructor for string

    // some helpful methods
    int size() { // returns number of digits
        return a.size();
    }
    Bigint inverseSign() { // changes the sign
        sign *= -1;
        return (*this);
    }
    Bigint normalize( int newSign ) { // removes leading 0, fixes sign
        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )
            a.erase(a.begin() + i);
        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;
        return (*this);
    }

    // assignment operator
    void operator = ( string b ) { // assigns a string to Bigint
        a = b[0] == '-' ? b.substr(1) : b;
        reverse( a.begin(), a.end() );
        this->normalize( b[0] == '-' ? -1 : 1 );
    }

    // conditional operators
    bool operator < ( const Bigint &b ) const { // less than operator
        if( sign != b.sign ) return sign < b.sign;
        if( a.size() != b.a.size() )
            return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();
        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] )
            return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];
        return false;
    }
    bool operator == ( const Bigint &b ) const { // operator for equality
        return a == b.a && sign == b.sign;
    }



    // mathematical operators
    Bigint operator + ( Bigint b ) { // addition operator overloading
        if( sign != b.sign ) return (*this) - b.inverseSign();
        Bigint c;
        for(int i = 0, carry = 0; i<a.size() || i<b.size() || carry; i++ ) {
            carry+=(i<a.size() ? a[i]-48 : 0)+(i<b.a.size() ? b.a[i]-48 : 0);
            c.a += (carry % 10 + 48);
            carry /= 10;
        }
        return c.normalize(sign);
    }
    Bigint operator - ( Bigint b ) { // subtraction operator overloading
        if( sign != b.sign ) return (*this) + b.inverseSign();
        int s = sign; sign = b.sign = 1;
        if( (*this) < b ) return ((b - (*this)).inverseSign()).normalize(-s);
        Bigint c;
        for( int i = 0, borrow = 0; i < a.size(); i++ ) {
            borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);
            c.a += borrow >= 0 ? borrow + 48 : borrow + 58;
            borrow = borrow >= 0 ? 0 : 1;
        }
        return c.normalize(s);
    }
    Bigint operator * ( Bigint b ) { // multiplication operator overloading
        Bigint c("0");
        for( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {
            while(k--) c = c + b; // ith digit is k, so, we add k times
            b.a.insert(b.a.begin(), '0'); // multiplied by 10
        }
        return c.normalize(sign * b.sign);
    }
    Bigint operator / ( Bigint b ) { // division operator overloading
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );
        Bigint c("0"), d;
        for( int j = 0; j < a.size(); j++ ) d.a += "0";
        int dSign = sign * b.sign; b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b, d.a[i]++;
        }
        return d.normalize(dSign);
    }
    Bigint operator % ( Bigint b ) { // modulo operator overloading
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );
        Bigint c("0");
        b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b;
        }
        return c.normalize(sign);
    }



    // output method
    void print() {
        if( sign == -1 ) putchar('-');
        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);
    }
};

int main() {
    Bigint a, b, c;
    string s, ss="17", sss="0";
    b=ss;
    while(1){
        getline(cin, s);
        if(s=="0") break;
        a=s;
        c=a%b;

        if(c==sss){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}




