// ------------- FILE HEADER -------------
// Author ✅: Calvin Li
// Assignment ✅:vending machine
// Date ✅:11.7.2025
// Citations: sample 6


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
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
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
int main() {

  int answer;
  double balance;
  char choice;
  int quantity;

//start
  cout << "Welcome to the vending machine!" << endl;

//insert money
  do{
    cout << "Enter coins - 5, 10, 25 only, 0 to stop." << endl;
    cin >> answer;
    if (answer != && answer != 0 && answer != 5 && answer != 10 && answer!= 25) {
      cout << "Invalid coin!" << endl;
      cout << "Try again" << endl;
      return
    }
    balance += answer;

  }
  while (answer != 0)

//print balance
  cout << "Your balance is: " << balance << endl;

//choose items
  do {
    cout << "Please pick an option" << endl;
    ch = tolower(ch);
    while (ch != 'c' && ch != 't' && ch != 'q')      
      cout << "Invalid option!" << endl;
      cout << "Try again." << endl;
      return
    }
    if (choice == C || c) {
      cout << "How many do you want?" << endl;
      cin >> quantity;
      balance -= quantity * 0.25;
      cout << "Your total is: " << balance << endl;
      }
    else if (choice == T || t) {
      cout << "How many do you want?" << endl;
      cin >> quantity;
      balance -= quantity * 0.25;
      cout << "Your total is: " << balance << endl;
      }
    else {
        cout << ""
      }
    } while (choice != Q && choice != q);



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