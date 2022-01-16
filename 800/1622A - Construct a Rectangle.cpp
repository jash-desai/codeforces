/*
Problem Name: Construct a Rectangle
Problem Type: A - 800
Problem Link: https://codeforces.com/problemset/problem/1622/A
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
void putl(T&&... args) { ((cout << args << " "), ...); cout << '\n';}
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
#define seeArr(arr,n) for(int i=0;i<n;i++){cin>>arr[i];}
#define seeVi(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.pb(x);}
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
void _print(pair<int, int> t) {cerr << "[ " << t.fi << ", " << t.se << " ]"; nl;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// ---------- CONSTANTS ----------
const ll idk = 100000;
const ll infmax = INT_MAX;
const ll infmin = INT_MIN;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;
// ---------- FUNCTIONS ----------
// ---------- SOLUTIONS ----------
void solve() {
    int a,b,c; see(a,b,c);
    bool f1=(a+b==c); bool f2=(b+c==a); bool f3=(c+a==b);
    bool f4=(a==b && !(c%2)); bool f5=(b==c && !(a%2));
    bool f6=(c==a && !(b%2));
    if(f1||f2||f3||f4||f5||f6){
        cout << "YES"; return;
    }
    cout << "NO";
}
// ---------- MAIN ----------
signed main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    IOS;
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
        nl;
    }
    return 0;
}
// ---------- TEMP ----------
// ---------- END ----------