#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;

int solve(int array[], int size) {
	int pos = 1;
	int ans = 0;

	for (int i = size - 1; i >= 0; i--)
	{
		ans += array[i] * pos;
		pos *= 10;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int m, n;
	cin >> m;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> arr[i];
	}
	cin >> n;
	int arx[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arx[i];
	}

	int firstNumber = solve(arr, m);
	int secondNumber = solve(arx, n);

	int result = firstNumber + secondNumber;

	while (result > 0) {
		int digit = result % 10;
		v.push_back(digit);
		result /= 10;
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i] << ", ";
	}
	cout << "END";

	return 0;
}