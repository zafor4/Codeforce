#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int num;
        cin>>num;
        if (num%2==0){
            cout<<(num-1)/2<<endl;
        }
        else {
            cout<<num/2<<endl;
        }
    }

    return 0;
}