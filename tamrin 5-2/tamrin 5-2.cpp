// tamrin 5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char chara;
    std::cout << "Enter a character: ";
    std::cin >> chara;

    switch (chara) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout << "vowel" << std::endl;
        break;
    default:
        std::cout << "Not a vowel" << std::endl;
    }

    return 0;
}