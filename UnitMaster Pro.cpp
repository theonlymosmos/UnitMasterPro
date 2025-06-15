//https://www.linkedin.com/in/mousa123/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string choice;
    float seconds;
    double centimeters;
    float tempValue;

    // Display main menu
    cout << "Welcome to our converter program..." << endl;
    cout << "Choose the units you want to convert from the list or exit." << endl;
    cout << "1. Time" << endl << "2. Distance" << endl << "3. Temperature" << endl;
    cin >> choice;

    // Perform conversion based on user's choice
    if (choice == "Time")
    {
        cout << "Enter your time in seconds: ";
        cin >> seconds;
        int hours = seconds / 3600;  // Calculate hours
        seconds = seconds - hours * 3600;     // Subtract hours from total seconds

        int minutes = seconds / 60;       // Calculate minutes
        seconds = seconds - minutes * 60;  // Subtract minutes from remaining seconds
        int digits = 0;
        int mx;
        if (seconds >= hours && seconds >= minutes)
            mx = seconds;
        else if (minutes >= hours && minutes >= seconds)
            mx = minutes;
        else
            mx = hours;
        for (int i = mx; i != 0; digits++)
            i = i / 10;

        // Display converted time with precision of 2 decimal places
        cout << fixed << setprecision(2);
        cout << setw(digits + 3) << hours << " Hours " << endl
            << setw(digits + 3) << minutes << " Minutes " << endl
            << setw(digits + 3) << seconds << " Seconds ";
    }
    else if (choice == "Distance")
    {
        cout << "Enter your distance in cm: ";
        cin >> centimeters;
        int kilometers = centimeters / 100000;  // Calculate kilometers
        centimeters = centimeters - kilometers * 100000;

        int meters = centimeters / 100;    // Calculate meters
        centimeters = centimeters - meters * 100;

        int digits = 0;
        int mx;
        if (kilometers >= meters && kilometers >= centimeters)
            mx = kilometers;
        else if (meters >= kilometers && meters >= centimeters)
            mx = meters;
        else
            mx = centimeters;
        for (int i = mx; i != 0; digits++)
            i = i / 10;

        // Display converted distance with precision of 2 decimal places
        cout << fixed << setprecision(2);
        cout << setw(digits + 3) << kilometers << " Kilometers " << endl
            << setw(digits + 3) << meters << " Meters " << endl
            << setw(digits + 3) << centimeters << " Centimeters ";
    }
    else if (choice == "Temperature")
    {
        cout << "Enter your temperature in Fahrenheit: ";
        cin >> tempValue;
        float celsius = 5.0 / 9.0 * (tempValue - 32); // Calculate Celsius
        float kelvin = celsius + 273.15; // Calculate Kelvin

        int digits = 0;
        int mx;
        if (kelvin > celsius)
            mx = kelvin;
        else
            mx = celsius;

        for (int i = mx; i != 0; digits++)
            i = i / 10;
        // Display converted temperature with precision of 2 decimal places
        cout << fixed << setprecision(2);
        cout << setw(digits + 3) << celsius << " Celsius " << endl
            << setw(digits + 3) << kelvin << " Kelvin " << endl;
    }
    else
        cout << "Invalid input.";


    return 0;
}