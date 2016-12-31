/* *****************************************************************
   *                   BISMILLAHIR RAHMANIR RAHIM                  *
   *                                                               *
   *   Md. Rezwanul Haque                                          *
   *   CSE-2K14 (KUET)                                             *
   *   Khulna University of Engineering & Technology, Bangladesh.  *
   *   Gmail : r.haque.249.rh@gmail.com                            *
   *****************************************************************


   ********     *************    *************   **               **             ***              ***          **
   **********   ************      ***********    **               **            ** **             ****         **
   **      **   **                        **     **               **           **   **            ** **        **
   **      **   **                       **      **               **          **     **           **  **       **
   **      **   **                      **       **      ***      **         **       **          **   **      **
   *********    ***********            **        **     ** **     **        *************         **    **     **
   ********     ***********           **         **    **   **    **       ***************        **     **    **
   ****         **                   **          **   **     **   **      **             **       **      **   **
   **  **       **                  **           **  **       **  **     **               **      **       **  **
   **   **      **                 **            ** **         ** **    **                 **     **        ** **
   **    **     ***********       ***********    ****           ****   **                   **    **         ****
   **     **    *************    *************   ***             ***  **                     **   **          ***   */



#include <bits/stdc++.h>
using namespace std;

#define rezwan             ios_base::sync_with_stdio(0); cin.tie(0);
#define read               freopen("in.txt","r",stdin)
#define write              freopen("out.txt","w",stdout)
#define rep(i,n)           for(int i=0; i<(int)n; i++)
#define repv(i,n)          for(int i=n-1; i>=0; i--)
#define repl(i,n)          for(int i=1; i<=(int)n; i++)
#define replv(i,n)         for(int i=n; i>=1; i--)
#define pb                 push_back /// NOTES: pb(
#define SIZE(X)            ((int)(X.size()))///NOTES:SIZE(
#define LENGTH(X)          ((int)(X.length()))///NOTES:LENGTH(
#define MP(X,Y)            make_pair(X,Y)///NOTES:MP(
#define two(X)             (1<<(X))///NOTES:two(
#define twoL(X)            (((int64)(1))<<(X))///NOTES:twoL(
#define contain(S,X)       (((S)&two(X))!=0)///NOTES:contain(
#define containL(S,X)      (((S)&twoL(X))!=0)///NOTES:containL(
#define MAX                100005

typedef long long          int64;///NOTES:int64
typedef long long int      ll;
typedef unsigned long long uint64;///NOTES:uint64

const double pi=acos(-1.0);///NOTES:pi
const double eps=1e-11;///NOTES:eps

/* Prime Numbers: 1000 */
ll PRIME_NUMBERS[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919};

template<class T> inline void checkmin(T &a,T b) {
    if(b<a) a=b;   ///NOTES:checkmin(
}
template<class T> inline void checkmax(T &a,T b) {
    if(b>a) a=b;   ///NOTES:checkmax(
}
template<class T> inline T sqr(T x) {
    return x*x;   ///NOTES:sqr
}
typedef pair<int,int> ipair;///NOTES:ipair
template<class T> inline T lowbit(T n) {
    return (n^(n-1))&n;   ///NOTES:lowbit(
}
template<class T> inline int countbit(T n) {
    return (n==0)?0:(1+countbit(n&(n-1)));   ///NOTES:countbit(
}
///Numberic Functions
template<class T> inline T gcd(T a,T b) { ///NOTES:gcd(
    if(a<0)return gcd(-a,b);
    if(b<0)return gcd(a,-b);
    return (b==0)?a:gcd(b,a%b);
}
template<class T> inline T lcm(T a,T b) { ///NOTES:lcm(
    if(a<0)return lcm(-a,b);
    if(b<0)return lcm(a,-b);
    return a*(b/gcd(a,b));
}
template<class T> inline T euclide(T a,T b,T &x,T &y) { ///NOTES:euclide(
    if(a<0) {
        T d=euclide(-a,b,x,y);
        x=-x;
        return d;
    }
    if(b<0) {
        T d=euclide(a,-b,x,y);
        y=-y;
        return d;
    }
    if(b==0) {
        x=1;
        y=0;
        return a;
    } else {
        T d=euclide(b,a%b,x,y);
        T t=x;
        x=y;
        y=t-(a/b)*y;
        return d;
    }
}
template<class T> inline vector<pair<T,int> > factorize(T n) { ///NOTES:factorize(
    vector<pair<T,int> > R;
    for (T i=2; n>1;) {
        if (n%i==0) {
            int C=0;
            for (; n%i==0; C++,n/=i);
            R.push_back(make_pair(i,C));
        }
        i++;
        if (i>n/i) i=n;
    }
    if (n>1) R.push_back(make_pair(n,1));
    return R;
}
template<class T> inline bool isPrimeNumber(T n) { ///NOTES:isPrimeNumber(
    if(n<=1)return false;
    for (T i=2; i*i<=n; i++) if (n%i==0) return false;
    return true;
}
template<class T> inline T eularFunction(T n) { ///NOTES:eularFunction(
    vector<pair<T,int> > R=factorize(n);
    T r=n;
    for (int i=0; i<R.size(); i++)r=r/R[i].first*(R[i].first-1);
    return r;
}
///Matrix Operations
const int MaxMatrixSize=40;///NOTES:MaxMatrixSize
template<class T> inline void showMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:showMatrix(
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)cout<<A[i][j];
        cout<<endl;
    }
}
template<class T> inline T checkMod(T n,T m) {
    return (n%m+m)%m;   ///NOTES:checkMod(
}
template<class T> inline void identityMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:identityMatrix(
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) A[i][j]=(i==j)?1:0;
}
template<class T> inline void addMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:addMatrix(
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) C[i][j]=A[i][j]+B[i][j];
}
template<class T> inline void subMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:subMatrix(
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) C[i][j]=A[i][j]-B[i][j];
}
template<class T> inline void mulMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:mulMatrix(
    T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize];
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) C[i][j]+=A[i][k]*B[k][j];
}
template<class T> inline void addModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:addModMatrix(
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) C[i][j]=checkMod(A[i][j]+B[i][j],m);
}
template<class T> inline void subModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:subModMatrix(
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) C[i][j]=checkMod(A[i][j]-B[i][j],m);
}
template<class T> inline T multiplyMod(T a,T b,T m) {
    return (T)((((int64)(a)*(int64)(b)%(int64)(m))+(int64)(m))%(int64)(m));   ///NOTES:multiplyMod(
}
template<class T> inline void mulModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize]) { ///NOTES:mulModMatrix(
    T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize];
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) for (int k=0; k<n; k++) C[i][j]=(C[i][j]+multiplyMod(A[i][k],B[k][j],m))%m;
}
template<class T> inline T powerMod(T p,int e,T m) { ///NOTES:powerMod(
    if(e==0)return 1%m;
    else if(e%2==0) {
        T t=powerMod(p,e/2,m);
        return multiplyMod(t,t,m);
    } else return multiplyMod(powerMod(p,e-1,m),p,m);
}
///Point&Line
double dist(double x1,double y1,double x2,double y2) {
    return sqrt(sqr(x1-x2)+sqr(y1-y2));   ///NOTES:dist(
}
double distR(double x1,double y1,double x2,double y2) {
    return sqr(x1-x2)+sqr(y1-y2);   ///NOTES:distR(
}
template<class T> T cross(T x0,T y0,T x1,T y1,T x2,T y2) {
    return (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);   ///NOTES:cross(
}
int crossOper(double x0,double y0,double x1,double y1,double x2,double y2) { ///NOTES:crossOper(
    double t=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    if (fabs(t)<=eps) return 0;
    return (t<0)?-1:1;
}
bool isIntersect(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4) { ///NOTES:isIntersect(
    return crossOper(x1,y1,x2,y2,x3,y3)*crossOper(x1,y1,x2,y2,x4,y4)<0 && crossOper(x3,y3,x4,y4,x1,y1)*crossOper(x3,y3,x4,y4,x2,y2)<0;
}
bool isMiddle(double s,double m,double t) {
    return fabs(s-m)<=eps || fabs(t-m)<=eps || (s<m)!=(t<m);   ///NOTES:isMiddle(
}
//Translator
bool isUpperCase(char c) {
    return c>='A' && c<='Z';   ///NOTES:isUpperCase(
}
bool isLowerCase(char c) {
    return c>='a' && c<='z';   ///NOTES:isLowerCase(
}
bool isLetter(char c) {
    return c>='A' && c<='Z' || c>='a' && c<='z';   ///NOTES:isLetter(
}
bool isDigit(char c) {
    return c>='0' && c<='9';   ///NOTES:isDigit(
}
char toLowerCase(char c) {
    return (isUpperCase(c))?(c+32):c;   ///NOTES:toLowerCase(
}
char toUpperCase(char c) {
    return (isLowerCase(c))?(c-32):c;   ///NOTES:toUpperCase(
}
template<class T> string toString(T n) {
    ostringstream ost;    ///NOTES:toString(
    ost<<n;
    ost.flush();
    return ost.str();
}
int toInt(string s) {
    int r=0;    ///NOTES:toInt(
    istringstream sin(s);
    sin>>r;
    return r;
}
int64 toInt64(string s) {
    int64 r=0;    ///NOTES:toInt64(
    istringstream sin(s);
    sin>>r;
    return r;
}
double toDouble(string s) {
    double r=0;    ///NOTES:toDouble(
    istringstream sin(s);
    sin>>r;
    return r;
}
template<class T> void stoa(string s,int &n,T A[]) {
    n=0;    ///NOTES:stoa(
    istringstream sin(s);
    for(T v; sin>>v; A[n++]=v);
}
template<class T> void atos(int n,T A[],string &s) {
    ostringstream sout;    ///NOTES:atos(
    for(int i=0; i<n; i++) {
        if(i>0)sout<<' ';
        sout<<A[i];
    }
    s=sout.str();
}
template<class T> void atov(int n,T A[],vector<T> &vi) {
    vi.clear();    ///NOTES:atov(
    for (int i=0; i<n; i++) vi.push_back(A[i]);
}
template<class T> void vtoa(vector<T> vi,int &n,T A[]) {
    n=vi.size();    ///NOTES:vtoa(
    for (int i=0; i<n; i++)A[i]=vi[i];
}
template<class T> void stov(string s,vector<T> &vi) {
    vi.clear();    ///NOTES:stov(
    istringstream sin(s);
    for(T v; sin>>v; vi.push_bakc(v));
}
template<class T> void vtos(vector<T> vi,string &s) {
    ostringstream sout;    ///NOTES:vtos(
    for (int i=0; i<vi.size(); i++) {
        if(i>0)sout<<' ';
        sout<<vi[i];
    }
    s=sout.str();
}
///Fraction
template<class T> struct Fraction {
    T a,b;
    Fraction(T a=0,T b=1);
    string toString();
};///NOTES:Fraction
template<class T> Fraction<T>::Fraction(T a,T b) {
    T d=gcd(a,b);
    a/=d;
    b/=d;
    if (b<0) a=-a,b=-b;
    this->a=a;
    this->b=b;
}
template<class T> string Fraction<T>::toString() {
    ostringstream sout;
    sout<<a<<"/"<<b;
    return sout.str();
}
template<class T> Fraction<T> operator+(Fraction<T> p,Fraction<T> q) {
    return Fraction<T>(p.a*q.b+q.a*p.b,p.b*q.b);
}
template<class T> Fraction<T> operator-(Fraction<T> p,Fraction<T> q) {
    return Fraction<T>(p.a*q.b-q.a*p.b,p.b*q.b);
}
template<class T> Fraction<T> operator*(Fraction<T> p,Fraction<T> q) {
    return Fraction<T>(p.a*q.a,p.b*q.b);
}
template<class T> Fraction<T> operator/(Fraction<T> p,Fraction<T> q) {
    return Fraction<T>(p.a*q.b,p.b*q.a);
}

const int maxn=40+5;

int n,A[maxn],T[maxn];

bool checkIt(int s) {
    int B[maxn];
    for (int i=s; i<n; i++) B[i]=A[i];
    sort(B+s,B+n);
    for (int i=s; i<n; i++) if (B[i]>i) return false;
    return true;
}

inline int charToInt(char ch) {
    return ((int)ch - int('a'));
}


/// BigInt

struct Bigint {
    // representations and structures
    string a; // to store the digits
    int sign; // sign = -1 for negative numbers, sign = 1 otherwise

    // constructors
    Bigint() {} // default constructor
    Bigint( string b ) {
        (*this) = b;    // constructor for string
    }

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
        int s = sign;
        sign = b.sign = 1;
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
        int dSign = sign * b.sign;
        b.sign = 1;
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


///BigMod

ll bigMod(ll a,ll p,ll m) {
    if(p==0)
        return 1;

    if(p%2==0) {                      /// p is even then split it up and mod
        ll c =bigMod(a,p/2,m);
        return ( (c%m) * (c%m) )%m;
    } else                           /// p is odd then make it even
        return ( (a%m)* bigMod(a,p-1,m) ) %m;
}

/// BIT

ll biTree[MAX];
ll Input[MAX];
ll Output[MAX];

ll maxval = 0;

void update(ll idx, ll val) {
    while(idx<=maxval) {
        biTree[idx] = (biTree[idx] + val);
        idx += (idx & -idx);
    }
}

ll query(ll idx) {
    ll sum  = 0;
    while(idx>0) {
        sum = (sum + biTree[idx]);
        idx -= (idx & -idx);
    }
    return sum;
}

ll range_query(ll start, ll End) {
    if(start>End) {
        return 0;
    }
    return query(End) - query(start - 1);
}

ll BinBit(ll N) { /// binary bit count
    string binary1 = bitset<64>(N).to_string(); //to binary
    //cout<<binary1<<"\n";
    ll cnt  = 0;
    for(ll i = 0; i<binary1.size(); i++) {
        if(binary1[i] == '1') {
            cnt++;
        }
    }
    //cout<< cnt << endl;
    return cnt;
}

/// Sieve of Eratosthenes

void Sieve(ll N) {
//int N = 5000;
    ll status[N/2 + 1];


    ll i,j,sqrtN;
    for(i = 2; i<=N>>1 ; i++) {
        status[i] = 0;
    }
    sqrtN = ll(sqrt((double)N));

    for(i = 3; i<=sqrtN; i+=2) {
        if(status[i>>1] == 0) {
            for(j=i*i; j<=N; j+=i+i) {
                status[j>>1] = 1;
            }
        }
    }
    ll cnt  = 1;
    printf("2 ");
    for(i=3; i<=N; i+=2) {
        if(status[i>>1] == 0) {
            printf("%lld ",i);
            cnt++;
        }
    }
    printf("\n\nPrmNums : %lld\n",cnt);

}



/***** Main Function Start Here *****/

int main() {

    int T;
    scanf("%d",&T);
    repl(cs,T){
        int N,sum = 0;
        printf("Case %d:\n",cs);
        cin>>N;
        while(N--){
            string s;
            int A;
            cin>>s;
            if(s == "donate"){
                cin>> A;
                sum+=A;
            }
            else if(s == "report"){
                cout<< sum << endl;
            }

        }

    }

    return 0;
}
