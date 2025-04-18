#include <iostream>
#include <vector>
using namespace std;
int shortsqare(vector<int> &v)
{
    vector<int> ans;
    int firstPtr = 0, lastPtr = v.size() - 1;

    while (firstPtr <= lastPtr)
    {
        if (abs(v[firstPtr]) < abs(v[lastPtr]))
        {
            ans.push_back(v[lastPtr] * v[lastPtr--]);
        }
        else
        {

            ans.push_back(v[firstPtr] * v[firstPtr++]);
        }
    }
    for (int ele : ans)
    {
        cout << ele << " ";
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    shortsqare(v);

    return 0;
}