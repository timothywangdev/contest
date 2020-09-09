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

char getDiff(char &a, char &b)
{
  F(i, 26)
  {
    if ('a' + i != a && 'a' + i != b)
    {
      return char('a' + i);
    }
  }
}

int main()
{
  int n, t;
  cin >> n >> t;
  string s1, s2, s3(n, 'a');
  cin >> s1 >> s2;

  vector<int> toIdx;

  int d = 0;
  F(i, n)
  {
    if (s1[i] != s2[i])
    {
      toIdx.push_back(i);
      d++;
    }
  }

  F(i, n)
  {
    if (s1[i] == s2[i])
    {
      toIdx.push_back(i);
    }
  }

  if (t < d)
  {
    if (ceil(d / 2.0) > t)
    {
      cout << "-1" << endl;
      return 0;
    }

    int k = 0;
    while (true)
    {
      if (k + 1 < d)
      {
        s3[toIdx[k]] = s1[toIdx[k]];
        s3[toIdx[k + 1]] = s2[toIdx[k + 1]];
        k += 2;
      }
      if (k / 2 + d - k<= t)
      {
        int currT = k / 2;

        FOR(j, k, n - 1)
        {
          if (currT < t)
          {
            s3[toIdx[j]] = getDiff(s1[toIdx[j]], s2[toIdx[j]]);
            currT++;
          }
          else
          {
            s3[toIdx[j]] = s1[toIdx[j]];
          }
        }
        break;
      }
    }
  }
  else
  {
    F(i, t)
    {
      s3[toIdx[i]] = getDiff(s1[toIdx[i]], s2[toIdx[i]]);
    }
    FOR(i, t, n - 1)
    {
      s3[toIdx[i]] = s1[toIdx[i]];
    }
  }

  cout << s3 << endl;
  return 0;
}