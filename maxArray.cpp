#include<iostream>
using namespace std;
int main(){
    int array[]={2,4,5,7,3,23,65,2,8};
    int max=0;
    for(int ele:array){
        if(ele>max){
            max=ele;
        }
    }
    cout <<max;
    return 0;
}