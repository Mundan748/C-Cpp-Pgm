#include <bits/stdc++.h>
using namespace std;
class city
{
    char name[30];

public:
    void getname()
    {
        cout << "name = ";
        cin >> name;
    }
    void display()
    {
        cout << "\n"<< name;
    }
};
int main()
{
    city *ptr[10];
    int choice, i = 0;
    do
    {   
        ptr[i]=new city;
        ptr[i]->getname();i++;
        cout << "choice=";
        cin >> choice;
    } while (choice);
    for(int j=0;j<i;j++){
        ptr[j]->display();
    }
    return 0;
}