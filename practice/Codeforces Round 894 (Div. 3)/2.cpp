#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{	int n;
	cin >> n;
	vector<int> b(n);
	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		if (i == 0)
		{
			a.push_back(b[i]);
		}
		else if (b[i - 1] <= b[i])
		{
			a.push_back(b[i]);
		}
		else
		{
			a.push_back(b[i]);
			a.push_back(b[i]);
		}
	}
	cout << a.size() << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;


}
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
		solve();
	}
}