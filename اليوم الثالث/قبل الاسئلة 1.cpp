// cpc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int k = 1e5;
int pr[k], a[k];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	for (int i = 1; i <= n; ++i)
		pr[i] = pr[i - 1] + a[i];

	int q;
	cin >> q;
	while (--q) {
		int l, r;
		cin >> l >> r;
		int sum = pr[r] - pr[l - 1];
		cout << sum << endl;

	}

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
