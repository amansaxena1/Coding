#include <iostream>
#include<string>

using namespace std;

int main()
{
  int i = 0 , si = 0 , a = 0 , b = 0;
  char c;
  string s,result;
  cin>>c>>s;
  
  string l="qwertyuiopasdfghjkl;zxcvbnm,./";
  
  a = s.length();
  b = l.length();
  
  for(i = 0; i < a ; i++)
  {
      for(si = 0 ; si < b ; si++)
      {
          if(c == 'R')
          {
              if(l[si] == s[i])
                result = result + l[si-1];
          }
          else
          {
              if(l[si] == s[i])
                result = result + l[si+1];
          }
      }
      
  }
  cout<<result;
}
