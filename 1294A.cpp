#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b,c,d;
    int res;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        res=(a+b+c+d);
        if (res%3==0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}