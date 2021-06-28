/*
	author: 3lit3Coder
*/
#include <bits/stdc++.h>
using namespace std;
typedef short int si;
typedef unsigned short int us;
typedef unsigned int ui;
typedef long int li;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef float fp;
typedef double db;
typedef long double ld;
typedef char ch;
typedef wchar_t wc;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef pair<long,long> pll;
typedef vector<pii> vpii;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define PRES(c,x) ((c).find(x) != (c).end()) 
#define W(t) while(t--)
#define REPE(i,x) for(auto i : x)

int main()
{

	// efficient i/o
	ios::sync_with_stdio(0);
	cin.tie(0);

	// clock start time
	clock_t start = clock();

	int n,s, max_sweets = -1;

	cin >> n >> s;

	W(n)
	{
		int x,y;
		cin >> x >> y;

		if(x < s || (x == s && y == 0))
		{
			if(max_sweets <= (100 - y) && y != 0)
				max_sweets = 100 - y;
		}
	}

	cout << max_sweets;

	// clock end time
	#ifndef ONLINE_JUDGE
		clock_t end = clock();
		cout <<"\n\nExecution Time: " << fixed <<setprecision(5) << double(end-start)/CLOCKS_PER_SEC << " s";
	#endif

	return 0;
}