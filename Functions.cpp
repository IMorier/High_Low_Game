#include "functions.h"
#include <random>
#include <iostream>

void hi_lo(const int num, const int random, int& lownum, int& highnum) {
	if (num < random) {
		std::cout << "Too Low\t\t";
		lowRange(num, lownum);
		std::cout << lownum << "..." << highnum << '\n';
		return;
	}

	std::cout << "Too High\t";
	highRange(num, highnum);
	std::cout << lownum << "..." << highnum << '\n';
}


bool fun(const int random, int& lownum, int& highnum, const int tryCount) {
	std::cout << "Attempt #" << tryCount << '\n';
	std::cout << "Your number: ";
	int num{};
	if (!(std::cin >> num)) {
		std::cin.clear();
		while (std::cin.get() != '\n') continue;
		num = 0;
		std::cout << "Number = 0\n";
	}
	if (num != random) {
		hi_lo(num, random, lownum, highnum);
		return true;
	}
	std::cout << "Correct!\n";
	return false;
}


int randomNum(const int num1, const int num2) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distr(num1, num2);
	return distr(gen);
}

void lowRange(const int num, int& lownum){
	if (num > lownum) lownum = num;
}

void highRange(const int num, int& highnum) {
	if (num < highnum) highnum = num;
}