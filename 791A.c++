#include<iostream>
using namespace std;
int main(){
    int limak,bob,count=0;
    cin>>limak>>bob;
    while (limak<=bob){
        limak=limak*3;
        bob=bob*2;

        count+=1;
    }
    cout<<count;

}