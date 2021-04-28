// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 27, 2021
// Calculates area and perimeter of user input
#include <iostream>
#include <cstdlib>
int Length, Width, Area, Perimeter;
int main() {
    // Function that calculates area and perimeter

    std::cout << "Input the length and width of the quadrilateral: ";
    std::cin >> Length;
    std::cin >> Width;
    std::cout << "Length is: " << Length << "cm\n";
    std::cout << "Width is : " << Width << "cm";
    // User input

    Area = Length * Width;
    Perimeter = 2 * (Length + Width);
    // Process

std::cout << "\nArea is: " << Area << "cm^2";
std::cout << "\nPerimeter is: " << Perimeter << "cm";

// Output
}
