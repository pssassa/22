#include <iostream>
#include <fstream>
using namespace std;

void prog(istream& in) {
	double arr[1000];
	double sum, max, c, num, count;
	sum = 0;
	count = 1;
	max = 0;
	c = 0;
	num = 0;
	if (in.eof()) {
		in >> num;
		if (num < 51) {
			sum = sum + num;
		}
		else {
			arr[count] = num;
			count++;
		}
	}
	count--;
	for (int i = 1; i < count - 1; i++) {
		for (int j = 1; j < count - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				c = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (int i = 1; i < count; i++) {
		if (i <= count / 2) {
			sum = sum + arr[i] * 0.75;
			max = (arr[i]);
		}
		else {
			sum = sum + arr[i];
		}
	}
	cout << sum << " " << max;
}

int main() {
	
	
	ifstream in("text1.txt");
	if (!in.eof("text1.txt")) {
		cout << "file dont opened"
	}
	else
		prog(in);

}