#include <iostream>

using namespace std;

void printMenu() {
    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Exit" << endl;
}

double celsiusToFahrenheit(double celsius) {
    return (9.0/5.0) * celsius + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (5.0/9.0) * (fahrenheit - 32);
}

int main() {
    int choice;
    double temperature, convertedTemperature;

    while (true) {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                convertedTemperature = celsiusToFahrenheit(temperature);
                cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                convertedTemperature = fahrenheitToCelsius(temperature);
                cout << "Temperature in Celsius: " << convertedTemperature << endl;
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}