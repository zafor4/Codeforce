#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int i,key,j;
    for (i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
    int t,n;

    cin>>t;
    while(t--){
        cin>>n;
            int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        insertionsort(arr,n);
        for (int i=1;i<n;i++){
            if ((arr[i]-arr[i-1])>1){
                flag=1;
                break;
            }
        }
        if (flag==0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }


}