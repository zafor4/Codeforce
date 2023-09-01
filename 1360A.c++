#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>a>>b;
    
    if (b>a){
        int temp=a;
        a=b;
        b=temp;
    }
    if (2*b>=a){
        cout<<(2*b)*(2*b)<<endl;
    }
    else {
        cout<<a*a<<endl;

    }
    } 

    return 0;
}