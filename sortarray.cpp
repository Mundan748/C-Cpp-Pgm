// short array in increasing order
#include <bits/stdc++.h>
using namespace std;
void display(int *ptr,int size){
    int i=0;
    while(i<size) cout<<*(ptr+i++)<<" ";
}
void shortArray(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }        
}
int main()
{
    int arr[8] = {-4, 5, 2, 9, -5, 6, -3, 1};
    display(arr,8);
    shortArray(arr, 8);
    cout<<endl;
    display(arr,8);
    return 0;
}