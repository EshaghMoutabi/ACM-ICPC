//In The Name Of God
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii>> vvviii;
typedef vector<vector<iii>> vviii;
typedef set<int> si;
typedef vector<si> vsi;
typedef pair<double, double> dd;
typedef vector<dd> vdd;

#define inf 1000000000
#define eps 1e-9

int main() {
    ios::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vii num(n);
        bool first = true;
        for(auto &e: num) cin >> e.first >> e.second;
        int cur = 1;
        for(int i = 0; i < n; i++) {
            int ans = 0;
            if(num[i].first > cur) cur = num[i].first;
            if(cur <= num[i].second) ans = cur;
            if(first) {
                cout << ans;
                first = false;
            }
            else cout << " " << ans;
            if(ans) cur++;
        }
        cout << endl;
    }


    return 0;
}