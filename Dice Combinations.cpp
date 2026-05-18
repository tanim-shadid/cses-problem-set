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

   //  int t;
   // cin>>t;
   //  while(t--)
   //  {

        int n;
        cin>>n;
        vector<int>v(n+1);
        v[0]=1;
        for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=6;j++)
          {
            if(j<=i)
            {
              v[i]=(v[i]+v[i-j])%MOD;
            }
          }
        }
        cout<<v[n]<<endl;

   //  }


    return 0;
}
