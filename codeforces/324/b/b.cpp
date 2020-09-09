#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mt make_tuple
#define mp make_pair
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORR(i, a, b) for (int i = (b); i >= (a); i--)
#define F(i, n) for (int i = 0; i < (n); i++)
#define FR(i, n) for (int i = (n)-1; i >= 0; i--)
#define R(a, i, b) (a <= i && i <= b)
typedef tuple<int, int, int> TIII;
typedef tuple<int, int> TII;
typedef pair<int, int> PII;
typedef long long LL;

const LL MOD = 1000000000 + 7;

int main()
{
  LL n;
  LL threePow[300001];
  LL sevenPow[300001];
  memset(threePow, 0, sizeof(threePow));
  memset(sevenPow, 0, sizeof(sevenPow));
  cin >> n;

  threePow[0] = 1;
  FOR(i, 1, 3 * n)
  {
    threePow[i] = (threePow[i - 1] * 3) % MOD;
  }

  sevenPow[0] = 1;
  FOR(i, 1, n)
  {
    sevenPow[i] = (sevenPow[i - 1] * 7) % MOD;
  }

  cout << (threePow[3 * n] + MOD - sevenPow[n]) % MOD << endl;
  return 0;
}