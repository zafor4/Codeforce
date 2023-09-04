#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max,min;
    max=min=arr[0];
    int count1=0;
    int count2=0;
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
            count1=i;
        }
        if (arr[i]<=min){
            min=arr[i];
            count2=i;
        }
    }
    // cout<<count1<<count2<<endl;
    int fc;
    fc=((n-1)-count2)+(count1-0);
    if (count1<count2){
        cout<<fc<<endl;
    }
    else {
        cout<<fc-1<<endl;
    }
    return 0;
}