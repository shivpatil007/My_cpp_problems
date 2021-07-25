
#include <iostream>
#include <vector>
using namespace std;

int fibo(int n)
{

    if (n == 1 || n == 2)
        return 1;
    else
    {

        int arr[n + 1];
        arr[0] = 1;
        arr[1] = 1;
        for (int i = 2; i < n + 1; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        return arr[n];
    }
}

int main()
{
    int n;
    cin >> n;

    int result = fibo(n - 1);
    cout << result;
    return 0;
}