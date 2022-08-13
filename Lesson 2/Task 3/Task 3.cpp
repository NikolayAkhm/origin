
#include <iostream>
#include <string>

struct address
{
    std::string city;
    std::string street;
    std::string house_number;
    std::string apartment_number;
    std::string index;
};
void show_structure(address& a)
{
    std::cout << "City: " << a.city << "\n";
    std::cout << "Street: " << a.street << "\n";
    std::cout << "House number: " << a.house_number << "\n";
    std::cout << "Apartment number: " << a.apartment_number << "\n";
    std::cout << "Index: " << a.index << "\n\n";

}

int main()
{
    address Oren = { "Orenberg", "st. Dzerzhinskogo" , "12", "12", "460000" };
    address Sam = { "Samara", "st. Krasnoarmejskaya" , "12", "12", "443000" };
    show_structure(Oren);
    show_structure(Sam);
        return 0;
}