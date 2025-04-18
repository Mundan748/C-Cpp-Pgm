// given two array in increasing order then murge in a other array in also increasing order
    #include<iostream>
    using namespace std;

    void murgeArray(int arr1[],int size1,int arr2[],int size2,int ans[],int size3){
        int i=0,j=0,k=0;
        while(i<size1 and j<size2){
            if(arr1[i]<arr2[j]){
                ans[k]=arr1[i];
                i++;k++;
            }else{
                ans[k]=arr2[j];
                j++;k++;
            }
        }
        while(i<size1){
            ans[k]=arr1[i];
            i++;k++;
        }
        while(j<size2){
            ans[k]=arr2[j];
            j++;k++;
        }
    }
    int main(){
        int arr1[5]={-1,3,6,8,43};
        int arr2[3]={2,4,75};
        int ans[8];
        murgeArray(arr1,5,arr2,3,ans,8);
        for(int ele:ans)cout<<ele<<" ";
        return 0;
    }