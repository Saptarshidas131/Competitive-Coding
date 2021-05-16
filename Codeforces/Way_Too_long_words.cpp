#include<iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s, n;
        cin >> s;
        
        int slen = s.length();
        if(slen > 10)
        {
            n = s[0] + to_string((slen - 2)) + s[slen-1];
            cout << n << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}
