// 2903. 중앙 이동 알고리즘

#include <iostream>
using namespace std;

int rec_center(int n);

int main()
{
	int n = 0;
	cin >> n;
	cout << rec_center(n) << endl;
}

int rec_center(int n) {
	int pt = 2;
	for (int i=0; i<n; i++)	{
		pt = (pt * 2) - 1;
	}
	return pt * pt;
}
