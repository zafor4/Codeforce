#include<iostream>
using namespace std;
int main(){
int r,b;
cin>>r>>b;
int diff,same;
if (r<b){
    swap(r,b);
}
diff=r-b;
same=diff/2;
cout<<b<<' '<<same<<endl;


    return 0;
}