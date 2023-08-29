#include<iostream>
#include<string>
using namespace std;
string swop(string s){
    for (int i=0;i<s.length();i++){
        for (int j=0;j<s.length()-i-1;j++){
            if (s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    return s;
}

int main(){
    string s1,s2,s3;
    string r1,r2;
    cin>>s1>>s2>>s3;
    r1=swop(s1+s2);
    r2=swop(s3);
    int res=r1.compare(r2);
    if (res==0){
        cout<<"YES"<<endl;

    }
    else {
        cout<<"NO"<<endl;
    }
    

}