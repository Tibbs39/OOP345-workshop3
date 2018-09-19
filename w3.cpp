// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 19, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

// Workshop 3 - Templates
// w3.cpp
// Author: Dr. Elliot Coleshill
// Date: 2018-08-22

#include <iostream>
#include <iomanip>
#include <string>
#include "Pair.h"
#include "List.h"

using namespace std;

int main(int argc, char** argv)
{
    bool keepreading;
    std::cout << "Inventory\n=========\n";
    List <Pair<std::string, double>, 5> inventory;

    std::string str;
    double price;

    keepreading = true;
    do {
        std::cout << "Product: ";
        getline(std::cin, str);
        if (str.compare("quit") == 0) {
            keepreading = false;
        } else {
            std::cout << "Price: ";
            std::cin >> price;
            std::cin.ignore();
            Pair <std::string, double> pair(str, price);
            inventory += pair;
        }
    } while (keepreading);

    cout << "\nPrice List\n---------\n"
}