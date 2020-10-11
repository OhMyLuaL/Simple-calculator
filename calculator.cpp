#include <iostream>
#include <cmath>

using namespace std;


int main()

{
	int  N, a1, a2;
	cout << "Action numbers" << endl;
	cout << "1. + " << endl;
	cout << "2. - " << endl;
	cout << "3. * " << endl;
	cout << "4. / " << endl;
	cout << "5. EXP " << endl;
	cout << "Enter the first number: " << endl;
	cin >> a1;
	cout << "Enter the second number: " << endl;
	cin >> a2;
	cout << "Action number: " << endl;
	N = 1, 2, 3, 4,5;
	cin >> N;
	switch (N)
	{
	case 1:
		(a1 + a2);
		cout << "Addition = " << a1 + a2 << endl;
		break;
	case 2:
		(a1 - a2);
		cout << "Subtraction = " << a1 - a2 << endl;
		break;
	case 3:
		(a1 * a2);
		cout << "Multiplication = " << a1 * a2 << endl;
		break;
	case 4:
		(a1 / a2);
		cout << "Division = " << a1 / a2 << endl;
		break;
	case 5:
		(pow(a1, a2));
		cout << "Expanent = " << pow(a1, a2) << endl;
	default:
		cout << "Error! Invalid action." << endl;
		break;
	}
	return 0;

}