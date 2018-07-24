//Advanced Calculator
//Computer Fundamentals and Programming
//Professor Nazrfrd
//Saleh Khazayi~Ehsan Mokhtari~Shirin Shirazi
//arya varaste

# include <iostream>
# include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

int main() {
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);  //Color for text
	float result;
	float a[100];
	char b;
	int flag = 0;


	SetConsoleTextAttribute(hstdout, 0xc + 0 * 1); //Color for text
	cout << "  ++++++        ++          ++ \n";
	cout << "++      ++      ++          ++\n";
	cout << "++          ++++++++++  ++++++++++\n";
	cout << "++              ++          ++\n";
	cout << "++      ++      ++          ++\n";
	cout << "  ++++++\n\n\n";
	SetConsoleTextAttribute(hstdout, 0x2 + 12 *6); //Color for text
	cout << " (~~~~~~~ Advanced Calculator ~~~~~~~)\n" << "\n";

	for (int i = 1; i < 100; i++) {

		if (i == 1) {
			for (int i = 0; i < 1; i++)
			{
			
				SetConsoleTextAttribute(hstdout, 0xf + 5 * 3); //Color for text
				std::cout << "Please enter a numbre :";
				SetConsoleTextAttribute(hstdout, 0x6 + 5 * 8); //Color for text
				std::cout << "\n";
			}  // end for
			//	cout << "Please enter a numbre :";  //  If we want not be colored
			cin >> result;
			i += 1;
		}  // end if
		do {
			do {
				system("cls");


				SetConsoleTextAttribute(hstdout, 0xc + 0 * 1); //Color for text
				cout << "  ++++++        ++          ++ \n";
				cout << "++      ++      ++          ++\n";
				cout << "++          ++++++++++  ++++++++++\n";
				cout << "++              ++          ++\n";
				cout << "++      ++      ++          ++\n";
				cout << "  ++++++\n\n\n";
				SetConsoleTextAttribute(hstdout, 0x2 + 12 * 6); //Color for text
				cout << " (~~~~~~~ Advanced Calculator ~~~~~~~)\n" << "\n";
				SetConsoleTextAttribute(hstdout, 0xa + 4 * 8); //Color for text


				std::cout << "result is :  " << result << endl;
				cout << "\n";
				SetConsoleTextAttribute(hstdout, 0x2 + 7 * 3); //Color for text
				std::cout << "Enter Operator: ";
				//cout << "result is :  " << result << endl;  //  If we want not be colored
				//cout << "Enter Operator: ";  //  If we want not be colored
				cin >> b;
			} while (b != 'c'&& b != '+'&& b != 'm'&& b != 'n'&& b != '-'&& b != '*'&& b != '/'&& b != 'o'&& b != 's'&& b != 'r'&&b != 'q'&& b != 'p'&& b != '\\');
			// To determine cases
			flag = 3;

		} while (flag == 2);
		switch (b) {
		case 'r':  //To reset inputs
			system("cls");
			continue;
		case 's':  //To calculate sin
			result = sin(3.14 / (180 / result)); // To convert radians to degrees
			continue;
		case 'o':  //To calculate cos
			result = cos(3.14 / (180 / result));  // To convert radians to degrees
			continue;
		case 'm':  //To calculate tan
			result = 3.14 / (180 / result);  // To convert radians to degrees
			result = tan(result);
			continue;
		case 'n':  //To calculate cot
			result = 3.14 / (180 / result);  // To convert radians to degrees
			result = 1 / (tan(result));
			continue;
		}  //end switch
		if (b == 'c') break;


		system("cls");
		SetConsoleTextAttribute(hstdout, 0xe + 5 * 7); //Color for text
		std::cout << "Last result= " << result << " " << b << endl;
		SetConsoleTextAttribute(hstdout, 0xb + 9 * 2); //Color for text
		std::cout << "Enter Number:";

		//cout << "Last result= " << result << " " << b << endl;  //  If we want not be colored
		//cout << "Enter Number:";  //  If we want not be colored

		cin >> a[i];

		switch (b) {
		case '+':
			result += a[i]; break;
		case '-':
			result -= a[i]; break;
		case '*':
			result *= a[i]; break;
		case '/':
			if (a[i] == 0) {
				SetConsoleTextAttribute(hstdout, 0x4 + 1 * 6); //Color for text
				std::cout << "Division by zero";

				//	cout << "Division by zero";  //  If we want not be colored
				break;
			}
			else {
				result /= a[i]; break;
			}
		case 'p':  //To calculate pawer
			result = pow(result, a[i]); break;
		case 'q':  //To calculate 1/pawer = sqrt
			result = pow(result, 1 / a[i]); break;

		}//end switch

	}//end for

	return 0;
}//end main

