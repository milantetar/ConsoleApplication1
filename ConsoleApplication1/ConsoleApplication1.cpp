#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include "ConsoleApplication1.h"

int main() {
	// Output a simple message
	double x = (int)3.14;
	std::cout << "The value of x is: " << x << '\n';

	char y = 100;  // 300 overflows char (usually 1 byte)
	std::cout << "The value of y is: " << y << '\n';

	int corrects = 8;
	int questions = 10;
	double score = corrects / (double)questions * 100.0;
	std::cout << "The score is: " << score << "%" << '\n';

	// Using std::cin to read a string input
	std::string name;
	std::cout << "Enter your name: " << '\n';
	std::getline(std::cin >> std::ws, name);
	std::cout << "Hello, " << name << "!\n";

	// Using std::cin to read an integer input
	int age;
	std::cout << "Enter your age: \n";
	std::cin >> age;
	std::cout << "You are " << age << " years old.\n";

	// Using std::getline to read a full line including spaces
	std::string quote;
	std::cout << "Enter your favorite quote: " << '\n';
	std::getline(std::cin >> std::ws, quote);
	std::cout << "Your favorite quote is: " << quote << '\n';

	// Find max of two numbers
	double a = 3;
	double b = 4;
	double z = std::max(a, b);
	double now = std::max({ a, b, 5.0 }); // Using initializer list for max
	std::cout << "The maximum value is: " << z << '\n';
	std::cout << "The maximum value using initializer list is: " << now << '\n';
	z = pow(a, 2) + pow(b, 2);
	std::cout << "The sum of squares is: " << z << '\n';
	z = sqrt(4761);
	std::cout << "The square root of 4761 is: " << z << '\n'; // Output: 69
	z = pow(3, 4);
	std::cout << "3 raised to the power of 4 is: " << z << '\n'; // Output: 81

	// Calculate the hypotenuse of a right triangle
	double a1;
	double b1;
	double c1;

	std::cout << "enter side A: " << '\n';
	std::cin >> a1;
	std::cout << "enter side B: " << '\n';
	std::cin >> b1;

	a = pow(a1, 2);
	b = pow(b1, 2);
	c1 = sqrt(a + b);

	std::cout << "side c :" << c1 << '\n';

	// if statement example
	;

	std::cout << "Enter your age" << '\n';
	std::cin >> age;
	if (age >= 18)
	{
		std::cout << "welcome to the site" << '\n';
	}

	else if (age < 0)
	{
		std::cout << "you existence is a joke" << '\n';
	}
	else
	{
		std::cout << "you are not allowed to enter the site" << '\n';
	}


	// Switch statement example to determine the month name
	int month;
	std::cout << "Enter a month number (1-12): " << '\n';
	std::cin >> month;

	switch (month) {
	case 1:
		std::cout << "it is January" << '\n';
		break;
	case 2:
		std::cout << "it is February" << '\n';
		break;
	case 3:
		std::cout << "it is March" << '\n';
		break;
	case 4:
		std::cout << "it is April" << '\n';
		break;
	case 5:
		std::cout << "it is May" << '\n';
		break;
	case 6:
		std::cout << "it is June" << '\n';
		break;
	case 7:
		std::cout << "it is July" << '\n';
		break;
	case 8:
		std::cout << "it is August" << '\n';
		break;
	case 9:
		std::cout << "it is September" << '\n';
		break;
	case 10:
		std::cout << "it is October" << '\n';
		break;
	case 11:
		std::cout << "it is November" << '\n';
		break;
	case 12:
		std::cout << "it is December" << '\n';
		break;
	default:
		std::cout << "Invalid month number. Please enter a number between 1 and 12." << '\n';
		break;

	}


	//another switch statement example to determine the grade of students
    char grade1 = '\0'; // Initialize grade1 to a default value
	std::cout << "Enter your grade: " << '\n';
	std::cin >> grade1;
	switch (grade1) {
	case 'A':
		std::cout << "great'\n'";
		break;
	case 'B':
		std::cout << "Excellent!" << '\n';
		break;
	case 'C':
		std::cout << "Very Good!" << '\n';
		break;
	case 'D':
		std::cout << "Good!" << '\n';
		break;
	case 'F':
		std::cout << "You failed!" << '\n';
		break;
	default:
		std::cout << "Invalid grade. Please enter a valid grade (A, B, C, D, F)." << '\n';
		break;
	}

	//making a simple calculator using switch statement

	char op;
	double num1, num2;
	double result;

	std::cout << "***************  CALCULATOR  ****************" << '\n';

	std::cout << "Enter either(+ - * /)" << '\n';
	std::cin >> op;
	std::cout << "Enter #1 " << '\n';
	std::cin >> num1;
	std::cout << "Enter #2 " << '\n';
	std::cin >> num2;

	switch (op)
	{
	case '+':
		result = num1 + num2;
		std::cout << "The result is: " << result << '\n';
		break;
	case '-':
		result = num1 - num2;
		std::cout << "The result is: " << result << '\n';
		break;
	case '*':
		result = num1 * num2;
		std::cout << "The result is: " << result << '\n';
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			std::cout << "The result is: " << result << '\n';
		}
		else {
			std::cout << "Error: Division by zero is not allowed." << '\n';
		}
		break;
	case '%':
		if (num2 != 0) {
			result = static_cast<int>(num1) % static_cast<int>(num2);
			std::cout << "The result is: " << result << '\n';
		}
		else {
			std::cout << "Error: Division by zero is not allowed." << '\n';
		}
		break;
	case '^':
		result = pow(num1, num2);
		std::cout << "The result is: " << result << '\n';
		break;
	case 's': // square root operation
		if (num1 >= 0) {
			result = sqrt(num1);
			std::cout << "The square root of " << num1 << " is: " << result << '\n';
		}
		else {
			std::cout << "Error: Cannot calculate the square root of a negative number." << '\n';
		}
		break;
	default:
		std::cout << "Invalid operator. Please enter one of the following: +, -, *." << '\n';
		break;
	}
	std::cout << "********************************************" << '\n';
	
	//program to make a marks grade calculator using ternary operator
	double grade;
	std::cout << "Enter your marks: " << '\n';
	std::cin >> grade;
	(grade >= 90 ? std::cout << "your grade is A" :
		(grade >= 80 ? std::cout << "your grade is B" :
			(grade >= 70 ? std::cout << "your grade is C" :
				(grade >= 60 ? std::cout << "your grade is D" :
					std::cout << "you failed")))) << '\n';
	

	// Program to check if a number is even or odd using the ternary operator
	int number;
	std::cout << " Enter a number: " << '\n';
	std::cin >> number;

	(number == 0 ? std::cout << "The number is zero." << '\n' :
		(number % 2 == 0 ? std::cout << "The number is even." << '\n' : std::cout << "The number is odd." << '\n'));


	// program to check if a number is positive, negative, or zero using the ternary operator
	int num;
	std::cout << "Enter a number: " << '\n';
	std::cin >> num;
	(num>0? std::cout << "The number is positive." << '\n' :
		(num < 0 ? std::cout << "The number is negative." << '\n' : std::cout << "The number is zero." << '\n'));

	//program to convert temperature from Celsius to Fahrenheit using the switch statement
	double Temp;
	char unit;
	std::cout << "********************** Temperature conversion ***********************" << '\n';
	std::cout << " F = Fahrenheit," << '\n' << " C = Celsius" << '\n';
	std::cout << "Enter the temperature unit (F or C): " << '\n';
	std::cin >> unit;
	std::cout << "What unit would you like to convert to :";
	
	if(unit == 'C' || unit == 'c') {
		std::cout << "Enter temperature in Celsius: " << '\n';
		std::cin >> Temp;
		Temp = (Temp * 9.0 / 5.0) + 32.0;
		std::cout << "Temperature in Fahrenheit: " << Temp << "\u00B0F" << '\n';
	}
	else if (unit == 'F' || unit == 'f') {
		std::cout << "Enter temperature in Fahrenheit: " << '\n';
		std::cin >> Temp;
		Temp = (Temp - 32.0) * 5.0 / 9.0;
		std::cout << "Temperature in Celsius: " << Temp << "\u00B0C" << '\n';
	}
	else
	{
		std::cout << "Invalid unit Please Enter C or F.";
	}
	std::cout << "*********************************************************************" << '\n';

	

	// Program to check if a number is even or odd using the ternary operator
	int number1;
	std::cout << " Enter a number: " << '\n';
	std::cin >> number1;

	(number == 0 ? std::cout << "The number is zero." << '\n' :
		(number % 2 == 0 ? std::cout << "The number is even." << '\n' : std::cout << "The number is odd." << '\n'));

	//program to compress a string using a simple compression algorithm
	
	std::string inputString;
	std::cout << "Enter a string to compress: " << '\n';
	std::getline(std::cin, inputString);

	int count = 1;
	
	for (size_t i = 1; i < inputString.length(); ++i)
	{
		if(inputString[i] == inputString[i - 1]) {
			count++;
		} else {
			std::cout << inputString[i - 1] << count;
			count = 1; // Reset count for the next character
		}
	}
	if (count > 0) {
		std::cout << inputString.back() << count; // Output the last character and its count
	}
	std::cout << '\n';

	std::cout << "String compression complete." << '\n';

	// Program to check if a number is prime or not

	int numToCheck;	
	std::cout << "Enter a number to check if it is prime: " << '\n';
	std::cin >> numToCheck;
	bool isPrime = true;
	for (int i = 2; i <= sqrt(numToCheck); ++i) {
		if (numToCheck % i == 0) {
			isPrime = false;
			break;
		}
	}

	return 0;
	
}

