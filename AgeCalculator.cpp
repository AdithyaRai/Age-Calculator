#include<iostream>
using namespace std;    
 class AgeCalculator {
public:
    // Function to calculate age based on birth year
    int calculateAge(int birthYear) {
        int currentYear = 2025; // Assuming the current year is 2023
        return currentYear - birthYear;
    }
    // Function to display the age
    void displayAge(int age) {
        cout << "Your age is: " << age << " years." << endl;
    }
    // Function to get user input for birth year
    int getBirthYear() {
        int birthYear;
        cout << "Enter your birth year: ";
        cin >> birthYear;
        return birthYear;
    }
    // Main function to run the age calculator
    void run() {
        int birthYear = getBirthYear();
        int age = calculateAge(birthYear);
        displayAge(age);
    }
};  
int main() {
    AgeCalculator ageCalculator;
    ageCalculator.run();
    return 0;
}