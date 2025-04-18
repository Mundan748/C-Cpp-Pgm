#include<iostream>
using namespace std;
int findmax(int array[],int size){
    int maxind=0,max=0;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            maxind=i;
            max=array[i];
        }
    }
    return maxind;
}
int main(){
    int array[]={2,1,3,4,8,7};
    int size=sizeof(array)/sizeof(array[0]);
    int maxind=findmax(array,size);
    array[maxind]=-1;
    int secmaxind=findmax(array,size);
    cout<<array[secmaxind]<<endl;
    return 0;
}