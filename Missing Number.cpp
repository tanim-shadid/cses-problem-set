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
  ll n,sum=0;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n-1;i++)
  {
    cin>>v[i];
    sum+=v[i];
  }
  ll ans=(n*(n+1))/2;
  cout<<ans-sum<<endl;

    return 0;
}
