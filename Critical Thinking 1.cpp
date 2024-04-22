#include <iostream>
#include <string>

class Person {
public:
    std::string firstName;
    std::string lastName;
    std::string streetAddress;
    std::string city;
    std::string zipCode;

    Person(std::string fn, std::string ln, std::string sa, std::string c, std::string zc) :
        firstName(fn), lastName(ln), streetAddress(sa), city(c), zipCode(zc) {}

    void displayInformation() {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Street Address: " << streetAddress << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Zip Code: " << zipCode << std::endl;
    }
};

int main() {
    Person p("John", "Doe", "1234 Elm Street", "Springfield", "12345");
    p.displayInformation();
    return 0;
}