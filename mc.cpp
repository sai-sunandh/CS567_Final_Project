#include <iostream>
#include "calculator.h"


#include <cmath>
// Function to perform addition of numbers in the 'nums' list
double addition(double nums[]) 
{
    return nums[0] + nums[1];
}

// Function to perform subtraction of numbers in the 'nums' list
double subtraction(double nums[]) 
{
    return nums[0] - nums[1];
}

// Function to perform multiplication of numbers in the 'nums' list
double multiplication(double nums[]) 
{
    return nums[0] * nums[1];
}

// Function to perform division of numbers in the 'nums' list
double division(double nums[]) 
{
    return nums[0] / nums[1];
}

// Function to calculate the modulus of numbers in the 'nums' list
double modulus(double nums[]) 
{
    return fmod(nums[0], nums[1]);
}

// Function to calculate the power of exponents for numbers in the 'nums' list
double powers_exponents(double nums[]) 
{
    return pow(nums[0], nums[1]);
}

// Function to calculate roots or 1/nth powers of a number in the 'nums' list
double calculating_roots(double nums[]) 
{
    return pow(nums[0], 1 / nums[1]);
}

// Function to calculate the factorial of a number in the 'nums' list
double factorial(double nums[]) 
{
    double result = 1;
    for (int fact = 1; fact <= static_cast<int>(nums[0]); ++fact) 
    {
        result *= fact;
    }
    return result;
}

// Function to perform trigonometric operations based on the choice and angle in the 'nums' list
double trignometry(double nums[]) 
{
    double x = (nums[0] / 180) * 3.14159265359;
    return sin(x);
}

// Function to calculate logarithms based on the choice and operands in the 'nums' list
double logarithms(double nums[]) 
{
    return log(nums[0]);
}

// Function to calculate the Euclidean distance between two points in the 'nums' list
double eucledian_distance(double nums[]) 
{
    return sqrt(pow(0 - nums[0], 2) + pow(0 - nums[1], 2));
}

// Function to calculate the area of various shapes and polygons based on the choice and dimensions in the 'nums' list
double area(double nums[]) 
{
    return nums[0] * nums[1];
}

// Function to perform calculator operations based on the choice and operands in the 'nums' list
double calculator(int choice, double nums[]) 
{
    switch (choice) 
    {
        case 1:
            return addition(nums);
        case 2:
            return subtraction(nums);
        case 3:
            return multiplication(nums);
        case 4:
            return division(nums);
        case 5:
            return modulus(nums);
        case 6:
            return powers_exponents(nums);
        case 7:
            return calculating_roots(nums);
        case 8:
            return factorial(nums);
        case 9:
            return trignometry(nums);
        case 10:
            return logarithms(nums);
        case 11:
            return eucledian_distance(nums);
        case 12:
            return area(nums);
        default:
            return 0.0; // Return a default value or handle error as needed
    }
}






int main() {
    int choice;
    double nums[2];

    std::cout << "Enter operation choice:\n"
              << "1. Addition\n"
              << "2. Subtraction\n"
              << "3. Multiplication\n"
              << "4. Division\n"
              << "5. Modulus\n"
              << "6. Powers/Exponents\n"
              << "7. Calculating Roots\n"
              << "8. Factorial\n"
              << "9. Trigonometry\n"
              << "10. Logarithms\n"
              << "11. Euclidean Distance\n"
              << "12. Area\n";

    std::cin >> choice;

    if (choice >= 1 && choice <= 12) {
        std::cout << "Enter operands (two values):\n";
        std::cin >> nums[0] >> nums[1];

        double result = calculator(choice, nums);

        std::cout << "Result: " << result << std::endl;
    } else {
        std::cerr << "Invalid choice. Please choose a number between 1 and 12." << std::endl;
        return 1; // Indicate an error exit status
    }

    return 0; // Indicate a successful exit status
}
