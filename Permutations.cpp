#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int n;
   cin>>n;
   if(n==2 || n==3)
    cout<<"NO SOLUTION"<<endl;
  else if(n==1)
  {
    cout<<"1"<<endl;
  }
  else
  {

     for(int i=1;i<=n;i++)
    {
      if((i&1)!=1)
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i++)
    {
      if(i&1)
        cout<<i<<" ";
    }
  }


    return 0;
}
