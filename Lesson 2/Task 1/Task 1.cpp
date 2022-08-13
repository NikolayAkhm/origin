
#include <iostream>
#include <string>

enum class Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
int main()
{
        bool exit = true;
        int num;
        std::cout << "Enter month number " << "\n";
        std::cin >> num;
        while (exit)
        {
            switch (num)
            {
            case 0:
                std::cout << "Goodbye";
                exit = false;
                break;
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::January) :
                std::cout << "January\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::February) :
                std::cout << "February\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::March):
                std::cout << "March\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::April):
                std::cout << "April\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::May):
                std::cout << "May\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::June):
                std::cout << "June\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::July):
                std::cout << "July\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::August):
                std::cout << "August\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::September):
                std::cout << "September\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::October):
                std::cout << "October\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::November) :
                std::cout << "November\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            case static_cast<int>(Month::December) :
                std::cout << "December\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            default:
                std::cout << "Error when entering month number\n";
                std::cout << "Enter month number " << "\n";
                std::cin >> num;
                break;
            }
  
        }


return 0;
}
