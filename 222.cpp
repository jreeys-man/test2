#include <bits/stdc++.h>
using namespace std;

int f(int n) {
	if (n == 0)
		return 1;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += f(i) * f(n - i - 1);
	}
	return ans;
}
//递归
//---------------------
int A(int x, int y) {
	int sum = 1;
	for (int i = y; i > y - x; i--)
		sum *= i;
	return sum;
}

int C(int x, int y) {
	return A(x, y) / A(x, x);
}

//递推
//-----------------------
int main() {
	int n;
	cin >> n;
	cout << C(n, 2 * n) / (n + 1)<<"递推做法\n";
	cout << f(n) << "递归做法"; 
}
