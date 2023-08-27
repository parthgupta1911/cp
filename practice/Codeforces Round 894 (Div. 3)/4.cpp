#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
	ll k;
	cin >> k;
	// ll num = 2, ans = 0;
	// while (ans < n)
	// {
	// 	ans += num - 1;
	// 	num++;

	// }
	// num = num - 1;
	// ans -= num - 1;
	// cout << (num - 1) + n - ans  << endl;
	ll n, num, ans;
	n = ceil(sqrt(2 * k)) + 1;
	ans = (n * (n - 1)) / 2;
	while (ans > k)
	{
		ans -= n - 1;
		n = n - 1;
	}
	cout << n + (k - ans) << endl;
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