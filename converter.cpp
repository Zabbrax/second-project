#include <iostream>


int main() {

double celsius;
double fahrenheit;
double temperature;
double rankine;
double kelvin;
int scalein;
int scaleout;

std::cout << "Hello! This program allows the user to convert temperatures to different temperature scales.\n";
std::cout << "You can choose from 4 types of temperatures.\n";

std::cout << "\nPick which temperature scale you want to use.\n";
std::cout << "\n1 Fahrenheit    2 Celsius    \n";
std::cout << "3 Rankine       4 Kelvin     \n";
std::cout << "\nEnter here:"; std::cin >> scalein;

  while (scalein > 4 || scalein < 0) {
    std::cout << "\nPlease enter a proper number for the temperature scale.\n\n";
    std::cout << "1 Fahrenheit    2 Celsius    \n";
    std::cout << "3 Rankine       4 Kelvin     \n";
    std::cout << "\nEnter here:"; std::cin >> scalein;
  }

std::cout << "\nEnter temperature: ";
std::cin >> temperature;



// Fahrenheit to X
if (scalein == 1) {
  std::cout << "\nPick which temperature scale you want to convert to.\n";
  std::cout << "2 Celsius    3 Rankine    4 Kelvin\n";
  std::cout << "\nEnter here:"; std::cin >> scaleout;
  while (scaleout < 2 || scaleout > 4) {
    std::cout << "\nPlease choose one of the temperature scales.\n";
    std::cout << "2 Celsius    3 Rankine    4 Kelvin\n";
    std::cout << "Enter here:"; std::cin >> scaleout;
  }
    if (scaleout == 2) {
    celsius = (temperature - 32) * (5/9);
    std::cout << "\n" << temperature << " in Fahrenheit is equal to " << celsius << " in Celsius\n";
  } else   if (scaleout == 3) {
    rankine = temperature + 459.67;
    std::cout << "\n" << temperature << " in Fahrenheit is equal to " << rankine << " in Rankine\n";
  } else if (scaleout == 4) {
    kelvin = (((temperature - 32) * 5) / 9) + 273.15;
    std::cout << "\n" << temperature << " in Fahrenheit is equal to " << kelvin << " in Kelvin\n";
  } 





// Celsius to X
  } else if (scalein == 2) {
  std::cout << "\nPick which temperature scale you want to convert to.\n";
  std::cout << "1 Fahrenheit    3 Rankine    4 Kelvin\n";
  std::cout << "\nEnter here:"; std::cin >> scaleout; 
   while (scaleout < 1 || scaleout == 2 || scaleout > 4) {
    std::cout << "\nPlease choose one of the temperature scales.\n";
    std::cout << "1 Fahrenheit    3 Rankine    4 Kelvin\n";
    std::cout << "Enter here:"; std::cin >> scaleout;
  }
    if (scaleout == 1) {
    fahrenheit = (temperature * 1.8) + 32;
    std::cout << "\n" << temperature << " in Celsius is equal to " << fahrenheit << " in Fahrenheit\n";
  } else   if (scaleout == 3) {
    rankine = (temperature * 1.8 + 491.67);
    std::cout << "\n" << temperature << " in Celsius is equal to " << rankine << " in Rankine\n";
  } else if (scaleout == 4) {
    kelvin = temperature + 273.15;
    std::cout << "\n" << temperature << " in Celsius is equal to " << kelvin << " in Kelvin\n";
  } 





// Rankine to X
  } else if (scalein == 3) {
  std::cout << "\nPick which temperature scale you want to convert to.\n";
  std::cout << "1 Fahrenheit    2 Celsius    4 Kelvin\n";
  std::cout << "\nEnter here:"; std::cin >> scaleout;
    while (scaleout < 1 || scaleout == 3 || scaleout > 4) {
    std::cout << "\nPlease choose one of the temperature scales.\n";
    std::cout << "1 Fahrenheit    2 Celsius    4 Kelvin\n";
    std::cout << "Enter here:"; std::cin >> scaleout;
  }
    if (scaleout == 1) {
    fahrenheit = temperature + 359.67;
    std::cout << "\n" << temperature << " in Rankine is equal to " << fahrenheit << " in Fahrenheit\n";
  } else   if (scaleout == 2) {
    celsius = (temperature - 491.67) * 5/9;
    std::cout << "\n" << temperature << " in Rankine is equal to " << celsius << " in Celsius\n";
  } else if (scaleout == 4) {
    kelvin = temperature / 1.8;
    std::cout << "\n" << temperature << " in Rankine is equal to " << kelvin << " in Kelvin\n";
  } 





// Kelvin to X
  } else if (scalein == 4) {
  std::cout << "\nPick which temperature scale you want to convert to.\n";
  std::cout << "1 Fahrenheit    2 Celsius    3 Rankine\n";
  std::cout << "\nEnter here:"; std::cin >> scaleout;
      while (scaleout < 1 || scaleout > 3) {
    std::cout << "\nPlease choose one of the temperature scales.\n";
    std::cout << "1 Fahrenheit    2 Celsius    3 Rankine\n";
    std::cout << "Enter here:"; std::cin >> scaleout;
  }
    if (scaleout == 1) {
    fahrenheit = (((temperature - 273.15) *9) /5) + 32;
    std::cout << "\n" << temperature << " in Kelvin is equal to " << fahrenheit << " in Fahrenheit\n";
  } else   if (scaleout == 2) {
    celsius = temperature - 273.15;
    std::cout << "\n" << temperature << " in Kelvin is equal to " << celsius << " in Celsius\n";
  } else if (scaleout == 3) {
    rankine = temperature * 1.8;
    std::cout << "\n" << temperature << " in Kelvin is equal to " << rankine << " in Rankine\n";
  } 
  }
std::cout << "\n";

  system("pause");
}