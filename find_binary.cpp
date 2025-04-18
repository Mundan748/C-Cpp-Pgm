#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choise;
    cout<<"\n\n\t*****MANU*****\n\t1. desimal to binary\n\t2. binary to desimal\n\n\tenter your choice(1 or 2) : ";cin>>choise;
    switch(choise){
     case 1 :{
      int num,size=0;
      cout<<"\n\tenter a no. to find binary form = "; cin>>num;
      int con=num;
      while(con>0){
         con=con/2;
         size++;
        }
      size=size-1;int j=size;int rem[size];
      while(num>0){
          rem[size]=num%2;
          num=num/2;
          size--;
        }
      cout<<"\t\nbinary form is : ";
      for(int i=0;i<=j;i++){
          cout<<rem[i];
        }
    break;
     }
     case 2:{
      int s_ar;
      cout<<"enter length of binary form : ";cin>>s_ar;s_ar--; int ar[s_ar]; int num=0;
      cout<<"enter the binary form (with space between two element) : ";
      for (int i = 0; i <= s_ar; i++) {
          cin>>ar[i];
        }
      int i=0;
      while(s_ar>=0){
          num=num+(pow(2,s_ar)*ar[i]);
          s_ar--;i++;
        }
      cout<<"desimal form is : "<<num;
    break;
    }
    default: 
       cout<<"ivailed choice !!!";
    break;
    }
    return 0;
}