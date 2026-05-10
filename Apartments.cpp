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
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>Vn(n);
  vector<ll>Vm(m);
  for(ll i=0;i<n;i++)
  {
    cin>>Vn[i];
  }
  sort(Vn.begin(),Vn.end());

   for(ll i=0;i<m;i++)
  {
    cin>>Vm[i];
  }
  sort(Vm.begin(),Vm.end());
   ll v1=0,v2=0,cnt=0;
   while(v1<n && v2<m)
   {
    if(abs(Vn[v1]-Vm[v2])<=k)
    {
      cnt++;
      v1++;
      v2++;
    }
    else if(Vn[v1]>Vm[v2])
    {
      v2++;
    }
    else
    {
      v1++;
    }
   }
   cout<<cnt<<endl;


    return 0;
}
