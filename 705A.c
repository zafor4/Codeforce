#include<stdio.h>
int main(){
int a,b,i=5,j=5;
scanf("%d%d",&a,&b);
int count=0,time=240-b;
while(i<=time){
    if (count==a){
        break;
    }
    j+=5;
    
    i+=j;
    
    count+=1;
}
printf("%d\n",count);

    return 0;
}