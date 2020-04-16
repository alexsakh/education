#include <iostream>
#include <locale.h>

int programming_3() {
	using namespace std;
	setlocale(LC_ALL, "RUS");


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
	const double pokg = 2.2;
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

	cout << "#Exercise 4#" << endl;
	//const int secinmin = 60;
	const int mininhour = 60;
	const int hourinday = 24;
	const int dayinyear = 365;
	cout << "Enter the number of seconds: ____________\b\b\b\b\b\b\b\b\b\b\b\b";
	long long total_sec;
	cin >> total_sec;
	long long ResDays = total_sec / long long (secinmin * mininhour * hourinday);
	long long RedSec = total_sec % long long(secinmin * mininhour * hourinday);
	long long ResHours = RedSec / long long(secinmin * mininhour);
	RedSec = RedSec % long long(secinmin * mininhour);
	long long ResMins = RedSec / secinmin;
	RedSec = RedSec % secinmin;
	cout << total_sec << " seconds = " << ResDays << " days, "
		<< ResHours << " hours, " << ResMins << " minutes, " << RedSec << " seconds";

	cout << "#Exercise 5#" << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(5);
	cout << "Enter the worlds's population: ________\b\b\b\b\b\b\b\b";
	long long WorPop, CouPop;
	cin >> WorPop;
	cout << "Enter the population of the your country: ________\b\b\b\b\b\b\b\b";
	cin >> CouPop;
	long double PerPop = CouPop * 100 / long double (WorPop);
	cout << "The population of the your country is " << PerPop << "% of the world population." << endl;

	cout << "#Exercise 6#" << endl;
	cout << "¬ведите количество миль пройденных автомобилем: ____\b\b\b\b";
	double CountMile, CountGal;
	cin >> CountMile;
	cout << "¬ведите количество галлонов израсходованного бензина: ____\b\b\b\b";
	cin >> CountGal;
	cout << "»того, количество миль на галлон: " << CountMile / CountGal << endl;

	cout << "#Exercise 7#" << endl;
	cout << "¬ведите расход бензина, л /100 км: ____\b\b\b\b";
	const double galL = 3.875;
	const double mileKm = 0.6214;
	double CountL;
	cin >> CountL;
	cout << "»того, число миль на галлон: " << 100*galL*mileKm/CountL << endl;

	return 0;
}