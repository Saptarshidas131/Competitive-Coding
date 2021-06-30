/*
	author: 3lit3Coder
    filename: template.cpp
*/
#include <bits/stdc++.h>
using namespace std;

typedef string st;
typedef short int si;
typedef unsigned short int us;
typedef unsigned int ui;
typedef long int li;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef float ft;
typedef double db;
typedef long double ld;
typedef char ch;
typedef wchar_t wc;

typedef greater<int> gi;
typedef greater<int,int> gii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector <fp> vf;
typedef vector<st> vs;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ch,ch> pcc;
typedef pair<ch,int> pci;
typedef pair<int,ch> pic;
typedef pair<int,st> pis;
typedef pair<st,int> psi;
typedef pair<st,st> pss;
typedef pair<li,li> pl;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pcc> vpcc;
typedef vector<pci> vpci;
typedef vector<pic> vpic;
typedef vector<pis> vpis;
typedef vector<psi> vpsi;
typedef vector<pss> vpss;
typedef vector<pl> vpl;
typedef vector<pll> vpll;
typedef forward_list<int> fli;
typedef forward_list<ll> fll;
typedef forward_list<li> flli;
typedef list<int> lin;
typedef list<ll> lll;
typedef list<ch> lch;
typedef list<st> lst;
typedef unordered_map<int,int> um;
typedef unordered_map<int,st> umis;
typedef unordered_map<int,ch> umic;
typedef unordered_map<ch,int> umci;
typedef unordered_map<st,int> umsi;
typedef unordered_map<st,st> umss;
typedef multimap<int,int> mm;
typedef multimap<int,st> mmis;
typedef multimap<st,int> mmsi;
typedef multimap<int,ch> mmic;
typedef multimap<ch,int> mmci;
typedef multimap<ch,ch> mmcc;
typedef multimap<st,st> mmss;
typedef map<int,int> mp;
typedef map<int,int,gii> mpg;
typedef map<int,st> mpis;
typedef map<st,int> mpsi;
typedef map<ch,int> mpci;
typedef map<int,ch> mpic;
typedef map<ch,ch> mpcc;
typedef map<st,st> mpss;
typedef set<int> se;
typedef set<int,gi> sg;
typedef set<li> sli;
typedef set<ch> sch;
typedef set<st> sst;  
typedef set<ll> sll;
typedef multiset<int> mse;
typedef multiset<li> mli;
typedef multiset<ll> mll;
typedef multiset<ch> mch;
typedef multiset<st> mst;
typedef queue<int> qi;
typedef queue<li> qli;
typedef queue<ll> qll;
typedef queue<ch> qch;
typedef queue<st> qst;
typedef priority_queue<int> pq;
typedef priority_queue<int,vi,gi> pqg;
typedef priority_queue<li> pqli;
typedef priority_queue<ll> pqll;
typedef priority_queue<ch> pqch;
typedef priority_queue<st> pqst;
typedef deque<int> di;
typedef deque<li> dli;
typedef deque<ll> dll;
typedef deque<ch> dch;
typedef deque<st> dst;
typedef stack<int> sti;
typedef stack<li> stil;
typedef stack<ll> stll;
typedef stack<ch> stch;
typedef stack<st> stst;

#define N "\n"
#define inf 1e18
#define mod 1e9+7
#define F first
#define S second
#define P pop
#define pu push
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define ea emplace_after
#define eb emplace_back
#define as assign
#define rm remove
#define ia insert_after
#define era erase_after
#define mkp make_pair
#define sz size()
#define le length()
#define un unique()
#define em empty()
#define tp top()
#define bk back()
#define fr front()
#define rev reverse()
#define fg(i,a,b) for(ui i = a; i <= b; i++)
#define fl(i,a,b) for(ui i = a; i < b; i++)
#define pres(c,x) ((c).find(x) != (c).end()) 
#define W(t) while(t--)
#define W2(n) while(n > 0)
#define fe(i,c) for(auto i : c)
#define fp(f,s,x) for(auto [f,s] : x)
#define fa(it,l) for(auto it = l.begin(); it != l.end(); it++)
#define sz(c) c.size()
#define le(c) c.length()
#define bn(c) c.begin()
#define ed(c) c.end()
#define cl(c) c.clear()
#define in(c,x) insert(c,x)
#define er(c,x) c.erase(x)
#define ere(c,x) c.erase(x,ed(c))
#define all(c) c.begin(),c.end()
#define allr(c) c.rbegin(),c.rend()
#define print(x) cout << (#x) << ": " << x << "\n";
#define cel(a,b) (a + b - 1)/b
#define cset(n) __builtin_popcount(n)
#define prt(n) __builtin_parity(n)
#define rev(c) reverse(all(c).end())
#define rev(c,a) reverse(c.begin()+a,c.end()-a)
#define reva(a,n) reverse(a,a+n)
#define ndigit(x) floor(log10(x) + 1)
#define gcd(x,y) __gcd(x,y)
#define cnt(x,c) count(all(c),x)
#define soa(a,n) sort(a,a+n)
#define sot(c) sort(all(c))
#define sog(c) sort(all(c),gi())
#define acc(c,r) accumulate(all(c),r)
#define accm(c,r) accumulate(all(c),r,minus<int>())
#define accf(c,r,f) accumulate(all(c),r,f)
#define mine(c) *min_element(all(c))
#define maxe(c) *max_element(all(c))
#define sum(n,a,d) 0.5*n*(2*a+(n-1)*d)
#define gpg(n,a,r) a*(pow(r,n) - 1)/(r-1)
#define gpl(n,a,r) a*(1 - pow(r,n))/(1-r)
#define gpi(a,r) a/(1-r)
#define rootp(a,b,c) (-b + sqrt(pow(b,2) - 4*a*c))/2*a
#define rootn(a,b,c) (-b - sqrt(pow(b,2) - 4*a*c))/2*a
#define bs(s,e,x) binary_search(s,e,x)
#define lb(c,x) lower_bound(all(c),x)
#define ub(c,x) upper_bound(all(c),x)
#define np(c) next_permutation(all(c))
#define pp(c) prev_permutation(all(c))

void fast_io()
{
    // efficient i/o
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
}

void file_io()
{
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main()
{

    clock_t start = clock();
	// START FROM HERE

	int t;

	cin >> t;

	cout << t;

    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout << "\n\nExecution time: " << fixed << setprecision(5)<< double(end-start)/CLOCKS_PER_SEC*1000 << " ms"
	return 0;
}
