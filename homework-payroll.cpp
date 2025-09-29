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
  float hours = 0.0;
  float salaryperhour = 0.0;
  int taxrate = 0;
  float total = 0.0;
  float tax = 0.0;
  float net = 0.0;

// user input

  cout << "Enter your ID number: ";
  cin >> ID;
  cout << "Enter your working hours: ";
  cin >> hours;
  cout << "Enter your salary per hour: ";
  cin >> salaryperhour;
  cout << "Enter federal withholding rate: ";
  cin >> taxrate;

// calculating

  total = hours * salaryperhour;
  tax = (total * taxrate) / 100;
  net = total - tax;

//output

  cout << "Welcome to your payroll calculator!" << endl;
  cout << "Your total gross pay is: " << total << endl;
  cout << "Your tax amount is: " << tax << endl;
  cout << "Your Total net pay is: " << net << endl;
  cout << "Thanks for using this program!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/