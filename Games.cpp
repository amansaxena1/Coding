#include <iostream>
#include <string>

using namespace std;
int main()
{
  int n = 0,i=0,j=0;
  int arr[80];
  int count = 0;
  cin>>n;
  for(i = 0 ; i < 2*n ; i++)
  {
      cin>>arr[i];
  }
  for(i = 1 ; i <=2*n ; i+=2)
  {
      for(j = i+1 ; j <2*n ; j+=2)
        {
            if(arr[i]==arr[j])
            count++;
            if(arr[i-1] == arr[j+1])
            count++;
        }
  }
  cout<<count;
  return 0;
}
