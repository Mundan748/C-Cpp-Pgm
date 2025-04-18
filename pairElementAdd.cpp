// given a array in increasing order also a integer value
// then check in array pair are present which sum is= integer.
    #include<iostream>
    using namespace std;
    bool checkpair(int arr[],int size,int intger){
        int i=0,j=size-1;
        while(i<j){
            if(arr[i]+arr[j]==intger)return true;
            if(arr[i]+arr[j]<intger)i++;
            else j--;
        }
        return false;
    }
    int main(){
        int arr[7]={-1,2,5,6,8,11,20};
        int intger=14;
        if(checkpair(arr,7,intger))cout<<"yes";
        else cout<<"no";
        return 0;
    } 