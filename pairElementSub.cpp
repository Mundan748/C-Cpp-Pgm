// given a array in increasing order and also a integer value
// then check whether pair are present whose absulute subtance = integer.
    #include<bits/stdc++.h>
    using namespace std;
    bool checkpair(int arr[],int size,int integer){
        int i=0,j=1;
        while(i<size and j<size){
            if(abs(arr[i]-arr[j])==integer)return true;
            if(abs(arr[i]-arr[j])<integer)j++;
            else i++;
        }
        return  false;
    }
    int main(){
        int arr[8]={-4,-2,-1,3,4,5,6,7};
        int integer=5;
        if(checkpair(arr,8,integer))cout<<"yes";
        else cout<<"no";
        return 0;
    }

