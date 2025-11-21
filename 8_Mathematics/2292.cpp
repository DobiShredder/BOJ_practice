// 2292. 벌집

#include <iostream>
using namespace std;

int hex_dist(int input);

int main()
{
	int input;
	cin >> input;

	cout << hex_dist(input) << endl;

	return 0;
}

int hex_dist(int input) {
	int dist = 1;
	if ( input == 1 ) {
		return dist;
	}
	else {
		input = input - 1;
		while (input > 0) {
			input = input - (6 * dist);
			dist++;
			}
		return dist;
	}
	
}
