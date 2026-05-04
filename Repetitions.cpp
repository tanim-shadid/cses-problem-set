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
 string S;
 cin>>S;
 int cnt=1,ans=1;
 for(int i=1;i<S.length();i++)
 {
   if(S[i]==S[i-1])
   {
    cnt++;
    ans=max(cnt,ans);
   }
   else
   {
    ans=max(ans,cnt);
    cnt=1;
   }
 }
 cout<<ans<<endl;

    return 0;
}
