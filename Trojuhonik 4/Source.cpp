#include <iostream>
using namespace std;

int main()
{
	string a = "*";
	int vyska;
	cout << "zadaj vysku trojuholnika" << endl;
	cin >> vyska;
	for (int i = vyska; i >= 1; --i) {
		for (int j = 1; j <= i; ) {
			cout << a;
			j++;

		}
		cout << endl;
	}





}