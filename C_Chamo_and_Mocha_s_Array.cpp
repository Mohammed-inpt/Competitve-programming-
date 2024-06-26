#pragma once
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vpi> vvpi;
typedef vector<vpl> vvpl;
typedef set<int> si;
typedef multiset<int> msi;
typedef set<ll> sl;
typedef multiset<ll> msl;
typedef long double ld;
template<class T> using func = function<T>;

/*** begin #defines ***/
#define clrcin cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define GOGOGO ios::sync_with_stdio(false); cin.tie(nullptr);
#define BYEBYE return 0;

#define all(cn) (cn).begin(), (cn).end()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define csz(c) ((int)c.size())
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

#define popcnt __builtin_popcount
#define popcntll __builtin_popcount_ll

#define what(x) cout << #x << " = " << x << '\n'
/*** end #defines ***/

const int INFI = 1e9 + 5;
const ll INFL = 1e18 + 5;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
auto dist = uniform_int_distribution<int>(0, INFI);
auto distll = uniform_int_distribution<ll>(0, INFL);
int rnd() { return dist(rng); }
ll rndl() { return distll(rng); };
const ll MOD = 1e9 + 7;


void solve() {
    int n; cin >> n;
    vl a(n);
    rep(i, n) cin >> a[i];
    if(n ==2) 
    {
        cout << *min_element(all(a)) << endl;
        return;
    };
    ll ans = 0; 
    for(int i =0; i < n-2; i++)
    {
        ll c[3];
        c[0] = a[i];c[1] = a[i+1];c[2] = a[i+2];
        // what(c[0]);what(c[1]);what(c[2]);
        sort(c, c+3);
        ans = max(ans, c[1]);
    };
    cout << ans << endl;

}

int main() {
    GOGOGO
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    BYEBYE
}
