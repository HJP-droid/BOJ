#include<iostream>
#include<vector>

using namespace std;


int N, M, tmp, mid;
vector<int> v;

int main() {

	cin >> N >> M;

	for (int t = 0;t < N;t++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	int startV = 0;
	int endV = 1000000003;
	int sumV = 0;
	int cnt = 0;
	while (endV-startV>1) {
		mid = (startV + endV)/2;
		for (int t = 0;t<N;t++) {
			if (sumV > mid) {
				cnt = M+1;
				break;
			}
			sumV += v.at(t);
			if (sumV>mid) {
				cnt++;
				sumV = v.at(t);
			}
		}
		if (cnt >= M) {
			startV = mid;
		}
		else {
			endV = mid;
		}
		cnt = 0;
		sumV = 0;
	}
	cout << endV;
	return 0;
}