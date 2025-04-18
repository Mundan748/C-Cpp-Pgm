#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"base 10";
    }
    void show(){
        cout<<"base show 10";
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"derived 10";
    }
    void show(){
        cout<<"show 20";
    }
};
int main(){
    base b1,*bptr;
    derived d1;
    bptr=&d1;
    bptr-> display();
    bptr-> show();  
    return 0;
}