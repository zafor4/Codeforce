#include<iostream>
#include<string.h>
using namespace std;
int partition(int arr[],int low ,int high){
    int pivot=arr[high];
    int i=(low-1);
    for (int j=low;j<=high-1;j++){
        if (arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);

}

void quicksort(int arr[],int low,int high){
    if (low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void bubblesort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<(n-i)-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}




int main() {
    char ch[100];
    int arr[100];
    cin >> ch;
    int j = 0;

    for (int i = 0; i < strlen(ch); i++) { 
        if (ch[i] != '+') {
            arr[j] = ch[i] - '0';
            j++;
        }
    }

    quicksort(arr,0,j-1);


    for (int i = 0; i < j; i++) { 
        cout << arr[i];
        if (i<j-1){
            cout<<'+';
        }
    }
    cout<<endl;



}
