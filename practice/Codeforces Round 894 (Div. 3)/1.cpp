#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{	int  n, m;
	cin >> n >> m;
	char ip[n][m];//n arrays each of m size
	string name = "vika";
	int ni = 0, lc = -1, ans = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cin >> ip[i][j];
			// if (ch == name[ni] && j > lc)
			// {

			// 	lc = j;
			// 	ni = ni + 1;
			// 	if (ni == 4)
			// 	{
			// 		ans = 1;
			// 	}
			// }
		}

	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (name[ni] == ip[j][i] && i > lc)
			{
				lc = i;
				ni = ni + 1;
				if (ni == 4)
				{
					ans = 1;
				}
			}
		}
	}
	if (ans == 1)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
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