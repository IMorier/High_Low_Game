#include "functions.h"
#include <iostream>




int main()
{
	int num1{ 0 }, num2{ 200 };
	std::cout << "Random number in range: " << num1 << " to " << num2 << '\n';
	int random{ randomNum(num1, num2)};
	int lownum{ num1 }, highnum{ num2 };
	int tryCount{};

	while (fun(random, lownum, highnum, ++tryCount)) {  }
	

	std::cout << "\n\n\n";
	return 0;
}