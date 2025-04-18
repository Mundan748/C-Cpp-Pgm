//program for add two number
#include<iostream>
using namespace std;
int addition(int num1,int num2);
void display(int result);
int main(){
    int num1=10,num2=20;
    int result=addition(num1,num2);
    display(result);
    return 0;
} 
int addition(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
void display(int result){
    cout<<"additio is : "<<result;
}