#include <iostream>

int selfcontrol_3() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);


	cout << "#answer 2 #" << endl;
	short var1 = 80;
	unsigned int var2 = 42.110f;
	double var3 = 3e9;

	cout << var1 << endl;
	cout << var2 << endl;
	cout << var3 << endl;
	cout << endl;

	cout << "#answer 6 #" << endl;
	char ch = 88;
	cout << static_cast<char>(ch) << endl;
	cout << char(ch) << endl;
	cout << (char)ch << endl;

	cout << "#answer 8 #" << endl;
	int n1 = 3;
	int n2 = 4;
	cout << 8 * 9 + 2 << endl;
	cout << 6 * n1 / n2 << endl;
	cout << n1 / n2 * 6 << endl;
	cout << 6.0f * n1 / n2 << endl;
	cout << 15 % n2 << endl;

	return 0;
}