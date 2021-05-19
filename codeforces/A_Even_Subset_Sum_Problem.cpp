#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,n,ele,index,flag=0,flag1=0;
        cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++){
            cin>>a;
            if(n==1 && a%2!=0){
                cout<<"-1"<<"\n";
                flag1 = 1;
                break;
            }
            else if(a%2==0){
                ele = 1;
                index = i+1;
                flag = 1;
            }
            v.push_back(a);
        }
        if(flag==1){
            cout<<ele<<"\n"<<index<<"\n";
        }
        else if(flag1 != 1){
            cout<<"2"<<"\n"<<"1"<<" "<<"2"<<"\n";
        }
    }
    return 0;
}