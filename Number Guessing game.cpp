// This program prints the C++ language standard your compiler is currently using
// Freely redistributable, courtesy of learncpp.com (https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/)

#include <iostream>  // for std::cout and std::cin
#include <random>   // for random number generation capabilities

int main()
{
    int selectedAmount{};
    std::cout << "Enter the highest number you wish to guess between: ";
    std::cin >> selectedAmount;
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, selectedAmount);
    int genNum = uniform_dist(e1);
    int userInputNum{};
    int attempts{};
        
    std::cout << "Guess a number between 1 to " << selectedAmount << '\n';
        do
        {
            //Do something
            std::cout << "Enter number: ";
            std::cin >> userInputNum;
            attempts++;
            if (userInputNum > genNum)
            {
                //If greater than random number, tell the user through console.
                std::cout << "Too high!" << '\n';
            }
            else if (userInputNum < genNum) {
                //if less than gennum, tell user through console.
                std::cout << "Too low!" << '\n';
            }
            else {
                std::cout << "Congratulations, you guessed correctly!!!" << std::endl;
            }


        } while (genNum != userInputNum);
        std::cout << "It took you this many attempts: " << attempts << std::endl;

    return 0;
}