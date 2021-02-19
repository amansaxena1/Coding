#include <iostream>
using namespace std;

int main() {
    int x;
    while(true){
        cin>>x;
        if(x != 42)
            cout<<x<<"\n";
        else
            break;
    }
	return 0;
}
