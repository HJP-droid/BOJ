#include <iostream>
#include <queue>
#include <cmath>

using namespace std;


queue<int> ans;

int T, x1, y_1, r1, x2, y2, r2, tmp;
int superX, superY, superRp, superRm;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y_1 >> r1 >> x2 >> y2 >> r2;
		superX = (x1 - x2) * (x1 - x2);
		superY = (y_1 - y2) * (y_1 - y2);
		superRp = (r1 + r2) * (r1 + r2);
		superRm = (r1 - r2) * (r1 - r2);
		if ((x1 == x2) && (y_1 == y2) && (r1 == r2)) {
			ans.push(-1);
			continue;
		}
		else if (superX + superY > superRp) {
			ans.push(0);
		}
		else if (superX + superY == superRp) {
			ans.push(1);
		}
		else if ((superRm < superX + superY) && (superX + superY < superRp)) {
			ans.push(2);
		}
		else if (superX + superY == superRm) {
			ans.push(1);
		}
		else if (superX + superY < superRm) {
			ans.push(0);
		}

	}

	for (int i = 0; i < T; i++) {
		tmp = ans.front();
		ans.pop();
		cout << tmp;
		if (i != T - 1)
			cout << "\n";
	}

	return 0;
}