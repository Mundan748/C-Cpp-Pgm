#include<iostream>
using namespace std;
int main(){
    int num;cin>>num;
    while(num>0){
       int i=num%10;cout<<i;
       num=num/10;
    }
    return 0;
}