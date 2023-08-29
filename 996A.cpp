#include<iostream>
using namespace std;
int main(){
    int amount;
    int i=0,count=0;
    int notes[]={100,20,10,5,1};
    cin>>amount;
    while (amount!=0){
        if (amount>=notes[i]){
            count+=amount/notes[i];
            amount=amount%notes[i];
        }
        i++;

    }
    cout<<count<<endl;
    return 0;
}