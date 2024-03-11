#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fraction() cout.unsetf(ios::floatfield);cout.precision(10);cout.setf(ios::fixed,ios::floatfield);

#define MOD 1000000007
const double PI = acos(-1);
const int MX = 1e7+123;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


#define fr(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n;i>=a;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define me(a,x) memset(a,x,sizeof(a))
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vector<ll>> viv;
typedef vector<pair<ll,ll>> vip;
typedef pair<int,int> pii;
typedef map<ll,ll> mll;


int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = {+1, -1, 0, 0, +1, -1, +1, -1};


inline void normal(ll &a) {a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a % MOD; }
inline ll modPow(ll b, ll p) {ll r = 1; while(p){if(p&1) r = modMul(r,b); b = modMul(b,b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

ll gcd(ll a, ll b){return __gcd(a,b);}
ll lcm(ll a, ll b){return a*(b/__gcd(a,b));}

const int mx = 1e5+123;
vector<int> adj[mx];
vector<int> dp(mx,-1);

void solve()
{
    int n; cin>>n;
    vi a(n);
    fr(i,0,n) cin>>a[i];
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x) x++;
    }
    if(x==0){
        cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
        return;
    }
    // cout<<x<<endl;
    // string s="",g="";
    set<int> s,g;
    for (int i = 0; i < x; i++)
    {
        // s+=to_string(i);
        s.insert(i);
    }
    int y;
    for (int i = 0; i < n; i++)
    {
        g.insert(a[i]);
        if(s==g){
            y = i+1;
            break;
        }
    }
    if(y>=n){
        cout<<-1<<endl;
        return;
    }
    int z = 0;
    for (int i = y; i < n; i++)
    {
        if(a[i]==z) z++;
    }
    if(z!=x){
        cout<<-1<<endl;
        return;
    }
    cout<<2<<endl;
    cout<<1<<" "<<y<<endl;
    cout<<y+1<<" "<<n<<endl;
    return;
}
int main()
{
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}