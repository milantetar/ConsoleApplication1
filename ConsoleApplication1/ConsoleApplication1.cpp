#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int main() {
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
    return 0;
    z = sqrt(4761); 
	std::cout << "The square root of 4761 is: " << z << '\n'; // Output: 69
    
}
