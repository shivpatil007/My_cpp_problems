#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string a;

    getline(cin, a);
    map<char, char> b = {{'a', 'A'}, {'B', 'b'}, {'c', 'C'}, {'D', 'd'}, {'e', 'E'}, {'F', 'f'}, {'G', 'g'}, {'h', 'H'}, {'I', 'i'}, {'J', 'j'}, {'K', 'k'}, {'l', 'L'}, {'m', 'M'}, {'n', 'N'}, {'o', 'O'}, {'P', 'p'}, {'Q', 'q'}, {'r', 'R'}, {'S', 's'}, {'T', 't'}, {'U', 'u'}, {'V', 'v'}, {'w', 'W'}, {'x', 'X'}, {'y', 'Y'}, {'z', 'Z'}};
    for (int i = 0; i < a.length(); i++)
    {

        if (i == 0)
        {
            a[i] = b[a[i]];
        }
        else if (a[i + 1] == ' ')
            a[i] = b[a[i]];
        else if (a[i - 1] == ' ')
            a[i] = b[a[i]];
        else
        {
        }
    }
    cout << a;
    return 0;
}