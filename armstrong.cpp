#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,sum=0;cin>>num;int origanalnum=num;
    while(num>0){
        int i=num%10;num/=10;cout <<i<<endl;
        sum=sum+pow(i,3);cout<<sum<<endl;
        
    }
    int a=5;a=a*a*a;cout<<a;
    if(origanalnum==sum){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
} 