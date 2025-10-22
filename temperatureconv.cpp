#include<iostream>

int main()
{
    double temp;
    char unit;

    std::cout <<"****** TEMPERATURE CONVERTER ******\n";
    std::cout <<"F = fahrenheit\n";
    std::cout <<"C = celsius\n";
    std::cout <<"Enter the temperature you want to convert: ";
    std::cin>> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius:";
        std::cin >> temp;
        
        temp = (temp *  1.8) + 32;
        std::cout <<"Temperature in Fahrenheit is: " << temp << " F\n";
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout <<"Enter the temperature in Fahrenait:";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout <<"Temperature in Celsius is: " << temp << " C\n";
    }

    std::cout <<"***********************************";
}