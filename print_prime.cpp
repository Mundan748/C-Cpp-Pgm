#include<iostream>
#include<cmath>
using namespace std;
int checkprime(int n);
void print(int n); 
int main(){
    int num1,num2;cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        print(checkprime(i));
    }
    return 0;
}
int checkprime(int n){
     int count =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
           count++;
        }
    }
    if(count==0){
        return n;
    }
}
void print(int n){
    cout <<n<<endl;
}