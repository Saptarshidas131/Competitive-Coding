#include<bits/stdc++.h>
#include <string>
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
//============================================================================
const int MOD = 1000000007;

const int N = 2e6 + 13, M = N;
//============================================================================
ll u, k, j, l, n, m;



void solve() {
	cin >> n >> m >> k;
	vl arr(k);
	fo(u, 0, k - 1)cin >> arr[u];
	map<ll, ll>mp;
	fo(u, 0, k - 1) {
		if (arr[u] <= n)
			mp[arr[u]]++;
	}
	ll c = 0;
	for (auto it : mp) {
		if (it.second >= 2)c++;
	}
	cout << c << " ";
	for (auto it : mp) {
		if (it.second >= 2) cout << it.first << " ";
	}
	cout << endl;


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