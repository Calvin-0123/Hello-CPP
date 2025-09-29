// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: Payroll
// Date ✅:9.28.2025
// Citations: sample 1


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: user's ID number, hours worked, salary per hour, federal withholding
// B. OUTPUT ✅:Welcome, ID number, Total gross pay, Tax amoount, Net pay, Bye
// C. CALCULATIONS ✅:Salary per hour * hours worked = Total gross pay;
//                    Total gross pay * tax rate = Tax amount
//                    Total gross pay - tax = Net pay
// D. LOGIC and ALGORITHMS ✅:Calculating user's input and output to display
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
// Setting base
  int ID = 0;
  float Hours = 0;
  float Salaryperhour = 0;
  int Taxrate = 0;
  float Total = 0;
  float Tax = 0;
  float Net = 0;

// user input

  cout << "Enter your ID number: ";
  cin >> ID;
  cout << "Enter your working hours: ";
  cin >> Hours;
  cout << "Enter your salary per hour: ";
  cin >> Salaryperhour;
  cout << "Enter federal withholding rate: ";
  cin >> Taxrate;

// calculating

  Total = Hours * Salaryperhour;
  Tax = (Total * Taxrate) / 100;
  Net = Total - Tax;

//output

  cout << "Welcome to your payroll calculator!" << endl;
  cout << "Your total gross pay is: " << Total << endl;
  cout << "Your tax amount is: " << Tax << endl;
  cout << "Your Total net pay is: " << Net << endl;
  cout << "Thanks for using this program!" << endl;

  return 0;
}