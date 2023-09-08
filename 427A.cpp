#include<iostream>
using namespace std;
int main(){
    int n,num,count=0,scan=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>num;
        if (num>0){
            scan+=num;
        }
        if (num<0){
            if (scan==0){
                count+=1;
            }
            else {
                scan--;
                continue;
            }
        }
    }
    cout<<count<<endl;


    return 0;
}