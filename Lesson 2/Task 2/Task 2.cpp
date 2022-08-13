
#include <iostream>
#include <string>

struct bank_account
{
    std::string first_name;
    int account_number;
    double money;
};
void new_balance(bank_account& b)
{
    double num;
    std::cout << "Enter new balance\n";
    std::cin >> num;
    b.money = num;
}

int main()
{
    bank_account first;
    std::cout << "Enter first_name\n";
    std::cin >> first.first_name;
    std::cout << "Enter account number\n";
    std::cin >> first.account_number;
    std::cout << "Enter amount of money\n";
    std::cin >> first.money;
    new_balance(first);

    std::cout << "Your bank account: " << first.first_name << ", " << first.account_number << ", " << first.money ;
    return 0;
}