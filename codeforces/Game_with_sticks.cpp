#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n = 0 , m = 0 , count =0;
  cin>>n;
  cin>>m;
  while(n*m != 0)
  {
     n--;
     m--;
     count++;
  }
  if(count % 2 != 0)
  {
      cout<<"Akshat";
  }
  else
  {
      cout<<"Malvika";
  }
}