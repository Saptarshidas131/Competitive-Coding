#include <iostream>
using namespace std;

int main()
{
	while(true)
	{
		string s;
		cin >> s;
		if(s.size() == 0)
			break;

		for(int i = 0; i < s.size(); i++)
			s[i] = 'A' + (s[i] - 'a');

		cout << s << "\n";
	}
return 0;
}