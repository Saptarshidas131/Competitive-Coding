#include<bits/stdc++.h>
using namespace std;

int main()
{
	string tag;

	cin >> tag;

	if(((tag[0]+tag[1])%2 == 0) && (tag[2] != 'A' || tag[2] != 'E' || tag[2] != 'I' || tag[2] != 'O' || tag[2] != 'U') && ((tag[3]+tag[4])%2 == 0) && ((tag[4]+tag[5])%2 == 0) && (tag[7]+tag[8])%2 == 0)
		cout << "valid";
	else
		cout << "invalid";

	return 0;
}