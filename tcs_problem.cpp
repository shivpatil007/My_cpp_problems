#include <iostream>
#include <vector>
using namespace std;

int count(int l, int r)
{

    vector<bool> prime(r, true);
    int count = 0;
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= r; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= r; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = l; i <= r; i++)
    {
        if (prime[i] && prime[i + 6])
            count++;
    }
    return count;
}

int main()
{
    cout << count(101, 500);
    return 0;
}