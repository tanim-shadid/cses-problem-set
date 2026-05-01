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
  ll n;
  cin>>n;
  cout<<n<<" ";
  while(n>1)
  {
    if(n%2==0)
    {
      n=n/2;
      cout<<n<<" ";

    }
    else
    {
      n=(n*3)+1;
      cout<<n<<" ";
    }
  }
  cout<<endl;

    return 0;
}
