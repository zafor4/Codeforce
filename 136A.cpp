#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
        int arr[4];
        int count=0;
        for (int i=0;i<4;i++){
            cin>>arr[i];
        }
        bubblesort(arr,4);

        for (int i=1;i<4;i++){
            if (arr[i]==arr[i-1]){
                count++;
            }
        }
        cout<<count<<endl;
}

