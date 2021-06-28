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

#define NL "\n"
#define um unordered_map<int,int>
#define umsi unordered_map<string,int>
#define mm multimap<int,int>
#define mp map<int,int>
#define mps map<int,string>
#define msp map<string,int>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define REP2(i,a,b) for(int i = a, i < b; i++)
#define PRES(c,x) ((c).find(x) != (c).end()) 
#define W(t) while(t--)
#define REPE(i,x) for(auto i : x)
#define all(x) x.begin(),x.end()
#define print(x) cout << (#x) << ": " << x << "\n";

void fast_io()
{
    // efficient i/o
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
}

void file_io()
{
    #ifndef ONLINE_JUDGE
		// read from input.txt in read mode and inputs to standard input and write to output.txt in write mode and output to standard output
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main()
{

	fast_io();

    file_io();
    
    // clock start time
	clock_t start = clock();
    
    // START FROM HERE
	int t;
	cin >> t;

	W(t)
	{
		int n;
		cin >> n;

		int size = n*3;

		umsi m1;

		W(size)
		{
			string s;
			int c;
			cin >> s >> c;
			m1[s] += c; 
		}

		vi v;
		for(auto it : m1)
			v.push_back(it.second);
		
		sort(all(v));

		for(auto x : v)
			cout << x << " ";
		cout << NL;
	}



	// END HERE
		// clock end time
	#ifndef ONLINE_JUDGE
		clock_t end = clock();
		cout <<"\n\nExecution Time: " << fixed << setprecision(5) << double(end-start)/CLOCKS_PER_SEC*1000 << " ms";
	#endif

	return 0;
}
