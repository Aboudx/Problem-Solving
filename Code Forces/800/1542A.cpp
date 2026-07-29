#include <iostream>
#include <vector>
using namespace std;

void Solve()
{
  int n; cin >> n;

  vector<int>Pairs(2 * n);

  for (int i = 0;i < 2 * n;i++)
  {
    cin >> Pairs[i];
  }

  int Odd = 0, Even = 0;

  for (int i = 0;i < 2 * n;i++)
  {
    if (Pairs[i] % 2 == 0)
    {
      Even++;
    }
    else
    {
      Odd++;
    }
  }

  if (Even == Odd)
  {
    cout << "YES" << endl;
  }
  else cout << "NO" << endl;
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
