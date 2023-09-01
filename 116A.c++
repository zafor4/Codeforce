#include<iostream>
using namespace std;
int  partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j=low;j<=high-1;j++){
        if (arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp2=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp2;
    return i+1;
}
void quicksort(int arr[],int low,int high){
if (low<high){
    int pi=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);

}
}
int main(){
    int n;
    int down,up;
    cin>>n;
    int initial=0;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>down>>up;
        if (i==0){
        arr[i]=up-down;
        }
        else{
            arr[i]=up-down+arr[i-1];
        }
    }

    quicksort(arr,0,n-1);

    cout<<arr[n-1]<<endl;



}