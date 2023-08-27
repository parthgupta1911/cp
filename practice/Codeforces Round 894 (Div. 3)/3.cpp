#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int prev = 0;
	int k = a.size();
	if (k != a[0])
	{
		cout << "NO" << endl;
		return;
	}
	vector<int>b;
	for (int i = n - 1; i >= 0; i--)
	{	for (int j = 0; j < a[i] - prev; j++)
		{
			b.push_back(k);

		}
		prev = a[i];
		k--;
	}
	a == b ? cout << "YES" << endl :  cout << "NO" << endl;
	// for (int i = 1; i < n; i++)
	// {
	// 	if (a[i - 1] - a[i] <= 1)
	// 	{
	// 		continue;
	// 	}
	// 	int diff = a[i] - a[i - 1];
	// 	for (int j = 1; j < diff; j++)
	// 	{
	// 		if (a[i] == a[j + i])
	// 		{
	// 			continue;
	// 		}
	// 		else {
	// 			cout << "NO" << endl;
	// 			return;
	// 		}
	// 	}
	// }
	// cout << "YES" << endl;
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