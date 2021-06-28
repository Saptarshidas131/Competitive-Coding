#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(u,k,n) for(u=k;u<=n;u++)
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define F firs
#define S second
#define all(x) x.begin(), x.end()
#define allr(c) c.rbegin(),c.rend()
#define mem(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

typedef pair<ll, ll>        pll;
typedef vector<ll>          vl;
typedef vector<pll>         vpll;
typedef vector<vl>          vvl;
typedef map<ll, ll>         ml;
typedef map<ll, bool>       mlb;

#define out(container) for (auto it : container) cout << it << " "; cout << endl;
//============================================================================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;
//============================================================================
ll u, k, j, l, n, m;


void solve() {
    cin >> n;
    vector<string> arr(n);
    fo(u, 0, n - 1)cin >> arr[u];
    fo(u, 0, n - 1) {
        bool ans = 1;
        if (arr[u][0] >= 'a' && arr[u][0] <= 'm') {
            for (auto it : arr[u]) {
                if (it >= 'a' && it <= 'm');
                else {
                    ans = 0;
                    break;
                }
            }
        }
        else if (arr[u][0] >= 'N' && arr[u][0] <= 'Z') {
            for (auto it : arr[u]) {
                if (it >= 'N' && it <= 'Z');
                else {
                    ans = 0;
                    break;
                }
            }
        }
        else ans = 0;
        if (!ans) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}