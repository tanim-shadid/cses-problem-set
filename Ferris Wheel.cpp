#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

int main()
  {
  	 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

      int n,x;
   cin>>n>>x;
   int sum=0;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];

   }
   sort(v.begin(),v.end());
   int i=0;
   int j=n-1;
   while(i<=j)
   {
    if(v[i]+v[j]<=x)
    {
      sum++;
      i++;
      j--;
    }
    else
    {
      j--;
      sum++;
    }
   }
   cout<<sum<<endl;




    return 0;
  }
