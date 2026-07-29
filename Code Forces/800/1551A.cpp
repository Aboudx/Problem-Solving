#include <iostream>
#include <cmath>
using namespace std;

void Solve()
{
  long long n; cin >> n;


  int Burle = n / 3;
  int TwoBurle = n / 3;

  if (n % 3 != 0)
  {
    Burle++;
  }

  if ((Burle + TwoBurle * 2) == n)
  {
    cout << Burle << " " << TwoBurle << endl;
    return;
  }

  cout << TwoBurle << " " << Burle << endl;

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
