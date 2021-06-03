#include<iostream>
using namespace std;

int main()
{
	string s;

	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')
			zero++;
		else if (s[i] == '1')
			one++;
		else if (s[i] == '2')
			two++;
		else if (s[i] == '3')
			three++;
		else if (s[i] == '4')
			four++;
		else if (s[i] == '5')
			five++;
		else if (s[i] == '6')
			six++;
		else if (s[i] == '7')
			seven++;
		else if (s[i] == '8')
			eight++;
		else if (s[i] == '9')
			nine++;
	}
	
	cout << "0 " << zero << endl;
	cout << "1 " << one << endl;
	cout << "2 " << two << endl;
	cout << "3 " << three << endl;
	cout << "4 " << four << endl;
	cout << "5 " << five << endl;
	cout << "6 " << six << endl;
	cout << "7 " << seven << endl;
	cout << "8 " << eight << endl;
	cout << "9 " << nine << endl;
}