/*
Problem Name: Everyone Loves to Sleep
Problem Type: A - 900
Problem Link: https://codeforces.com/problemset/problem/1714/A
Author: Jash Desai (jash13desai)
*/
// ---------- HEADER ----------
#include<bits/stdc++.h>
using namespace std;
// ---------- TEMPLATES ----------
template<typename... T>
void see(T&... args) { ((cin >> args), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
// ---------- MACROS ----------
#define int long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define ld long double
#define ull unsigned long long
#define print(x) cout << x
#define sz size()
#define vc vector
#define nl cout<<'\n'
#define sqof(a) (a)*(a)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define IOS ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cin.exceptions(cin.failbit)
#define all(x) (x).begin(), (x).end()
#define setpr(x) cout<<setprecision(x)<<fixed
#define tostr(x) to_string(x)
#define loop(i,a,b) for(int i=a; i<b; i++)
#define seeArr(arr,x,y) for(int i=x;i<y;i++){cin>>arr[i];}
#define seeVi(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.pb(x);}
#define seeStr(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.pb(x);}
// ---------- DEBUG ----------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" : "; _print(x); cerr << '\n';
#else
#define debug(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(bool t) {cerr << t;}
void _print(pair<int,int> t) {cerr << "[ " << t.fi << ", " << t.se << " ]"; nl;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// ---------- CONSTANTS ----------
const ll infmax = INT_MAX;
const ll infmin = INT_MIN;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;
// ---------- FUNCTIONS ----------

// ---------- SOLUTIONS ----------
void solve() {
    ll n, h, m;
    cin >> n >> h >> m;
    vector<pii> arr(n);
    rep(i,0, n) cin >> arr[i].ff >> arr[i].ss;
    
    ll ansh, ansm;
    
    if (arr[0].ff >= h){
        if (arr[0].ff > h || (arr[0].ff == h && arr[0].ss >= m)) {
            ansh = arr[0].ff - h - 1;
            ansm = 60 - m + arr[0].ss;
        }else{
            ansh = 24 - h + arr[0].ff - 1;
            ansm = 60 - m + arr[0].ss;
        }
        
        if (ansm >= 60) {
            ansh++;
            ansm -= 60;
        }
    }else {
        ansh = 24 - h + arr[0].ff - 1;
        ansm = 60 - m + arr[0].ss;
        if (ansm >= 60) {
            ansh++;
            ansm -= 60;
        }
    }
    for (int i = 1; i < n; i++) {
        ll tansh, tansm;
        if (arr[i].ff >= h) {
            if (arr[i].ff > h || (arr[i].ff == h && arr[i].ss >= m)) {
                tansh = arr[i].ff - h - 1;
                tansm = 60 - m + arr[i].ss;
            }else {
                tansh = 24 - h + arr[i].ff - 1;
                tansm = 60 - m + arr[i].ss;
            }
            if (tansm >= 60) {
                tansh++;
                tansm -= 60;
            }
        }else {
            tansh = 24 - h + arr[i].ff - 1;
            tansm = 60 - m + arr[i].ss;
            if (tansm >= 60) {
                tansh++;
                tansm -= 60;
            }
        }
        if (tansh <= ansh && tansm <= ansm) {
            ansh = tansh;
            ansm = tansm;
        }else if (tansh < ansh) {
            ansh = tansh;
            ansm = tansm;
        }
    }
    cout << ansh << " " << ansm;
}
// ---------- MAIN ----------
signed main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    IOS;
    int t=1;
    cin>>t;
    while(t--){
        solve();
        nl;
    }
    return 0;
}
// ---------- ROUGHCODE ----------
// ---------- END ----------
