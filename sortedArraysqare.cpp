// given a array in incresing order , then find a array
// which elemet is sqare of given element in also increasing order
#include<bits/stdc++.h>
using namespace std;
void findSqareArray(int arr[],int size1,int ans[],int size2){
    int i=0,j=size1-1,k=size2-1;
    while(i<=j){
        if(abs(arr[i])>abs(arr[j])) ans[k--]=arr[i]*arr[i++];
        else ans[k--]=arr[j]*arr[j--];
    }
}
int main(){
    int arr[8]={-5,-3,-1,2,4,6,8,10};
    int ans[8];
    findSqareArray(arr,8,ans,8);
    for(int ele:ans)cout<<ele<<" ";
    return 0;
}