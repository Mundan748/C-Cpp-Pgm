#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter a num=";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<2*num;j++){
            if(j<=num-i||j>=num+i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}