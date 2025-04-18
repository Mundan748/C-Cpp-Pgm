#include<bits/stdc++.h>
using namespace std;
class fun{
    public:
    int n,m;
    fun(){
        n=10;
    }
     fun(int a){
        m=100;  
    }
    ~fun(){
    }
};
int main(){
    {fun a;
    cout<<"n="<<a.n<<endl;}
    fun b(5);
    cout<<"n="<<b.n<<endl;
    cout<<"m="<<b.m<<endl;
    return 0;
}