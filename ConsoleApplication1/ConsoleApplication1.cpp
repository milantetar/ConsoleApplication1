#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int main() {
    //// Casting double to int
    //double x = (int)3.14;
    //std::cout << "The value of x is: " << x << '\n';

    //// Character overflow example
    //char y = 100;
    //std::cout << "The value of y is: " << y << '\n';

    //// Calculating percentage
    //int corrects = 8;
    //int questions = 10;
    //double score = corrects / (double)questions * 100.0;
    //std::cout << "The score is: " << score << "%\n";

    //// Reading name
    //std::string name;
    //std::cout << "Enter your name: ";
    //std::getline(std::cin >> std::ws, name);
    //std::cout << "Hello, " << name << "!\n";

    //// Reading age
    //int age;
    //std::cout << "Enter your age: ";
    //std::cin >> age;
    //std::cout << "You are " << age << " years old.\n";

    //// Reading a full quote
    //std::string quote;
    //std::cout << "Enter your favorite quote: ";
    //std::getline(std::cin >> std::ws, quote);
    //std::cout << "Your favorite quote is: " << quote << '\n';

    //// Max of two numbers
    //double a = 3, b = 4;
    //double z = std::max(a, b);
    //std::cout << "The maximum value is: " << z << '\n';
    //std::cout << "The maximum value using initializer list is: " << std::max({ a, b, 5.0 }) << '\n';
    //std::cout << "The sum of squares is: " << pow(a, 2) + pow(b, 2) << '\n';
    //std::cout << "The square root of 4761 is: " << sqrt(4761) << '\n';
    //std::cout << "3 raised to the power of 4 is: " << pow(3, 4) << '\n';

    //// Hypotenuse calculator
    //double a1, b1, c1;
    //std::cout << "Enter side A: ";
    //std::cin >> a1;
    //std::cout << "Enter side B: ";
    //std::cin >> b1;
    //c1 = sqrt(pow(a1, 2) + pow(b1, 2));
    //std::cout << "Side C: " << c1 << '\n';

    //// Age-based site access
    //std::cout << "Enter your age: ";
    //std::cin >> age;
    //if (age >= 18) {
    //    std::cout << "Welcome to the site.\n";
    //}
    //else if (age < 0) {
    //    std::cout << "Your existence is a joke.\n";
    //}
    //else {
    //    std::cout << "You are not allowed to enter the site.\n";
    //}

    //// Month switch statement
    //int month;
    //std::cout << "Enter a month number (1-12): ";
    //std::cin >> month;

    //switch (month) {
    //case 1:  std::cout << "It is January\n"; break;
    //case 2:  std::cout << "It is February\n"; break;
    //case 3:  std::cout << "It is March\n"; break;
    //case 4:  std::cout << "It is April\n"; break;
    //case 5:  std::cout << "It is May\n"; break;
    //case 6:  std::cout << "It is June\n"; break;
    //case 7:  std::cout << "It is July\n"; break;
    //case 8:  std::cout << "It is August\n"; break;
    //case 9:  std::cout << "It is September\n"; break;
    //case 10: std::cout << "It is October\n"; break;
    //case 11: std::cout << "It is November\n"; break;
    //case 12: std::cout << "It is December\n"; break;
    //default: std::cout << "Invalid month number.\n"; break;
    //}

    //// Grade switch
    //char grade1;
    //std::cout << "Enter your grade: ";
    //std::cin >> grade1;
    //switch (grade1) {
    //case 'A': std::cout << "Great!\n"; break;
    //case 'B': std::cout << "Excellent!\n"; break;
    //case 'C': std::cout << "Very Good!\n"; break;
    //case 'D': std::cout << "Good!\n"; break;
    //case 'F': std::cout << "You failed!\n"; break;
    //default: std::cout << "Invalid grade.\n"; break;
    //}

    //// Simple calculator
    //char op;
    //double num1, num2, result;
    //std::cout << "***************  CALCULATOR  ****************\n";
    //std::cout << "Enter operator (+ - * / % ^ s): ";
    //std::cin >> op;

    //if (op == 's') {
    //    std::cout << "Enter number: ";
    //    std::cin >> num1;
    //    result = sqrt(num1);
    //    std::cout << "Result: " << result << '\n';
    //}
    //else {
    //    std::cout << "Enter #1: ";
    //    std::cin >> num1;
    //    std::cout << "Enter #2: ";
    //    std::cin >> num2;

    //    switch (op) {
    //    case '+': result = num1 + num2; break;
    //    case '-': result = num1 - num2; break;
    //    case '*': result = num1 * num2; break;
    //    case '/': result = (num2 != 0) ? num1 / num2 : NAN; break;
    //    case '%': result = static_cast<int>(num1) % static_cast<int>(num2); break;
    //    case '^': result = pow(num1, num2); break;
    //    default: std::cout << "Invalid operator.\n"; result = NAN;
    //    }
    //    if (!std::isnan(result)) {
    //        std::cout << "Result: " << result << '\n';
    //    }
    //    else {
    //        std::cout << "Error in calculation.\n";
    //    }
    //}
    //std::cout << "********************************************\n";

    //// Grade via ternary operator
    //double grade;
    //std::cout << "Enter your marks: ";
    //std::cin >> grade;
    //std::cout << (
    //    grade >= 90 ? "Your grade is A\n" :
    //    grade >= 80 ? "Your grade is B\n" :
    //    grade >= 70 ? "Your grade is C\n" :
    //    grade >= 60 ? "Your grade is D\n" :
    //    "You failed\n");

    //// Even or odd check
    //int number;
    //std::cout << "Enter a number: ";
    //std::cin >> number;
    //std::cout << (
    //    number == 0 ? "The number is zero.\n" :
    //    number % 2 == 0 ? "The number is even.\n" :
    //    "The number is odd.\n");

    //// Positive/negative/zero
    //int num;
    //std::cout << "Enter a number: ";
    //std::cin >> num;
    //std::cout << (
    //    num > 0 ? "The number is positive.\n" :
    //    num < 0 ? "The number is negative.\n" :
    //    "The number is zero.\n");

    //// Celsius to Fahrenheit and vice versa
    //double Temp;
    //char unit;
    //std::cout << "**************** Temperature Conversion ***************\n";
    //std::cout << "F = Fahrenheit, C = Celsius\n";
    //std::cout << "Enter the unit (F/C): ";
    //std::cin >> unit;

    //if (unit == 'C' || unit == 'c') {
    //    std::cout << "Enter temperature in Celsius: ";
    //    std::cin >> Temp;
    //    Temp = (Temp * 9.0 / 5.0) + 32.0;
    //    std::cout << "Temperature in Fahrenheit: " << Temp << "\u00B0F\n";
    //}
    //else if (unit == 'F' || unit == 'f') {
    //    std::cout << "Enter temperature in Fahrenheit: ";
    //    std::cin >> Temp;
    //    Temp = (Temp - 32.0) * 5.0 / 9.0;
    //    std::cout << "Temperature in Celsius: " << Temp << "\u00B0C\n";
    //}
    //else {
    //    std::cout << "Invalid unit. Please enter C or F.\n";
    //}
    //std::cout << "*******************************************************\n";

    //// String compression
    //std::string inputString;
    //std::cout << "Enter a string to compress: ";
    //std::getline(std::cin >> std::ws, inputString);
    //int count = 1;
    //for (size_t i = 1; i < inputString.length(); ++i) {
    //    if (inputString[i] == inputString[i - 1]) {
    //        count++;
    //    }
    //    else {
    //        std::cout << inputString[i - 1] << count;
    //        count = 1;
    //    }
    //}
    //if (!inputString.empty()) {
    //    std::cout << inputString.back() << count;
    //}
    //std::cout << "\nString compression complete.\n";

    //// Prime check
    //int numToCheck;
    //std::cout << "Enter a number to check if it is prime: ";
    //std::cin >> numToCheck;
    //bool isPrime = (numToCheck > 1);
    //for (int i = 2; i <= sqrt(numToCheck); ++i) {
    //    if (numToCheck % i == 0) {
    //        isPrime = false;
    //        break;
    //    }
    //}
    //std::cout << (isPrime ? "It is a prime number.\n" : "It is not a prime number.\n");

    //// String functions
    //std::string name1;
    //std::cout << "Enter your name: ";
    //std::getline(std::cin >> std::ws, name1);

    //if (name1.length() > 12) {
    //    std::cout << "Your name can't be over 12 characters.\n";
    //}
    //else if (name1.empty()) {
    //    std::cout << "You didn't enter a name.\n";
    //}
    //else {
    //    name1.append(" is a nice name");
    //    std::cout << "Your name is: " << name1 << '\n';
    //}

    //std::string response;
    //std::cout << "Want to remove your name? (y/n): ";
    //std::getline(std::cin >> std::ws, response);
    //if (response == "y" || response == "Y") {
    //    name1.clear();
    //    std::cout << "Name cleared.\n";
    //}
    //else {
    //    std::cout << "Your name is still: " << name1 << '\n';
    //}

    //std::cout << "Length of your name: " << name1.length() << '\n';
    //std::cout << "Name in uppercase:\n";
    //for (char c : name1) {
    //    std::cout << (char)toupper(c) << '\n';
    //}
    //std::string name2;


    ////while loop example
    //while (name2.empty())
    //{
    //std::cout << "enter your name" << '\n';
    //std::getline(std::cin,name2);
    //}
    //
    //std::cout << "hello " << name;
    //
    

 //  //do while loop example
 //   std::string name2;
 //   do {
 //       std::cout << "Enter your name: ";
 //       std::getline(std::cin, name2);
 //   } while (name2.empty());
 //   std::cout << "Hello, " << name2 << "!\n";

	////do while loop example
 //   
	//double num;
 //   do {
 //       std::cout << "Enter a positive Number: ";
	//	std::cin >> num;
 //   } while (num < 0);

	//std::cout << "You entered a positive number: " << num << '\n';

	// For loop example
    
    for(int i = 0.0; i >= 10.0; i++)
    {
        std::cout << "The value of i is: " << i << '\n';
	}

	return 0;
}
