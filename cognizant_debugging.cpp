#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        int j;
        cin >> j;
        int arr[j];
        for (int k = 0; k < j; k++)
            cin >> arr[k];

        for (int i = 0; i < j; i++)
            arr[i] += (arr[arr[i]] % j) * j;

        for (int i = 0; i < j; i++)
            arr[i] /= j;
    }
}
