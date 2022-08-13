#include <iostream>


class Calculator
{
private:
    double num1;
    double num2;
public:
    bool set_num1(double num1)
    {
        if (num1 == 0)
        {
            return false;
        }
        else
        {
            this->num1 = num1;
            return true;
        }
    }
    bool set_num2(double num2)
    {
        if (num2== 0)
        {
            return false;
        }
        else
        {
            this->num2 = num2;
            return true;
        }
    }
        double add()
        {
            return num1 + num2;
        }
        double multiply()
        {
            return num1 * num2;
        }
        double subtract_1_2()
        {
            return num1 - num2;
        }
        double subtract_2_1()
        {
            return num2 - num1;
        }
        double divide_1_2() 
        {
            return num1 / num2;
        }
        double divide_2_1()
        {
            return num2 / num1;
        }
};

int main()
{
    double num1 = 0;
    double num2 = 0;
        Calculator calculator;
        std::cout << "Enter num 1 (Rational)\n";
        std::cin >> num1;
        while (!calculator.set_num1(num1))
        {
            std::cout << "Input Error\n";
            std::cin >> num1;
        }
        std::cout << "Enter num 2 (Rational)\n";
        std::cin >> num2;
        while (!calculator.set_num2(num2))
        {
            std::cout << "Input Error\n";
            std::cin >> num2;
        }
        std::cout << "num1 + num2 = " << calculator.add() << "\n";
        std::cout << "num1 * num2 = " << calculator.multiply() << "\n";
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << "\n";
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << "\n";

    return 0;
} 