#include <iostream>

using namespace std;

int main()
{
    int n, a[3], problems = 0;

    cin >> n;

    for (int i=0 ;i < n; i++)
    {
        
        for (int j=0 ; j < 3; j++)
            cin >> a[j];

        if ((a[0] == 1 && a[1] == 1) || (a[1] == 1 && a[2] == 1) || (a[2] == 1 && a[0] == 1))
            problems++;
        
    }

     cout << problems << endl;
	
	return 0;
}

