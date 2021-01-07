#include <iostream>
#include<string>
#include<algorithm>
#include <cstdio>
using namespace std;

int main()
{
    string s;
    string s1,s2;
    getline(cin,s);
    s1="1111111";
    s2="0000000";
    
    if (s.find(s1) != std::string::npos || s.find(s2) != std::string::npos) 
        {
            std::cout << "YES" << '\n';
        }
    else
        {
            std::cout << "NO" << '\n';
        }
   
   
   return 0;
}