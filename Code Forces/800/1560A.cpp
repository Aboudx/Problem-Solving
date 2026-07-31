#include <iostream>
using namespace std;

	void Solve()
	{
		int k;
		cin >> k;

		int i = 1;
		int Count = 0;
		while (true)
		{
			if (i % 3 != 0 && i % 10 != 3)
			{
				if (++Count == k)
				{
					cout << i << endl;
					break;
				}
			}
			i++;
		}
	}

	int main()
	{
		int t;
		cin >> t;

		while (t--)
		{
			Solve();
		}
	}