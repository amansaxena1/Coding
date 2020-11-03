#include<iostream>
#include<string>
using namespace std;

int main()
{
    string p;
    int i = 0;
    cin>>p;
    for(i = 0 ; i < p.length() ; i++)
    {
        if(p[i] == 'H' || p[i] == 'Q' ||  p[i] == '9')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
