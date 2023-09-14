#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v1,v2,v3;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            v1.push_back(i);
        }
        else if (arr[i]==2){
            v2.push_back(i);
        }
        else if (arr[i]==3){
            v3.push_back(i);
        }
    }
    int s1=v1.size();
    int s2=v2.size();
    int s3=v3.size();
    int small;
    if (s1<=s2&&s1<=s3){
        small=s1;
    }
    else if (s2<=s1 &&s2<=s3){
        small=s2;
    }
    else if (s3<=s1 && s3<=s2){
        small=s3;
    }
    cout<<small<<endl;
    for (int i=0;i<small;i++){
        cout<<v1.at(i)+1<<" "<<v2.at(i)+1<<" "<<v3.at(i)+1<<endl;
    }




    return 0;
}