// 2720. 세탁소 사장 동혁

#include <iostream>
#include <vector>

using namespace std;

vector<int> changes(int input);

int main()
{
	int n, input = 0;
	vector<int> list_changes(4, 0);

	cin >> n;

	for (int i=0; i<n; i++)	{
		cin >> input;
		list_changes = changes(input);
		for (int j=0; j<list_changes.size(); j++) {
			cout << list_changes[j] << " ";
		}
		cout << endl;
	}
	return 0;
}

vector<int> changes(int input) {
	vector<int> result(4, 0);
	vector<int> list_change( { 25, 10, 5, 1 } );
	int buffer = 0;
	int i = 0;
	while (input > 0) {
		buffer = input / list_change[i];
		result[i] = buffer;
		input = input % list_change[i];
		i++;
	}

	return result;
}
