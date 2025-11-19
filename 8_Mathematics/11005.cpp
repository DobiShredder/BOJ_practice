// 11005. 진법 변환 2

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string num_convert(int input, int nota);

int main()
{
	int input, nota;
	string result;
	cin >> input >> nota;

	result = num_convert(input, nota);

	cout << result << endl;

	return 0;	
}

string num_convert(int input, int nota) {
	string result;
	int val;
	char c_val;

	while (input > 0) {
		val = input % nota;
		if ( val >= 10 ) {
			c_val = (char)(val + 55);
			result.push_back(c_val);
		}
		else {
			c_val = (char)(val + 48);
			result.push_back(c_val);
		}
		input = input / nota;
	}

	reverse(result.begin(), result.end());
	return result;
}
