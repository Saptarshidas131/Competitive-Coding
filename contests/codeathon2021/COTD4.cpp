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
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PRES(c,x) ((c).find(x) != (c).end()) 
#define W(t) while(t--)
#define REPE(i,x) for(auto i : x)

bool isMirror(string s)
{
	unordered_set<char> symm = { 'A', 'H', 'I', 'M','O', 'T', 'U', 'V', 'W', 'X', 'Y' };

	int n = s.length(), i;

	REP(i,0,n)
		if (symm.find(s[i]) == symm.end())
			return false;

	string rev = s;
	reverse(rev.begin(), rev.end());

	// check palindrome
	if (rev == s)
		return true;
	else
		return false;
}

int main()
{

	// efficient i/o
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, rev;
	cin >> s;

	if(isMirror(s))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}