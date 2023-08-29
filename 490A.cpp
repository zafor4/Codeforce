#include<iostream>
using namespace std;
int countnumber(int num,int t[],int n){
    int count=0;
    for (int i=0;i<n;i++){
        if (t[i]==num){
            count++;
        }
    }

    return count;


}

int teamamount(int a,int b,int c){
int count=0;
while(a!=0&&b!=0&&c!=0){
    count++;
a--;
b--;
c--;
}
return count;
}
void sorting(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
int n,team;
cin>>n;
int t[n];
for (int i=0;i<n;i++){
    cin>>t[i];
}
int count1=countnumber(1,t,n);
int count2=countnumber(2,t,n);
int count3=countnumber(3,t,n);
 team=teamamount(count1,count2,count3);
sorting(t,n);
//for (int i=0;i<n;i++){
    //cout<<t[i]<<endl;
//}
// int lim=looplimit(count1,count2,count3);
while(count1!=0&&count2!=0&&count3!=0){
        cout<<count1<<count1+count2<<count1+count2+count3<<endl;

}


    return 0;
}


