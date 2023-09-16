#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
int count1=0,count2=0;
int a,b;
    for (int i=0;i<test;i++){
        cin>>a>>b;
        if (a>b){
            count1++;
        }
        else if (a<b){
            count2++;
        }

    }
    if (count1==count2){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if (count1>count2){
        cout<<"Mishka"<<endl;
    }
    else {
        cout<<"Chris"<<endl;
    }


    return 0;
}