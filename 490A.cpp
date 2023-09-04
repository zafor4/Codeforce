#include<iostream>
#include<vector>
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

int main(){
int n,team,p;
cin>>n;
int t[n];
for (int i=0;i<n;i++){
    cin>>t[i];
}
int count1=countnumber(1,t,n);
int count2=countnumber(2,t,n);
int count3=countnumber(3,t,n);
team=teamamount(count1,count2,count3);

cout<<team;
vector<int> vtr1;
vector<int>vtr2;
vector<int>vtr3;
int j=0;
    for (int i = 1; i <= n; ++i)
    {
        

        if (t[j]==1){
            vtr1[t[j]]=i;
        }
        else if (t[j]==2){
            vtr2[t[j]]==i;
        }
        else if (t[j]==3){
            vtr3[t[j]]=i;
        }

    }
    for (int i=0;i<team;i++){
        cout<<vtr1[i]<<vtr2[i]<<vtr3[i]<<endl;
    }


    return 0;
}


