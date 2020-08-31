#include<bits/stdc++.h>
using namespace std;

void toh(int n, int tower1, int tower2, int tower3) {
	if (n == 0) {
		return;
	}
	toh(n - 1, tower1, tower3, tower2);
	cout << "Move " << n << " from " << tower1 << "-> " << tower2 << endl;
	toh(n - 1, tower3, tower2, tower1);
}

int main(int argc, char const *argv[])
{
	int n;
	int disk1;
	int disk2;
	int disk3;
	cin >> n >> disk1 >> disk2 >> disk3;
	toh(n, disk1, disk2, disk3);
	return 0;
}