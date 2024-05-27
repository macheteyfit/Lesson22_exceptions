#include <iostream>
#include <vector>
#include <stdexcept>


using namespace std;

class Exception
{
public:
	string what;
	string place;
	Exception(string whatP, string placeP) :
		what{ whatP }, place{ placeP } {}
	Exception() : Exception("Error", "Somethre") {}
	void print() {
		cerr << what << " " << place << "\n";
	}
};

void devideByZero() {
	throw "devide by zero\n";
}

void accessArray() {
	throw "Index out of bounds\n";
}
double devide(double x, double y) {
	if (y == 0) throw Exception("Devide by 0", "devide:23");
	return x / y;
}




int main() {
	setlocale(LC_ALL, "RUS");

	//try {
	//	double number1, number2;
	//	cin >> number1;  //0
	//	cin >> number2;
	//	cout << devide(number1, number2);
	//	cout << endl;
	//}
	//catch (Exception ex) {
	//	ex.print();
	//}

	//try {
	//	vector<char> vec;
	//	vec.push_back('a');
	//	vec.push_back('b');
	//	int index; //3
	//	cin >> index;
	//	if (index < 0 || index >= vec.size()) 
	//		throw Exception("Index out of bounds", "main:45");
	//	cout << vec[index];
	//	}
	//catch (Exception ex) {
	//	ex.print();
	//}
	//cout << endl;
	try {
		vector<char> vec;
		vec.push_back('a');
		vec.push_back('b');
		int index; //3
		cin >> index;
		//cout << vec[index];
		cout << vec.at(index);
	}
	catch (const out_of_range ex) {
		cout << ex.what() << "\n";
	}
	catch (...) {
		cout << "Exception caught" << "\n";
	}

	/*try {
		int number;
		cin >> number;
		if (number > 10)
			devideByZero();
		else
			accessArray();
	}
	catch (const char* text) {
		cout << "Exception: " << text;
	}*/
	
		/*int number;
		cout << "Enter number: ";
		cin >> number;
		if (number == 0) {
			cout << "Before throw number\n";
			throw number;
		}
		char symbol;
		cout << "Enter symbol: ";
		cin >> symbol;
		if (symbol == 'a') {
			cout << "Before throw symbol\n";
			throw symbol;
		}
	}
	catch (int x) {
		cout << "int exception " << x << "\n";
	}
	catch (char x) {
		cout << " char exception " << x << "\n";
	}
	cout << "After try/catch\n";
	int number;
	cin >> number;
	if (number != 0) {
		cout << 6.0 / number;
	}
	else {
		cout << 0;
	}

	int arr[5] = { 5,6,8,9,10 };
	cin >> number;
	cout << arr[number] << "\n";

	try {
		cin >> number;
		if (number == 0) throw 0;
		cout << 6 / number << "\n";


		int arr[5] = { 5,6,8,9,10 };
		cin >> number;
		if (number < 0 || 0 > number) throw 0;
		cout << arr[number] << "\n";

		catch () {
			cout << "Exception\n" << endl;
		}*/
	}