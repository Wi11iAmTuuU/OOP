// GitTutorial.cpp: 主要專案檔。

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number)
{
	if (number > target) {
		std::cout << "Smaller" << std::endl;
		return false;
	}
	else if (number < target) {
		std::cout << "Bigger" << std::endl;
		return false;
	}
	return true;
}
int main(array<System::String^>^ args)
{
    int guess;

    do
    {
        std::cin >> guess;
    }
    while (!Guess(guess));

    return 0;
}