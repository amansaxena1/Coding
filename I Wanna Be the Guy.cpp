#include <iostream>

using namespace std;

int main()
{
    int n,a,b,j = 0 ,c = 1;
    int arr[101];
    cin>>n>>a;
    for(int i = 0; i < a; i++){
        cin>>arr[j];
        j++;
    }
    cin>>b;
    for(int i = 0; i < b; i++){
        cin>>arr[j];
        j++;
    }
    for(int i = 0; i < j; i++){
        if(arr[i] != c && i == j-1){
            cout<<"Oh, my keyboard!";
            return 0;
        }
        else if(arr[i] == c){
            c++;
            if(c==n+1){
                break;
            }
            i=-1;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
