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

int main()
{
  int n, t;
  cin>>n>>t;
  if (t == 10) {
    if (n >= 2) {
      FOR(i, 0, n-2) {
        cout<<'1';
      }
      cout<<"0";
    } else {
      cout<<"-1";
    }
  } else {
    FOR(i, 0, n-1) {
      cout<<t;
    }
  }
  cout<<endl;
  return 0;
}