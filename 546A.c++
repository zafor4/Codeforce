#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int taka,mid,count=0;
    for (int i=1;i<=w;i++){
        mid=k*i;
        count+=mid;

    }
    if (count>n){
        cout<<count-n<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
}