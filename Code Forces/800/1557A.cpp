#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

	void Solve()
	{
		int n; cin >> n;
		vector<long long>A(n);

		for (int i = 0;i < n;i++)
		{
			cin >> A[i];
		}


		long long Counter = 0;

		int Max = A[0];
		for (int i = 0;i < n;i++)
		{
			if (A[i] > Max)
			{
				Max = A[i];
			}

			Counter += A[i];
		}

		Counter -= Max;

		double Avg = double(Counter) / (n - 1);

		double Result = Max + Avg;

		cout << fixed << setprecision(9);

		cout << Result << endl;
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