
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
void swap(vector<int> &v)
{
    int i = 0, j = v.size() - 1;
    while (i < (v.size() / 2) && j >= v.size() / 2)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    cout << "enter the size";
    int i;
    cin >> i;
    int x;
    for (int j = 0; j < i; j++)
    {
        cin >> x;
        a.push_back(x);
    }
    swap(a);
    for (int y = 0; y < i; y++)
    {
        cout << a[y];
    }
    return 0;
}
