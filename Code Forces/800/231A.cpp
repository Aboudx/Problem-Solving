#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

	void Solve()
	{
		int T;
		cin >> T;
		int Counter = 0;
		int a, b, c;

		for (int i = 0;i < T;i++)
		{
			cin >> a >> b >> c;

			if ((a + b + c) >= 2)
			{
				Counter++;
			}
		}

		cout << Counter << endl;
	}

	int main()
	{
		int t = 1;

		while (t--)
		{
			Solve();
		}
	}