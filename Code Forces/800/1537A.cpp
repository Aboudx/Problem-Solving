#include <iostream>
#include <vector>
using namespace std;

void Solve()
{
	int k, a;
	cin >> k;
	int Sum = 0;

	for (int i = 0;i < k;i++)
	{
		cin >> a;
		Sum += a;
	}

	if (Sum < k)
		cout << "1" << endl;
	else
		cout << Sum - k << endl;
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