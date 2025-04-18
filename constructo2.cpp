#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    int roll_no,marks;
    char name[20];
    student(int a,char b[],int c);
    void input(int *d);
   void display(){
        cout<<roll_no<<"."<<name<<"  "<<marks<<endl;
    }
};
student::student(int a,char b[],int c){
    roll_no=a;
    marks=c;
    strcpy(name,b);
}
void student::input(int *d){
    cout<<"enter=";
    cin>>*d;
}
int main(){
    int a= s1.input(&s1.roll_no);
    char b[20];
    strcpy(s1.input(s1.name),b);
    int c=s1.input(&s1.marks);
    student s1=student(a,b,c);
    return 0;
}