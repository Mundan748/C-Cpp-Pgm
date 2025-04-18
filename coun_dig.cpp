#include<iostream>
using namespace std;
int main(){
    long num,reverse=0;
    cin>>num;
    int sum=0,coun=0;
    while(num>0){
        int lastDig=num%10;
        reverse=(reverse*10)+lastDig;
        sum+=lastDig;
        num/=10;
        coun++;
    }
    cout<<"reverse order is: "<<reverse;
    cout<<"\nno. of digit="<<coun;
    cout<<"\nsum of digit="<<sum;
    return 0;
}