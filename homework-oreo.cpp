// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅:oreo
// Date ✅:9.30.2025
// Citations: sample 2


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
// A. INPUT ✅: Cookies eaten
// B. OUTPUT ✅: Servings and Calories eaten
// C. CALCULATIONS ✅: Servings = static_cast<double>(Cookies_Eaten) / Cookies_Per_Serving;
//                     Calories = Servings * Calories_Per_Serving;
// D. LOGIC and ALGORITHMS ✅:Read the numbers of cookies eaten and calculate,
//                           then cout to display.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

// Constants

  const int Cookies_Per_Serving = 5;
  const int Calories_Per_Serving = 160;

// Variables
  int Cookies_Eaten = 0;
  double Servings = 0.0;
  double Calories = 0.0;

// Welcome
  cout << "Welcome to the calories calculator" << endl;

// Input

  cout << "Enter the amout of oreos eaten: ";
  cin >> Cookies_Eaten;

// Calculations

  Servings = static_cast<double>(Cookies_Eaten) / Cookies_Per_Serving;
  Calories = Servings * Calories_Per_Serving;

// Output

  cout << fixed << showpoint << setprecision(1);
  cout << Cookies_Eaten << " Oreos equals " << Servings << " Servings!" << endl;
  cout << "You consumed " << Calories << " Calories!" << endl;
  cout << "Keep eating Oreos!" << endl;
  cout << "Thanks for using the calories calculator!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Calories calculator

Program Description: It can calculate how many servings and how much-
                    -calories you consumed.

Design:
A. INPUT
Define the input variables including name data type. 

Cookies eaten int = 0

B. OUTPUT
Define the output variables including data types. 

Servings and Calories eaten double = 0.0

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

- Servings = static_cast<double>(Cookies_Eaten) / Cookies_Per_Serving;
  Calories = Servings * Calories_Per_Serving;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

- Read the numbers of cookies eaten and calculate,then cout to display.

SAMPLE RUNS
Copy from assignment document.

- Welcome to the calories calculator
- Enter the amout of oreos eaten: 12
- 12 Oreos equals 2.4 Servings!
- You consumed 384.0 Calories!
- Keep eating Oreos!
- Thanks for using the calories calculator!
 
Normal program termination. Exit status: 0

*/