#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

ll lcm(int a, int b)
{
    ll a0 = a;
    ll b0 = b;
    return a0 * b0 / __gcd(a0, b0);
}
int main()
{
  ll n,cnt=0;
  cin>>n;
  set<int>S;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    S.insert(x);
  }

   cout<<S.size()<<endl;
    return 0;
}
