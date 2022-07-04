#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto vec = vector<int>(3, 0);
	for (auto i = 0; i < 3; ++i) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	string x;
	cin >> x;

	cout << vec[x[0] - 'A'] << ' '
		<< vec[x[1] - 'A'] << ' '
		<< vec[x[2] - 'A'];

	return 0;
}