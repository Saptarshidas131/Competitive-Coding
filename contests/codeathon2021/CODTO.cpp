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

	int t;

	cin >> t;

	W(t)
	{
		string s;
		li s1, s2;

		cin >> s;
		cin >> s1 >> s2;

		if(s == "rectangle")
			cout << s1*s2;

		else if(s == "square")
			cout << (s1*s2)/2;

		else if(s == "triangle")
			cout << s1*s2;

		else
			cout << 0;;

		cout << "\n";

	}

	return 0;
}