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

/*
  Sieve of Eratosthenes
  Find primes<=upperbound
  O(NloglogN)
  usage:
  find primes<=N
  sieve(N)
*/

bitset<1000000010> bs;
vector<LL> primes;
LL _sieve_size;
void sieve(LL upperbound)
{
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (LL i = 2; i * i <= _sieve_size; i++)
  {
    if (bs[i])
    {
      for (LL j = i * i; j <= _sieve_size; j += i)
      {
        bs[j] = 0;
      }
      primes.push_back(i);
    }
  }
}

bool isPrime(LL n)
{
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  for (LL i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  LL n;
  cin >> n;
  sieve(10000010);
  for (LL i = n; i >= n - 300; i--)
  {
    if (isPrime(i))
    {
      if (i == n)
      {
        cout << 1 << endl;
        cout << n << endl;
        return 0;
      }
      else
      {
        LL k = n - i;
        for (auto p1 : primes)
        {
          if (p1 >= k)
            break;
          for (auto p2 : primes)
          {
            if (p1 + p2 > k)
              break;
            if (p1 + p2 == k)
            {
              cout << 3 << endl;
              cout << i << " " << p1 << " " << p2 << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}