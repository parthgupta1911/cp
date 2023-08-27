#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
		//SOLN
		int n;
		cin >> n;
		int arr[n], no_two = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == 2)
			{
				no_two += 1;
			}
		}
		if (no_two % 2 != 0)
		{
			cout << -1 << endl;
		}
		else {
			if (no_two == 0)
			{
				cout << 1 << endl;
			}
			int k = 0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] == 2)
				{
					k += 1;
					no_two -= 1;
					if (no_two == k)
					{
						cout << i + 1 << endl;
						break;
					}
				}
			}
		}
	}
}