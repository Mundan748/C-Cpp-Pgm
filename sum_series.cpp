#include<iostream>
using namespace std;
int main(){

    
    //series=1-2+3-4+5-6...n


    int term,sum=1;
    cin>>term;
    for(int i=2;i<=term;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    cout<<"sum of these series is : "<<sum;
    return 0;
}