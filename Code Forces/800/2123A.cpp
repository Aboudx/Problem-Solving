#include <iostream>
using namespace std;

	void Solve()
	{
		int n; cin >> n;

		if (n % 4 == 0)
		{
			cout << "Bob" << endl;
		}
		else cout << "Alice" << endl;
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