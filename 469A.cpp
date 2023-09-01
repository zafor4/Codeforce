#include<iostream>
using namespace std;
void sortedMerge(int a[], int b[], int res[],  
    int n, int m)  
{  

    int i = 0, j = 0, k = 0;  
    while (i < n) { // iterate in first array  
        res[k] = a[i]; // put each element in res array  
        i += 1;  
        k += 1;  
    }  
    while (j < m) { // iterate in the second array  
        res[k] = b[j]; // put each element in res array  
        j += 1;  
        k += 1;  
    }  
}  
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
int n;
cin>>n;
int p,q;
cin>>p;
int arr[p];
for (int i=0;i<p;i++){
    cin>>arr[i];
}
cin>>q;
int arr1[q];
for (int i=0;i<q;i++){
    cin>>arr1[i];
}
int arr2[p+q];
sortedMerge(arr,arr1,arr2,p,q);
bubblesort(arr2,p+q);
int flag=0;
for (int i=1;i<p+q;i++){
        if (arr2[i]-arr2[i-1]==1){
            flag++;
        }
        else {
                if (arr2[i]-arr2[i-1]>1){
        flag=1;
        break;
    }
        if (arr2[i]-arr2[i-1]==0){
            continue;
        }
        }
    }
    if (flag==n-1){
        cout<<"I become the guy."<<endl;
    }
    else {
        cout<<"Oh, my keyboard!"<<endl;
    }


    return 0;

}
