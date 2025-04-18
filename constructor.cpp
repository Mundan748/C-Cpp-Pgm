#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"these are student details"<<endl;
    }
    int addition(int num1,int num2){
        cout<<"addition is :"<<num1+num2;
        return (num1+num2);
    }
};
int main(){
    student s1;
    cout<<"\nadd "<<s1.addition(4,7);
    return 0;
}