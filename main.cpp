#include<iostream>

using namespace std;

int main() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;

	if (x == a && y != b) {
		cout << x + (y - b)  << ' ' << y << ' ' << x + (y - b) << ' ' << b;
	}
	else if (y == b && x != a) {
		cout << x << ' ' << y + (x - a) << ' ' << a << ' ' << y + (x - a);
	}
	else if (x != a && y != b && ((x - a) == (y - b) || (x - a) == (b - y))){
		cout << x << ' ' << b << ' ' << a << ' ' << y;
	}
	else cout << -1;
}
