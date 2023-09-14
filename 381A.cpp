#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
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
                int temp=arr[i+1];
            arr[i+1]=arr[high];
            arr[high]=temp;
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
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n);
    int j=0;
    for (int i=n-1;i>=0;i--){
        arr2[i]=arr[j];
        j++;
    }
    int count1=0,count2=0;
    for (int i=0;i<n;i++){
        if (i%2!=0){
            count1+=arr2[i];

        }
        else {
            count2+=arr2[i];
        }
    }
    cout<<count2<<" "<<count1<<endl;



    return 0;
}