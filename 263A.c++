#include<iostream>
using namespace std;
int positionInj(int matrix[][5],int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]){
                return j;

            }
        }
    }
    return 0;
}
int positionIni(int matrix[][5],int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]){
                return i;

            }
        }
    }
    return 0;
}

int main(){
    int matrix[5][5];
    int row,col;
    int row2,col2;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
                cin>>matrix[i][j];
        }
    }
    row=positionIni(matrix,5);
    col=positionInj(matrix,5);
    if (row>2){
        row2=row-2;
    }
    else if (row<2){
        row2=2-row;
    }
    else {
        row2=0;
    }
    if (col>2){
        col2=col-2;
    }
    else if (col<2){
        col2=2-col;
    }
    else col2=0;

    cout<<row2+col2<<endl;


}