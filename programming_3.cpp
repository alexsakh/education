#include <iostream>

int main() {
	using namespace std;


	cout << "#Exercise 1#" << endl;
	const int in = 12;
	cout << "enter your height in inches: ____\b\b\b\b";
	double height;
	cin >> height;
	double heightinft = height / in;
	cout << "Your height " << height << " inches. " << endl <<
		"Your height " << heightinft << " foots" << endl << endl;

	cout << "#Exercise 2#" << endl;
	const double inme = 0.0254;
	const float pokg = 2.2;
	cout << "enter your weights in pounds: ____\b\b\b\b";
	double weights;
	cin >> weights;
	height = height * inme; //преобразование роста из дюймов в метры
	weights = weights / pokg; //преобразование веса из фунтов в килограммы
	double bmi = weights / (height * height);
	cout << "Your body mass index: " << bmi << endl << endl;

	cout << "#Exercise 3#" << endl;
	const int secinmin = 60;
	const int minindeg = 60;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl <<
		"First, enter the degress: __\b\b";
	int deg;
	cin >> deg;
	cout << "Next enter the minutes of arc: __\b\b";
	int min;
	cin >> min;
	cout << "Finally, enter the seconds of arc: __\b\b";
	int sec;
	cin >> sec;
	double findeg = deg + double((min + double(sec / double(secinmin))) / minindeg);
	cout << deg << " degress, " << min << " minutes, " << sec << " seconds = " <<
		findeg << " degress" << endl;

	return 0;
}