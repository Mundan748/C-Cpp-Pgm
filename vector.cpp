#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ve;
    ve.push_back(1);
    ve.push_back(2);
    ve.push_back(3);
    ve.push_back(4);
    ve.push_back(5);
    int key=2;
    key=key%ve.size();
    reverse(ve.begin(),ve.end());
    for(int ele:ve){
        cout<<ele<<" ";
    }
    return 0;
}//https://instagram.com/me_riya__01?igshid=YmMyMTA2M2Y=