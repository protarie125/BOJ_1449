#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, l;
	cin >> n >> l;

	auto xs = vi(n);
	for (auto&& x : xs) {
		cin >> x;
	}

	sort(xs.begin(), xs.end());
	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		++ans;
		if (n - 1 == i) {
			break;
		}

		const auto b = xs[i];
		while (xs[i + 1] - b < l) {
			++i;
			if (n - 1 == i) {
				break;
			}
		}
	}
	
	cout << ans;

	return 0;
}