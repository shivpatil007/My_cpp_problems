#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    
    int first=-1,second=-1;
    for(int i=0;i<n;i++){
        cin>>x;
        if (x>first){
            second=first;
            first=x;
        }
    }
    cout<<second;
    
    



    return 0;
}