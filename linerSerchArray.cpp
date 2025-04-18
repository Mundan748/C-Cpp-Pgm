#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,3,7,88,4,34,46};
    int size=sizeof(array)/sizeof(array[0]);
    int linearSerch=7;
    int index=-1;
    for(int i=0;i<size;i++){
        if(array[i]==linearSerch){
            index=i;
            break;
        }
    }
    cout<<index<<endl;
    return 0;
}