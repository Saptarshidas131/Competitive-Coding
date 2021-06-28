#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, k;
	string s;

	cin >> t;

	while(t--)
	{
		cin >> k;

		while (k--)
		{
			cin >> s;

			vector<int> v;

			for(int i = 0; i < s.length(); i++)
			{
				if ((islower(s[i]) && s[i] >= 'a' && s[i] <= 'n') || (isupper(s[i]) && s[i] >= 'A' && s[i] <= 'Z'))
					v.push_back(1);
				else
					v.push_back(0);
			}
			for(int i = 0; i < v.size(); i++)
				cout << v.at(i) << " ";
			cout << endl;
		}
	}
	

	return 0;
}