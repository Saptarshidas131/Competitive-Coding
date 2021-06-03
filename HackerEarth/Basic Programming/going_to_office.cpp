#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int d, oc, of, od, cs, cb, cm, cd, cost_ot = 0, cost_ct = 0;

	cin >> d;
	cin >> oc >> of >> od;
	cin >> cs >> cb >> cm >> cd;

	cost_ot = oc + (d - of) * od;
	cost_ct = cb + (floor(d/cs) * cm) + (d * cd);

	if ((cost_ot == cost_ct) || (cost_ot < cost_ct))
		cout << "Online Taxi";
	else
		cout << "Classic Taxi";


	return 0;
}