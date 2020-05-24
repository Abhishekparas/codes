#include<bits/stdc++.h>
using namespace std;

#define pb push_back

bool sortbysec(pair<int, int> a, pair<int, int> b)
{
	return (a.second < b.second);
}

int solve(vector<pair<int, int> > v) {
	sort(v.begin(), v.end(), sortbysec);

	int count = 1;
	int x = v[0].second;
	for (int i = 1; i < v.size(); ++i)
	{
		if (v[i].first >= x) {
			count++;
			x = v[i].second;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	std::vector<pair<int, int> > v;
	while (t--) {
		int n;
		cin >> n;
		while (n--) {
			int a, b;
			cin >> a >> b;
			v.pb(make_pair(a, b));
		}
		cout << solve(v) << endl;
		v.clear();
	}
	return 0;
}
