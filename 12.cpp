#include <iostream>
#include <string>
using namespace std;

int main()
{
   int a[100],n,q,i,u,v,sum=0;
   cin>>n;
   cin>>q;
   for(i=1;i<=n;i++)
   {
       cin>>a[n];
   }
   for(i=1;i<=q;i++)
   {
       cin>>u;
       cin>>v;
   }
   
 for(i=a[u];i<=a[v];i++)
 {
    cout<<a[i];

 }
 //cout<<sum;
   
}
