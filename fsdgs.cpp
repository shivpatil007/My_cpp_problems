// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function that returns number of
// patient for a day in a month
int getPatients(int M, int D)
{
	return ((6 - M) * (6 - M))
		+ abs(D - 15);
}

// Function that count the TVs with
// given amount of revenue target
void countTVs(long long n, long long r1,
			long long r2, long long target)
{
	long long np, tvs, current_target;

	// Days in each month
	vector<int> days = { 0, 31, 28, 31,
						30, 31, 30, 31,
						31, 30, 31, 30,
						31 };

	// Check all possible combinations
	for (tvs = 0; tvs <= n; tvs++) {

		// Stores the current target
		current_target = 0;

		for (int m = 1; m <= 12; m++) {

			for (int d = 1;
				d <= days[m]; d++) {

				// Number of patients
				// on day d of month m
				np = getPatients(m, d);

				// Patients cannot be
				// exceed number of rooms
				np = min(np, n);

				// If the number of patient is
				// <= count of rooms without tv
				if (np <= n - tvs) {

					// All patients will opt
					// for rooms without tv
					current_target += np * r2;
				}

				// Otherwise
				else {

					// Some will opt for
					// rooms with tv and
					// others without tv
					current_target
						+= ((n - tvs) * r2
							+ ((np - (n - tvs))
							* r1));
				}
			}
		}

		// If current target meets
		// the required target
		if (current_target >= target) {
			break;
		}
	}

	// Print the count of TVs
	cout << min(tvs, n);
}

// Driver Code
int main()
{
	long long N = 20, R1 = 1500;
	long long R2 = 1000;
	long long target = 7000000;

	// Function Call
	countTVs(N, R1, R2, target);

	return 0;
}
