#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <cctype> 


int main() {
    //   // Casting double to int
    //   double x = (int)3.14;
    //   std::cout << "The value of x is: " << x << '\n';

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
	//	std::cout << "Welcome to the site.\n";
	//}
	//else if (age < 0) {
	//	std::cout << "Your existence is a joke.\n";
	//}
	//else {
	//	std::cout << "You are not allowed to enter the site.\n";
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
	//	std::cout << "Enter number: ";
	//	std::cin >> num1;
	//	result = sqrt(num1);
	//	std::cout << "Result: " << result << '\n';
	//}
	//else {
	//	std::cout << "Enter #1: ";
	//	std::cin >> num1;
	//	std::cout << "Enter #2: ";
	//	std::cin >> num2;

	//	switch (op) {
	//	case '+': result = num1 + num2; break;
	//	case '-': result = num1 - num2; break;
	//	case '*': result = num1 * num2; break;
	//	case '/': result = (num2 != 0) ? num1 / num2 : NAN; break;
	//	case '%': result = static_cast<int>(num1) % static_cast<int>(num2); break;
	//	case '^': result = pow(num1, num2); break;
	//	default: std::cout << "Invalid operator.\n"; result = NAN;
	//	}
	//	if (!std::isnan(result)) {
	//		std::cout << "Result: " << result << '\n';
	//	}
	//	else {
	//		std::cout << "Error in calculation.\n";
	//	}
	//}
	//std::cout << "********************************************\n";

	//// Grade via ternary operator
	//double grade;
	//std::cout << "Enter your marks: ";
	//std::cin >> grade;
	//std::cout << (
	//	grade >= 90 ? "Your grade is A\n" :
	//	grade >= 80 ? "Your grade is B\n" :
	//	grade >= 70 ? "Your grade is C\n" :
	//	grade >= 60 ? "Your grade is D\n" :
	//	"You failed\n");

	//// Even or odd check
	//int number;
	//std::cout << "Enter a number: ";
	//std::cin >> number;
	//std::cout << (
	//	number == 0 ? "The number is zero.\n" :
	//	number % 2 == 0 ? "The number is even.\n" :
	//	"The number is odd.\n");

	//// Positive/negative/zero
	//int num;
	//std::cout << "Enter a number: ";
	//std::cin >> num;
	//std::cout << (
	//	num > 0 ? "The number is positive.\n" :
	//	num < 0 ? "The number is negative.\n" :
	//	"The number is zero.\n");

	//// Celsius to Fahrenheit and vice versa
	//double Temp;
	//char unit;
	//std::cout << "**************** Temperature Conversion ***************\n";
	//std::cout << "F = Fahrenheit, C = Celsius\n";
	//std::cout << "Enter the unit (F/C): ";
	//std::cin >> unit;

	//if (unit == 'C' || unit == 'c') {
	//	std::cout << "Enter temperature in Celsius: ";
	//	std::cin >> Temp;
	//	Temp = (Temp * 9.0 / 5.0) + 32.0;
	//	std::cout << "Temperature in Fahrenheit: " << Temp << "\u00B0F\n";
	//}
	//else if (unit == 'F' || unit == 'f') {
	//	std::cout << "Enter temperature in Fahrenheit: ";
	//	std::cin >> Temp;
	//	Temp = (Temp - 32.0) * 5.0 / 9.0;
	//	std::cout << "Temperature in Celsius: " << Temp << "\u00B0C\n";
	//}
	//else {
	//	std::cout << "Invalid unit. Please enter C or F.\n";
	//}
	//std::cout << "*******************************************************\n";

	//// String compression
	//std::string inputString;
	//std::cout << "Enter a string to compress: ";
	//std::getline(std::cin >> std::ws, inputString);
	//int count = 1;
	//for (size_t i = 1; i < inputString.length(); ++i) {
	//	if (inputString[i] == inputString[i - 1]) {
	//		count++;
	//	}
	//	else {
	//		std::cout << inputString[i - 1] << count;
	//		count = 1;
	//	}
	//}
	//if (!inputString.empty()) {
	//	std::cout << inputString.back() << count;
	//}
	//std::cout << "\nString compression complete.\n";

	//// Prime check
	//int numToCheck;
	//std::cout << "Enter a number to check if it is prime: ";
	//std::cin >> numToCheck;
	//bool isPrime = (numToCheck > 1);
	//for (int i = 2; i <= sqrt(numToCheck); ++i) {
	//	if (numToCheck % i == 0) {
	//		isPrime = false;
	//		break;
	//	}
	//}
	//std::cout << (isPrime ? "It is a prime number.\n" : "It is not a prime number.\n");

	//// String functions
	//std::string name1;
	//std::cout << "Enter your name: ";
	//std::getline(std::cin >> std::ws, name1);

	//if (name1.length() > 12) {
	//	std::cout << "Your name can't be over 12 characters.\n";
	//}
	//else if (name1.empty()) {
	//	std::cout << "You didn't enter a name.\n";
	//}
	//else {
	//	name1.append(" is a nice name");
	//	std::cout << "Your name is: " << name1 << '\n';
	//}

	//std::string response;
	//std::cout << "Want to remove your name? (y/n): ";
	//std::getline(std::cin >> std::ws, response);
	//if (response == "y" || response == "Y") {
	//	name1.clear();
	//	std::cout << "Name cleared.\n";
	//}
	//else {
	//	std::cout << "Your name is still: " << name1 << '\n';
	//}

	//std::cout << "Length of your name: " << name1.length() << '\n';
	//std::cout << "Name in uppercase:\n";
	//for (char c : name1) {
	//	std::cout << (char)toupper(c) << '\n';
	//}

	//std::string name2;


	////while loop example
	//while (name2.empty())
	//{
	//	std::cout << "enter your name" << '\n';
	//	std::getline(std::cin, name2);
	//}

	//std::cout << "hello " << name;



	////do while loop example
	//std::string name3;
	//do {
	//	std::cout << "Enter your name: ";
	//	std::getline(std::cin, name3);
	//} while (name3.empty());
	//std::cout << "Hello, " << name3 << "!\n";

	////do while loop example

	//double n;
	//do {
	//	std::cout << "Enter a positive Number: ";
	//	std::cin >> n;
	//} while (n < 0);

	//std::cout << "You entered a positive number: " << num << '\n';

	////For loop example

	//for (double i = 1; i <= 10; i /= 1)
	//{
	//	std::cout << i << '\n';
	//}

	////for loop example for a rectangle of particular char

	//int rows;
	//int columns;
	//char symbol;
	//std::cout << "*************** Rectangle Pattern ***************\n";

	//do {
	//	std::cout << "Enter the number of rows: ";
	//	std::cin >> rows;
	//} while (rows <= 0 || rows == ' ' || rows == '\n' || rows == '\t');

	//do {
	//	std::cout << "enter the number of columns: ";
	//	std::cin >> columns;
	//} while (columns <= 0 || columns == ' ' || columns == '\n' || columns == '\t');

	//do {
	//	std::cout << "Enter the symbol to use: ";
	//	std::cin >> symbol;
	//} while (symbol == ' ' || symbol == '\n' || symbol == '\t');

	//for (int i = 1; i <= rows; i++)
	//{
	//	for (int j = 1; j <= columns; j++)
	//	{
	//		std::cout << symbol;
	//	}
	//	std::cout << "\n";
	//}


	//std::cout << "*************************************************\n";


	//// For loop example for multiplication table
	//int num;
	//std::cout << "Enter a number for multiplication table: ";
	//std::cin >> num;
	//std::cout << "Multiplication table for " << num << ":\n";
	//for (int i = 1; i <= 10; ++i) {
	//	std::cout << num << " x " << i << " = " << num * i << '\n';
	//}

	//// Random number generation
	//int number = rand();
	//std::cout << "Random number generated: " << number << '\n';

	//// passing dice game number of times
	//int diceRolls;
	//std::cout << "Enter the number of times to roll the dice: ";
	//std::cin >> diceRolls;
	//for (int i = 0; i < diceRolls; ++i) {
	//	int diceRoll = rand() % 6 + 1; // Random number between 1 and 6
	//	std::cout << "Dice roll " << (i + 1) << ": " << diceRoll << '\n';
	//}

	//// String comparison
	//std::string str1, str2;
	//std::cout << "Enter first string: ";
	//std::getline(std::cin >> std::ws, str1);
	//std::cout << "Enter second string: ";
	//std::getline(std::cin >> std::ws, str2);
	//if (str1 == str2) {
	//	std::cout << "The strings are equal.\n";
	//}
	//else {
	//	std::cout << "The strings are not equal.\n";
	//}
	//// String length
	//std::cout << "Length of first string: " << str1.length() << '\n';
	//std::cout << "Length of second string: " << str2.length() << '\n';


	//print("milan", 20);
	printWelcomeMessage();
	//srand(time(NULL));

	//// Random number generation with seed
	//int ranNum = rand() % 5 + 1; // Random number between 1 and 5
	//switch (ranNum) {
	//case 1: std::cout << "you won a bumper sticker";
	//	break;
	//case 2: std::cout << "you won a t-shirt";
	//	break;
	//case 3: std::cout << "you won a headphone";
	//	break;
	//case 4: std::cout << "you won a Bluetooth speaker";
	//	break;
	//case 5: std::cout << "you won a car";
	//	break;
	//default: std::cout << "No prize for you!\n"; break;
	//	break;

	//}

	//std::cout << "\nThank you for playing!\n";

	////coin flip game C++

	//char choice;
	//std::cout << "Welcome to the Coin Flip Game!\n";
	//std::cout << "Choose your side (H for Heads, T for Tails): ";
	//std::cin >> choice;
	//std::cout << "Flipping the coin...\n";

	//choice = toupper(choice); // Convert to uppercase for consistency

	//if (choice != 'H' && choice != 'T') {
	//	std::cout << "Invalid choice! Please enter H or T.\n";
	//}
	//else
	//{
	//	char coinSide = (rand() % 2 == 0) ? 'H' : 'T'; // Randomly choose Heads or Tails
	//	std::cout << "The coin landed on: " << coinSide << '\n';
	//	if (choice == coinSide) {
	//		std::cout << "Congratulations! You guessed correctly!\n";
	//	}
	//	else {
	//		std::cout << "Sorry, you guessed wrong. Better luck next time!\n";
	//	}
	//}
	//std::cout << "Thanks for playing the game";

	////number guessing game where you can set the number in beetween C++

	//int guesNum;
	//int guess;
	//int tries{};
	//int usernum;

	//std::cout << "Enter the maximum number for the guessing game : ";
	//std::cin >> usernum;

	//guesNum = rand() % usernum + 1;


	//std::cout << "\nWelcome to the Number Guessing Game!\n";
	//do {
	//	std::cout << "I have selected a number between 1 and " << usernum << '\n';
	//	std::cin >> guess;
	//	tries++;

	//	if (guess > guesNum)
	//	{
	//		std::cout << "your guess is too high,try again.\n";
	//	}
	//	else if (guess < guesNum)
	//	{
	//		std::cout << "your guess is too low,try again.\n";
	//	}
	//	else
	//	{
	//		std::cout << "Congratulations! You guessed the number " << tries << " in " << tries << " tries!\n";
	//	}

	//} while (guess != guesNum);

	//std::cout << "Thank you for playing the Number Guessing Game!\n";



	////function to calculate area of square
	//char option;
	//double Length;

	//// Validate input


	//do {
	//	std::cout << "Please enter a positive length in cm: ";
	//	std::cin >> Length;
	//	if (std::cin.fail() || Length < 0) {
	//		std::cout << "Invalid input. Please enter a positive number.\n";
	//		clearInputBuffer();
	//	}
	//} while (std::cin.fail() || Length < 0);


	//std::cout << "You entered: " << Length << " cm\n";
	//std::cout << "you want to rather calculate the area of a square or cube? (s/c): ";
	//std::cin >> option;
	//option = tolower(option); // Convert to lowercase for consistency
	//if (option == 'c') {
	//	std::cout << "Calculating area of a cube...\n";
	//	double Volume = cubeVolume(Length);
	//	std::cout << "The Volume of the cube with length " << Length << " is: " << Volume << "cm ^ 3\n";
	//}
	//else if (option == 's') {
	//	// Calculate area using the function
	//	double area = squareArea(Length);
	//	std::cout << "The area of the square with length " << Length << " is: " << area << "cm ^ 2\n";
	//}
	//else {
	//	std::cout << "Invalid option. Please enter 's' for square or 'c' for cube.\n";
	//}

	//// Return keyword Example program

	//std::string firstname = "hail";
	//std::string lastname = "Hitler";
	//std::string fulllname = concatStrings(firstname, lastname);
	//std::cout << "WHO IS LORD!" << '\n';
	//std::cout << fulllname << '\n';

	////overloaded function Example program

	//std::cout << "\nWelcome to the Pizza Shop!\n";
	//std::cout << "We have various pizza options for you.\n";

	//std::cout << "Please choose your pizza toppings: A: peproni and mushroom B: peproni C: Normal (Enter A,B,C) \n";
	//std::string toppingChoice;
	//std::getline(std::cin >> std::ws, toppingChoice);
	//if (toppingChoice == "a" || toppingChoice == "A")
	//{
	//	bakepizza("peproni", "mushroom");
	//}
	//else if (toppingChoice == "b" || toppingChoice == "B")
	//{
	//	bakepizza("peproni");
	//}
	//else if (toppingChoice == "c" || toppingChoice == "C") {
	//	bakepizza();
	//}

	//else {
	//	std::cout << "Invalid choice. Please choose A, B, or C.\n";
	//	std::cout << "No PiZZA.\n";

	//}

	////local variable global variable example

	//int myNum = 10; // Global variable
	//std::cout << "My Num is " << myNum << '\n';

	//printNum(myNum); // Call function to print myNum
	
	//Example of array
	std::string cars[] = { "bmw","maruti","hyudai"};
	std::string Songs[3];

	Songs[0] = "Song 1: Imagine by John Lennon";
	Songs[1] = "Song 2: Bohemian Rhapsody by Queen";
	Songs[2] = "Song 3: Stairway to Heaven by Led Zeppelin";

	std::cout << Songs[0] << '\n';
	std::cout << Songs[1] << '\n';
	std::cout << Songs[2] << '\n';
	
	std::cout << "my cars is a " << cars[0] << '\n';
	std::cout << "my cars is a " << cars[1] << '\n';
	std::cout << "my cars is a " << cars[2] << '\n';


    int rows;
    int columns;
    char symbol;
    std::cout << "*************** Rectangle Pattern ***************\n";

    do {
        std::cout << "Enter the number of rows: ";
        std::cin >> rows;
    } while (rows <= 0 || rows == ' ' || rows == '\n' || rows == '\t');

    do {
        std::cout << "enter the number of columns: ";
        std::cin >> columns;
    } while (columns <= 0 || columns == ' ' || columns == '\n' || columns == '\t');

    do {
        std::cout << "Enter the symbol to use: ";
        std::cin >> symbol;
    } while (symbol == ' ' || symbol == '\n' || symbol == '\t');

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            std::cout << symbol;
        }
        std::cout << "\n";
    }


    std::cout << "*************************************************\n";


    // For loop example for multiplication table
    int num;
    std::cout << "Enter a number for multiplication table: ";
    std::cin >> num;
    std::cout << "Multiplication table for " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << num * i << '\n';
    }

    // Random number generation
    int number = rand();
    std::cout << "Random number generated: " << number << '\n';

    // passing dice game number of times
    int diceRolls;
    std::cout << "Enter the number of times to roll the dice: ";
    std::cin >> diceRolls;
    for (int i = 0; i < diceRolls; ++i) {
        int diceRoll = rand() % 6 + 1; // Random number between 1 and 6
        std::cout << "Dice roll " << (i + 1) << ": " << diceRoll << '\n';
    }
  
    // String comparison
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin >> std::ws, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin >> std::ws, str2);
    if (str1 == str2) {
        std::cout << "The strings are equal.\n";
    } else {
        std::cout << "The strings are not equal.\n";
    }
    // String length
    std::cout << "Length of first string: " << str1.length() << '\n';
	std::cout << "Length of second string: " << str2.length() << '\n';
 return 0;
}
