#include<iostream>
using namespace std;
int main(){
    int price ,change,res;
    cin>>price>>change;
    for(int i=1;i<10;i++){
        if ((i*price)%10==0){
            res=i;
            break;
        }
        else if (((i*price)-change)%10==0){
            res=i;
            break;
        }
    }
    cout<<res<<endl;


    return 0;
}