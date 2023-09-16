#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        string s;
        int j=0;
        cin>>s;
        while (j<s.length()){
            cout<<s[j];
            j+=2;
        }
        cout<<s[s.length()-1]<<endl;
    }



    return 0;
}