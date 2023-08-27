#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int x;
    cin>>x;
    int count =0;
    int i=0;
    int taka;
    while(x!=0){
        if (arr[i]<=x){
            count=count+(x/arr[i]);
        x=x%arr[i];
        
        }
        i++;
    }
cout<<count;

}