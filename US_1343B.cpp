#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int num;
        cin>>num;
        vector<int>v1,v2,v3,v4;
        if(num%4==0){
            cout<<"YES"<<endl;
            for (int j=1;j<2*num;j++){
                if (j%2==0){
                    v1.push_back(j);
                }
            }
            for (int k=1;k<2*num;k++){
                if (k%2!=0){
                    v2.push_back(k);
                }
            }
            int sum1=0,sum2=0;
            for (int l=0;l<num/2;l++){
                sum1+=v1[l];
                v3.push_back(v1[l]);
            }
            
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}