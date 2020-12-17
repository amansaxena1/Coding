
#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

int main()
{
   int n=0,p=0,i=0,q=0,count = 0,j=0;
   cin>>n;
   cin>>p;
   int arr1[100],arr2[100];
   vector<int> v;
   for(i = 0 ; i < p ; i++)
   {
       cin>>arr1[i];
       v.push_back(arr1[i]);
   }
   cin>>q;
   for(i = 0 ; i < q ; i++)
   {
       cin>>arr2[i];
        v.push_back(arr2[i]);
   }
   
   for(i = 1 ; i <= n ; i++)
   {
       for(j=0;j<v.size();j++)
       {
        if(i == v[j])
          {  count++;
            break;
          }
          else
          {
              continue;
          }
       }
   }

   if(count == n)
   cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}
