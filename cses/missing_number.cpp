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
typedef pair<int,int> pi;
typedef pair<int,string> pis;
typedef pair<string,string> ps;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ul i = a; i < b; i++)
#define T(t) while(t--)
 
int main()
{
 
	// efficient i/o
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	#ifndef ONLINE_JUDGE
		// read from input.txt in read mode from standard input and write to output.txt in write mode to standard output
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
	ul n, sn = 0;
 
	cin >> n;

	sn = (n*(n+1))/2; 
 
	REP(i,0,n-1)
	{
		int a;
		cin >> a;
		sn -= a;
	}


	
	cout << sn;
 
	return 0;
}