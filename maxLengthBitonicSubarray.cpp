#include <bits/stdc++.h>
using namespace std;

int solve(int* arr, int n) {
	int dp[1000];
	int ds[1000];

	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
		ds[i] = 1;
	}

	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > arr[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
	}

	//ds[n] = 1;
	for (int i = n - 2 ; i >= 0; i--) {
		if (arr[i] > arr[i + 1]) {
			ds[i] = ds[i + 1] + 1;
		}
	}

	int maxLen = 0;

	for (int i = 0; i < n; ++i)
	{
		if ( (dp[i] + ds[i] - 1) > maxLen) {
			maxLen = dp[i] + ds[i] - 1;
		}
	}
	return maxLen;


}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int arr[1000000];
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		cout << solve(arr, n) << endl;
	}
	return 0;
}