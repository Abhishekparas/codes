#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int dp[n][n];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i ; ++j)
		{
			if (j == 0)
			{
				dp[i][j] = 1;
			}


			else if (i == j)
			{
				dp[i][j] = 1;
			}

			else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}

			cout << dp[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}