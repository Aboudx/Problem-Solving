#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

	void Solve()
	{
		int n; cin >> n;

		vector<int>c(n);

		for (int i = 0;i < n;i++)
		{
			c[i] = i + 2;
		}

		for (int i = 0;i < n - 1;i++)
		{
			if (c[n - 1] % c[i] == 0)
			{
				cout << "NO" << endl;
				return;
			}
		}

		cout << "YES" << endl;
	}

	int main()
	{
		int t = 1;
		cin >> t;

		while (t--)
		{
			Solve();
		}
	}