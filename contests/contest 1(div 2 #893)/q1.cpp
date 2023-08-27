#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, c, t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if (c % 2 == 0)
		{
			if (b >= a)
			{cout << "Second" << endl;}
			else {
				cout << "First" << endl;
			}
		}
		else {
			if (a >= b)
			{
				cout << "First" << endl;
			}
			else {
				cout << "Second" << endl;
			}
		}
	}
}