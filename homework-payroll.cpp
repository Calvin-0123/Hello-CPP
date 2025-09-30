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

  cout << "Hello staff ~" << ID << "~ Welcome to your payroll calculator!" << endl;
  cout << "Your total gross pay is: " << Total << endl;
  cout << "Your tax amount is: " << Tax << endl;
  cout << "Your Total net pay is: " << Net << endl;
  cout << "Thanks for using this program!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Payroll Calculator

Program Description: This program can help people to calculate their salary.

Design:
A. INPUT
Define the input variables including name data type. 

- ID                : int
- Hours             : float
- Hourly Rate       : float
- Withholding Rate  : int

B. OUTPUT
Define the output variables including data types. 

- Welcome
- Total Gross Pay : float
- Tax Amount      : float
- Net Pay         : float
- Bye

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

- Salary per hour * hours worked = Total gross pay;
- Total gross pay * tax rate = Tax amount
- Total gross pay - tax = Net pay

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

- Calculating user's input and output to display

SAMPLE RUNS

- Enter your ID number: 12345
- Enter your working hours: 40
- Enter your salary per hour: 18.5
- Enter federal withholding rate: 10
- Hello staff ~12345~ Welcome to your payroll calculator!
- Your total gross pay is: 740
- Your tax amount is: 74
- Your Total net pay is: 666
- Thanks for using this program!
 
Normal program termination. Exit status: 0

Copy from assignment document.

*/