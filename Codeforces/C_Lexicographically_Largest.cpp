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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.first==b.first) return (a.second > b.second);
    else return (a.first < b.first);
}
void solve()
{
    ll n; cin>>n;
    vector<pair<ll,ll>> a(n),b;
    vector<ll> c;
    for(ll i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i+1;
        b.push_back({(a[i].first+a[i].second),i+1});
    }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    ll x = n+1,y=0;
    bool f=1;
    for (ll i = 0; i < n; i++)
    {
        // cout<<x<<" "<<b[i].second<<endl;

        if(x<b[i].second){
            c.push_back(b[i].first-y);
            y+=1LL;
            // cout<<1<<endl;
        }
        else{
            c.push_back(b[i].first);
            if(f){
                y++;
                f=0;
            }
        }
        x = min(x,b[i].second);

    }
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    // cout<<endl;
    // for(auto u:b) cout<<u.first<<" "<<u.second<<endl;
    for(auto u:c) cout<<u<<" "; 
    cout<<endl;
    
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