// 2745. 진법 변환

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Pow(int input, int exp);

int main()
{
	// nota : input notation
	// dec : result
	int nota, dec = 0;
	string input;

	cin >> input >> nota;

	reverse(input.begin(), input.end());
	
	for (int i=0; i<input.length(); i++)
	{
		int buffer = 0;
		if ( (int)input[i] >= 65 ) {
			buffer = (int)input[i] - 55;
		}
		else {
			buffer = input[i] - '0';
		}
		dec += Pow(nota, i) * buffer;
	}
	cout << dec << endl;

	return 0;
}


int Pow(int input, int exp) {
    int result = 1;

    if (exp == 0) {
        result = 1;
    }
    else {
        for (int i=0; i<exp; i++)
        {
            result *= input;
        }
    }

    return result;
}
