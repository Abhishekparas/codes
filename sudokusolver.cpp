#include <bits/stdc++.h>
using namespace std;

bool isSafe(int mat[][21], int i, int j, int n, int number) {

	for (int rc = 0; rc < n; ++rc)
	{
		if (mat[rc][j] == number or mat[i][rc] == number) {
			return false;
		}
	}

	int sqrn = sqrt(n);
	int sx = (i / sqrn) * sqrn;
	int sy = (j / sqrn) * sqrn;

	for (int x = sx; x < sx + sqrn; ++x)
	{
		for (int y = sy; y < sy + sqrn; ++y)
		{
			if (mat[x][y] == number) {
				return false;
			}
		}
	}

	return true;
}

bool solvesudoku(int arr[][21], int i, int j, int n) {
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		return true;

	}
	if (j == n) {
		return solvesudoku(arr, i + 1, 0, n);
	}

	if (arr[i][j] != 0) {
		return solvesudoku(arr, i, j + 1, n);
	}

	for (int number = 1; number <= n ; ++number)
	{
		if (isSafe(arr, i, j, n, number)) {
			arr[i][j] = number;

			bool isPossibleToSolve = solvesudoku(arr, i, j + 1, n);
			if (isPossibleToSolve == true) {
				return true;
			}
		}
	}
	arr[i][j] = 0;
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[21][21];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}
	solvesudoku(arr, 0, 0, n);
	return 0;
}