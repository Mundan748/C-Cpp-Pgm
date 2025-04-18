#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    int rollNo,marks;
    char name[20];
    student(int a,char b[],int c){
        rollNo=a;
        marks=c;
        strcpy(name,b);
        display();
    }
    void display(){
        cout<<rollNo<<"."<<name<<" "<<marks<<endl;
    }
};
int main(){
    student s1=student(1,"mundan",80),s2=student(2,"kundan",86);
    return 0;
}