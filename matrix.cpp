#include<bits/stdc++.h>
using namespace std;
const int size=3;
void display(int mat[size][size]){
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            cout<<mat[i][j]<<"  ";
        cout<<endl;
}
void getdata(int mat[size][size]){
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            cin>>mat[i][j]; 
}    
int main(){
    int mat1[size][size], mat2[size][size];
    int result[size][size];
    cout<<" enter value of matrix1:\n";  getdata(mat1);
    cout<<"matrix1 is :\n";              display(mat1);
    cout<<" enter value of matrix2:\n";  getdata(mat2);
    cout<<"matrix2 is :\n";              display(mat2);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"addition of mat1 and ma2 is :\n";
    display(result);  
    return 0;
}