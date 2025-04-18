// if a shorted array is given then we apply this code
#include<bits/stdc++.h>
using namespace std;
int binary(int *ptr,int size,int integer){
    int firstInd=0,lastInd=size-1,mid;
    while(firstInd<=lastInd){
        mid=(firstInd+lastInd)/2;
        if(integer== *(ptr+mid)) return mid;
        else if(integer< *(ptr+mid)) lastInd=mid-1;
        else firstInd=mid+1;
    }
    return 0;
}
int main(){
    int arr[6]={-2,-1,3,5,6,8};
    int integer=9;
    int int_index=binary(arr,6,integer);
    if(int_index) cout<<"presen index at :"<<int_index;
    else cout <<"not found";
    return 0;
}