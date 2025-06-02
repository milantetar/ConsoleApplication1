#include <iostream>
using namespace std;

int main()
{ 
	// This program demonstrates the use of variables and input/output in C++
	double var1; // Double variable declaration
	double var2; // Another double variable declaration

	cout << "Enter Var 1 :"  << endl; // Output an empty line
	cin >> var1; // Input for var1
	cout << "Enter Var 2 :" << endl; // Output an empty line	
	cin >> var2; // Input for var2s
	
	double sum;// Declare a variable to hold the sum of var1 and var2
	sum = var1 + var2; // Calculate the sum of var1 and var2
	double difference; // Declare a variable to hold the difference of var1 and var2
	difference = var1 - var2; // Calculate the difference between var1 and var2

	cout << "The sum of Var 1 and Var 2 is: " << sum << endl; // Output the sum of var1 and var2
	cout << "The difference of Var 1 and Var 2 is: " << difference << endl; // Output the difference of var1 and var2	
	cout << "The product of Var 1 and Var 2 is: " << var1 * var2 << endl; // Output the product of var1 and var2
	cout << "The quotient of Var 1 and Var 2 is: " << var1 / var2 << endl; // Output the quotient of var1 and var2
	cout << "The modulus of Var 1 and Var 2 is: " << static_cast<int>(var1) % static_cast<int>(var2) << endl; // Output the modulus of var1 and var2
	cout << "The square of Var 1 is: " << var1 * var1 << endl; // Output the square of var1
	return 0;

}