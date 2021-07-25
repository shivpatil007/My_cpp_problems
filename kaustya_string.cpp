#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a, b;
    cout << "ENter the first";
    cin >> a;
    cout << "enter second";
    cin >> b;
    a += '$';
    int i = 0, j = 0, count = 0, k;

    for (i; i < a.length(); i++)
    {
        if (a[i] == b[j])
        {
            k = i;
            while (a[i] == b[j])
            {

                i++;
                j++;
            }

            if (j == b.length())
            {
                count++;
            }
            j = 0;
            i = k;
        }
    }
    cout << count;
}