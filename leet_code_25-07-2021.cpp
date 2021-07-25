/**Given a positive integer n, return the number of the integers in the range [0, n]
 *  whose binary representations do not contain consecutive ones.*/
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
int main()
{

    int n;
    cin >> n;
    auto start = high_resolution_clock::now();
    int count = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if ((i & (i >> 1)) == 0)
            count++;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    // To get the value of duration use the count()
    // member function on the duration object
    cout <<"Time of execution:- "  << duration.count() << endl;
    cout << count;

    return 0;
}
