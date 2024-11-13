#include <iostream>
#include <cstdlib>
#include <string>

std::string getQuantityPhrase(int n) {
	std::string quantity;

	if (0 > n) quantity = "negative";
	if (0 == n) quantity = "no";
	if (1 == n) quantity = "a single";
	if (2 == n) quantity = "a couple of";
	if (3 == n) quantity = "a few";
	if (3 < n) quantity = "many";

	return quantity;
}

std::string getApplesPluralized(int n) {
	std::string inflexion;

	if (n == 1) 
		inflexion = "apple";
	else 
		inflexion = "apples";

	return inflexion;
}

int main() {
	constexpr int maryApples { 3 };
	std::cout 
		<< "Mary has " 
		<< getQuantityPhrase(maryApples) 
		<< ' ' 
		<< getApplesPluralized(maryApples) 
		<< ".\n";

	std::cout << "How many apples do you have? ";
	int numApples { };
	std::cin >> numApples;

	std::cout 
		<< "You have " 
		<< getQuantityPhrase(numApples) 
		<< ' ' 
		<< getApplesPluralized(numApples) 
		<< ".\n";

	return EXIT_SUCCESS;
}