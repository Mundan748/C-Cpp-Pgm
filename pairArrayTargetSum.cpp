// if array is not sorted then this program for triples
#include<iostream>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int targetSum=5;
    int size=sizeof(array)/sizeof(array[0]);
    int ans=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetSum){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}