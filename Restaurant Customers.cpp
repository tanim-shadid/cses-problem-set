//Location-> E:\Sublime Cp\1.cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const unsigned int MOD = 1000000007;
 void Online_Judge()
{

#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);

freopen("output1.txt", "w", stdout);

#endif
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    Online_Judge();

    //int t;
    //cin>>t;
    //while(t--)
    //{

      int n;
      cin>>n;
      ll a,b;
      //vector<pair<ll,ll>>v;
      map<int,int>m;
      ll ans=0,cnt=0;
      for(int i=0;i<n;i++)
      {
        cin>>a>>b;
        m[a]++;
        m[b]--;
      }

      for(auto it:m)
      {
        cnt+=it.second;
        ans=max(ans,cnt);

      }
      cout<<ans<<endl;


   // }


    return 0;
}
