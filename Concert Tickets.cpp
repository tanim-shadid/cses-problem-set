#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

int main()
  {
  	 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

      int n,m;
      cin>>n>>m;
      multiset<int>ticket;
      for(int i=0;i<n;i++)
      {
        int h;
        cin>>h;
        ticket.insert(h);
      }
      for(int i=0;i<m;i++)
      {
        int t;
        cin>>t;
        auto it=ticket.upper_bound(t);
        if(it==ticket.begin())
        {
          cout<<"-1"<<endl;
        }
        else
         {
          cout<<*(--it)<<endl;
          ticket.erase(it);
         }
      }





    return 0;
  }
