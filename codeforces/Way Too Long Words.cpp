#include <iostream>

using namespace std;

int main()
{
    int a,num=0,j=0;
    char ch[200];
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>ch;
        while(ch[j]!='\0'){
            num++;
            j++;
        }
        if(num>10){
            cout<<ch[0]<<num-2<<ch[num-1]<<"\n";
        }
        else{
            cout<<ch<<"\n";
        }
        num=j=0;
    }
    return 0;
}
