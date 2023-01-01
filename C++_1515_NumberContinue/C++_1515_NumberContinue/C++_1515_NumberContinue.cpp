#include<iostream>
#include<stdio.h>

using namespace std;

int Narr[30001][10];
int ans[10];

int main() {

	int temp1 = 0;
	int temp2 = 0;
	int cnt = 1;
	cin >> temp1;
	while (temp1) {
		ans[temp1 % 10]++;
		temp1 /= 10;
		cnt++;
	}
	cnt *= 10;
	for (int i = 1;i < cnt;i++) {
		temp2=i;
		for (int j = 0; j < 10;j++)
			Narr[i][j] = Narr[i-1][j];
		while (temp2) {
			Narr[i][temp2 % 10]++;
			temp2 /= 10;
		}
	}


	bool flag = true;

	for (int t = 0; t < cnt;t++) {
		for (int i = 0; i < 10;i++) {
			flag = false;
			if (Narr[t][i] < ans[i]) {
				flag = true;
				break;
			}
		}
		if (flag)
			continue;
		else {
			cout << t;
			return 0;
		}

	}

	return 0;
}