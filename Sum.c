#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for (int i=0;i<test;i++){
        int arr[3];
        for (int j=0;j<3;j++){
            scanf("%d",&arr[j]);
        }
        for(int p=0;p<2;p++){
            for (int q=0;q<2-p;q++){
                if (arr[q]>arr[q+1]){
                    int temp=arr[q];
                    arr[q]=arr[q+1];
                    arr[q+1]=temp;
                }
            }
        }
        if (arr[0]+arr[1]==arr[2]){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}