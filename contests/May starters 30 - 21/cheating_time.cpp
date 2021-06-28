#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(u,k,n) for(u=k;u<=n;u++)
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(c) c.rbegin(),c.rend()
#define mem(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

typedef pair<ll, ll>	    pll;
typedef vector<ll>		    vl;
typedef vector<pll>		    vpll;
typedef vector<vl>		    vvl;
typedef map<ll, ll>		    ml;
typedef map<ll, bool>		mlb;

#define out(container) for (auto it : container) cout << it << " "; cout << endl;
//====================================================================================================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;
//====================================================================================================

ll u, k, j, l, n, m;


void solve() {
	ll needt, finish;
	cin >> n >> needt >> finish;
	vpll arr(n);
	fo(u, 0, n - 1) {
		cin >> j;
		cin >> k;
		arr[u] = {j, k};
	}
	sort(all(arr));
	ll total = arr[0].first - 0;
	ll maxmon = arr[0].second;
	fo(u, 1, n - 1) {
		if (arr[u].first > maxmon) {
			total += abs(arr[u].first - maxmon);
		}
		maxmon = max(maxmon, arr[u].second);
	}
	total += finish - maxmon;
	if (total >= needt)cout << "YES" << endl;
	else cout << "NO" << endl;
}


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	ll t = 1; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}