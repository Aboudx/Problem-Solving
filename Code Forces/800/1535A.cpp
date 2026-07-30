#include <iostream>
#include <algorithm>
using namespace std;

	void Solve()
	{
		int S[4], T[4];

		for (int i = 0;i < 4;i++)
		{
			cin >> S[i];
			T[i] = S[i];
		}

		sort(T, T + 4);

		if (((S[0] == T[0] && S[1] == T[1]) || (S[0] == T[1] && S[1] == T[0]))
			|| ((S[2] == T[2] && S[3] == T[3]) || (S[2] == T[3] && S[3] == T[2])))
		{
			cout << "NO" << endl;
			return;
		}

		int T2[4];
		T2[0] = T[2];
		T2[1] = T[3];
		T2[2] = T[0];
		T2[3] = T[1];


		if (((S[0] == T2[0] && S[1] == T2[1]) || (S[0] == T2[1] && S[1] == T2[0]))
			&& ((S[2] == T2[2] && S[3] == T2[3]) || (S[2] == T2[3] && S[3] == T2[2])))
		{
			cout << "NO" << endl;
			return;
		}
		cout << "YES" << endl;
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