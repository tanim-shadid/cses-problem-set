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
  int n;
  ll cnt=0;
  cin>>n;
  vector<ll>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

   for(int i=0;i<n-1;i++)
  {
    if(v[i]>v[i+1])
    {
      cnt+=abs(v[i]-v[i+1]);
          v[i+1]=v[i];

    }
  }
  cout<<cnt<<endl;


    return 0;
}
