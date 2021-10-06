#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

//Declare Variables
int x;
float fahrenheit;
float kelvin;
float meters;
float yards;

//Single-Time Output
cout << "Welcome to Converter!" << endl;

do {
    //Menu Output, Take Input
    cout << "Please select from the following conversions." << endl;
    cout << "(1) Fahrenheit to Kelvin" << endl;
    cout << "(2) Kelvin to Farenheit" << endl;
    cout << "(3) Meters to Yards" << endl;
    cout << "(4) Yards to Meters" << endl;
    cout << "(5) Exit" << endl;
    cin >> x;

    //Logic
    if (x == 1) {
        cout << "Fahrenheit to Kelvin- \nEnter a temperature in Fahrenheit." << endl;
        cin >> fahrenheit;
        cout << fahrenheit << " degrees Fahrenheit is " << ((fahrenheit - 32) / 1.8 + 273.15) << " degrees Kelvin.\n\n";
    }

    else if (x == 2) {
        cout << "Kelvin to Fahrenheit- \nEnter a temperature in Kelvin." << endl;
        cin >> kelvin;
        cout << kelvin << " degrees Kelvin is " << ((kelvin - 273.15) * 1.8 + 32) << " degrees Fahrenheight.\n\n";
    }

    else if (x == 3) {
        cout << "Meters to Yards- \nEnter a measurment in meters." << endl;
        cin >> meters;
        cout << meters << " meters is " << (meters * 1.094) << " yards.\n\n";
    }

    else if (x == 4) {
        cout << "Yards to Meters- \nEnter a measurment in yards." << endl;
        cin >> yards;
        cout << yards << " yards is " << (yards / 1.094) << " meters.\n\n";
    }

    else if (x == 5) {
        cout << "Terminating Program...\n\n";
        break;
    }

    else {
        cout << "Invalid selection.\n\n";
    }

} while (true);

}

