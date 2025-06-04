#include <iostream>
#include <string>
using namespace std;

int main() {
	double x = (int) 3.14;
	std::cout << "The value of x is: " << x << '\n';
	char y = 300;
	std::cout << "The value of y is: " << y <<'\n';
	int corrects = 8;
	int questions = 10;
	double score = corrects / (double)questions * 100.0;
	std::cout << "The score is: " << score << "%"<< '\n';

	// Using std::cin to read a string input
	std::string name;
	std::cout << "Enter your name: " <<'\n';
	std::getline(std::cin >> std::ws, name);
	std::cout << "Hello, " << name << "!\n";

	// Using std::cin to read an integer input
	int age; 
	std::cout << "Enter your age: \n";
	std::cin >> age;
	std::cout << "you are " << age << " years old \n";

	// Using std::getline to read a full line including spaces
	std::string quote;
	std::cout << "Enter your favorite quote: " << '\n';
	std::getline(std::cin >> std::ws, quote);
	std::cout << "Your favorite quote is: " << quote << '\n';
	return 0;
	string milan();
}

namespace milan 
{
	string milan() {
		string milan;
		cout << "enter int milan : ";
		cin >> milan ;
		cout << " int milan is : " << milan;
		return milan;
	}
}