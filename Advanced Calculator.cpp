#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main() {

	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Color for text
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);	//Color for text

	int num = 0;
	int word = 0;
	int sl;
	int s;

	bool flag1 = true;

	char harf[3000];
	char string[3000];

	double adad[3000];

	SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text
	cout << "Please enter an expression:" << endl;

	SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text
	cin.getline(string, 3000);//gereftan reshte postfix
	sl = strlen(string);//mohasebe tole reshte
	while (flag1) {		//flag1 = true

		for (int i = 0; i < sl; i++) {
			if (string[i] != ' ') {

				harf[word] = string[i];
				word++;
				if (i + 1 < sl) {

					continue;
				}
			}
			harf[word] = '\0';
			word = 0;
			if (strlen(harf) == 1 && !(harf[0] >= '0'&&harf[0] <= '9')) {

				switch (harf[0]) {

				case'+': {

					adad[num - 2] = adad[num - 2] + adad[num - 1];
					num--;
					continue;
				}//end case +
				case'-': {

					adad[num - 2] = adad[num - 2] - adad[num - 1];
					num--;
					continue;
				}//end case -
				case'*': {

					adad[num - 2] = adad[num - 2] * adad[num - 1];
					num--;
					continue;
				}//end case *
				case'/': {

					if (adad[num - 1] == 0) {

						SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
						cout << "devision by ZERO!\n";
						system("pause");
						return 0;
					}//end if
					else {

						adad[num - 2] = adad[num - 2] / adad[num - 1];
						num--;
						continue;
					}
				}//end case /
				}//end switch
			}//end if
			else if (harf[0] >= '0'&&harf[0] <= '9')//agar amalgar nadashtim
			{
				adad[num] = atof(harf);
				num++;
			}

		}//end for
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text
		cout << "result is : \n\n";
		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text
		cout << adad[0] << endl;
		SetConsoleTextAttribute(hstdout, 0x0a);		//Color for text
		/*cout << "\nWould you like to enter another value? \n\n";
		SetConsoleTextAttribute(hstdout, 0x09);		//Color for text
		cout << "if yes prees 1 \n ";
		SetConsoleTextAttribute(hstdout, 0x0c);		//Color for text
		cout << "if no press 2 \n";

		SetConsoleTextAttribute(hstdout, 0x0e);		//Color for text
		cin >> s;

		if (s = 1) {
			//????????
		}

		if (s = 2) {
			//????????
		}*/
		flag1 = false;
	}//end while
	system("pause");
	return 0;
}//end main




















