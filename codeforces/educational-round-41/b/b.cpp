//In The Name Of God
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<double, double> dd;
typedef pair<dd, double> ddd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<dd> vdd;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii> > vvviii;
typedef vector<vector<iii> > vviii;
typedef set<int> si;
typedef vector<si> vsi;

#define forn(i, n) for (int i = 0; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define inf 1000000000
#define eps 1e-9
#define pi acos(-1.0)
#define F first
#define S second
#define pb push_back


int main() {
    ios::sync_with_stdio(0);
    int n, m; cin >> n >> m;
    vi t(n), aw(n);
    for(auto &e: t) cin >> e;
    for(auto &e: aw) cin >> e;

    ll ans = 0;
    for(int i = 0; i < n; i++) if(aw[i])
            ans += t[i];

    ll mx = 0, rmx = 0;
    for(int i = 0; i < n; i++) {
        if(i >= m) if(aw[i - m] == 0)
                mx -= t[i - m];
        if(aw[i] == 0)
            mx += t[i];

        rmx = max(mx, rmx);
    }

    cout << ans + rmx << endl;


    return 0;
}