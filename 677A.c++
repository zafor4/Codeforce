#include<iostream>
using namespace std;
int main(){
    int n,l;
    int count=0;
    cin>>n>>l;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]<=l){
            count++;
        }
        else {
            count+=2;
        }
    }
    cout<<count<<endl;
}