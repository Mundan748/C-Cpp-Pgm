#include<iostream>
#include<vector>
using namespace std;
void sortevenandodd(vector<int>&v){
    int first_ptr=0,sec_ptr=v.size()-1;
    while(first_ptr<sec_ptr){
        if(v[first_ptr++]%2==1 && v[sec_ptr--]%2==0){
            int tem= v[first_ptr];
            v[first_ptr]=v[sec_ptr];
            v[sec_ptr]=tem;
        }
        if(v[first_ptr]%2==0){
            first_ptr++;
        }
        if(v[sec_ptr]%2==1){
            sec_ptr--;
        }
    }
}
int main(){
    vector<int>v;
    int size; cin>>size;
    for(int i=0;i<size;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sortevenandodd(v);
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}