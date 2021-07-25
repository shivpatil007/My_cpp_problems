#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
vector<int> a;

int fun(vector<int> v, int n)
{
    priority_queue<int> d;
    for (int i = 0; i < v.size(); i++)
    {
        d.push(v[i]);
        if (d.size() > n)
            d.pop();
    }
    return d.top();
}

int main()
{
    int i, x, k;
    cout << "enter the size";
    cin >> i;
    for (int j = 0; j < i; j++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << "enter the kth to find";
    cin >> k;
    int temp = fun(a, k);
    cout << temp;
    return 0;
}