#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string s;
	int x = 0, y = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'z')
			x++;

		if (s[i] == 'o')
			y++;
	}

	if (2*x == y)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}