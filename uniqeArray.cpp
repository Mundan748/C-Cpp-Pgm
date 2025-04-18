#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int ele:array){
        if(ele>0){
            cout<<ele<<endl;
        }
    }
    return 0;
}