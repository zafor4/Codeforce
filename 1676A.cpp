#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        int count1=0,count2=0;
        for (int j=0;j<3;j++){
            count1+=num%10;
            num=num/10;
        }
        for (int l=0;l<3;l++){
            count2+=num%10;
            num=num/10;
        }
        if (count1==count2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}