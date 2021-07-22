#include <iostream>
#include <cmath> //header that declares a set of mathematic functions
using namespace std;

int main()
{
	// Variable Decleration
	double a, b, c, x1, x2;
	double discriminant, real, imaginary;


	//Header
	cout << "==================================================================== \n";
	cout << "Quadratic Formula Calculator \n";
	cout << "Long Beach City College \n";
	cout << "Author: Douglas Lopez \n";
	cout << "Oct. 14, 2018 \n";
	cout << "==================================================================== \n";

	//Input Instructions can be entered with spaces
	cout << "This program will provide solutions for the quadratic equation: \n"<< endl;
	cout << "                 ax^2 + bx + c = 0                           \n"<< endl;
	cout << "Where A, B and C are integers, and A is not equal to zero. \n" << endl;
	cout << "Enter A, B and C :";

	//Take user input 
	cin >> a >> b >> c;
	cout.precision(4);
	cin.ignore(128, '\n');
	discriminant = b * b - 4.0 * a*c;
	

	//Processing
	if (a == 0) {  //If user does not follow instruction operation halts and error message dissplays
		cout << "No solutions will be calculated for a leading coefficient of 0! \n" << endl;
	}



	else {
		if (discriminant > 0)
		{
			x1 = (-b + sqrt(discriminant)) / (2.0 * a);
			x2 = (-b - sqrt(discriminant)) / (2.0 * a);
			cout << "The two real solutions are    x1=  " << std::scientific << x1 << endl << endl;
			cout << "                       and    x2= " << std::scientific << x2 << endl << endl;
		}

		//If there is only one solution
		if (discriminant == 0)
		{
			cout << "The one real solution is   ";
			x1 = (-b + sqrt(discriminant)) / (2.0 * a);
			cout << "       x= " << std::scientific << x1 << endl << endl;
		}

		//if the result is an imaginary number 
		if (discriminant < 0)
		{
			real = -b / (2.0*a);
			imaginary = sqrt(-discriminant) / (2.0*a);
			cout << " The two imaginary solutions are    x1= " << std::scientific << real << " + (" << imaginary << ")*i\n" <<endl;
			cout << "                             and    x2= " << std::scientific << real << " - (" << imaginary << ")*i\n" << endl;
		}
	}

	//Output
	cout << "Press ENTER to terminate...\n" << endl;
	cout << "====================================================================\n";

	cin.get();
	return 0;
}