#include <iostream>

using namespace std;

int main()
{
	string s;

	getline(cin,s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			cout << (char)(s[i]-32);
			//cout << (char)toupper(s[i]);
		else
			cout << endl;
	}

	return 0;
}