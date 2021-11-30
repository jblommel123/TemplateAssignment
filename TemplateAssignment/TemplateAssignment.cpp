// TemplateAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joe Blommel
// CIS 1202
// 11/30/2021

#include <iostream>
#include <math.h>
//template definition
template <typename T>
//
T half(T number) {
    return (number / 2);
}
//explicit half function
int half(int number) {
    double numberToDivide = static_cast<double>(number);
    double half = numberToDivide / 2;
    return (int)round(half);
}
int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    //call functions
    std::cout << half(a) << std::endl;
    std::cout << half(b) << std::endl;
    std::cout << half(c) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
