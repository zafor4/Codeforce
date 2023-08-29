#include<iostream>
using namespace std;
int main(){
    int num,step;
    cin>>num>>step;
    for (int i=1;i<=step;i++){
        if (num%10==0){
            num=num/10;
        }
        else num-=1;
    }
    cout<<num<<endl;

    return 0;
}