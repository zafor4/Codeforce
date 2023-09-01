#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int min_indx;

    for (int i=0;i<n;i++){
        min_indx=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min_indx]){
                min_indx=j;
            }
        }
        if (min_indx !=i){
            swap(arr[min_indx],arr[i]);
        }
    }
}

int main(){
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for (int i=0;i<n;i++){
        if (5-arr[i]>=k){
            count++;
        }
    }
    cout<<count/3<<endl;

    return 0;
}