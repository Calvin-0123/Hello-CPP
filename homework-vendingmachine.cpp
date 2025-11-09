// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: Vending machine
// Date ✅: 11.8.2025
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
#include <limits>
#include <iomanip>
#include <cctype>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

  const int c = 25;       // Price for Coffee
  const int t = 25;       // Price for Tea
  int coins = 0;          // Inserted for now
  int balance = 0;        // Total balance left
  char choice;            // Letter answered
  int quantity = 0;       // Number of items
  int total = 0;          // Total price
  bool running = true;     // For exit the loop

// Start
  while (running) {
    cout << "Welcome to the vending machine!" << endl;

// Insert coins
    do {

      cout << "Enter coins - 5, 10, 25 only, 0 to stop: ";
      cin >> coins;
      while ((!cin) || (coins!= 0 && coins != 5 && coins != 10 && coins != 25)){ //check if valid
        cin.clear();                                                             //clear the wrong status
        cin.ignore(numeric_limits<streamsize>::max(), '\n');                     //clear what just cin until the enter
        cout << "Invalid coin!";
        cout << "Please try again!";
        cout << "Enter coins - 5, 10, 25 only, 0 to stop: ";
        cin >> coins;
      }                                                                          // exit the loop
      balance += coins;
      if (coins != 0) {
        cout << "Your balance for now is: $" << fixed << setprecision(2) << (balance / 100.0) << endl;
      }  
    } while ( coins != 0 );
    cout << "\nYour balance is $" << fixed << setprecision(2) << (balance / 100.0) << "\n\n";

// Choose items
    cout << "Please pick an option ($0.25 each): C/c: Coffee, T/t: Tea, Q/q: Quit~\n";
    cin >> choice;
    choice = tolower(choice);

    while (choice != 'c' && choice != 't' && choice != 'q') {
      cout << "Invalid option!" << endl;
      cout << "Please try again!" << endl;
      cout << "Please pick an option ($0.25 each): C/c: Coffee, T/t: Tea, Q/q: Quit\n";
      cin >> choice;
      choice = tolower(choice);
    }                                                                         

    switch (choice) {
      case 'c':
        cout << "Your choice is Coffee\n";
        break;
      case 't':
        cout << "Your choice is Tea\n";
        break;
      case 'q':
        cout << "Your choice is quit\n";
        cout << "Your balance is $" << fixed << setprecision(2) << (balance / 100.0) << endl;
        cout << "Thank you for using my vending machine!\n";
        running = false; // Stop the loop
        break;
        default:
        cout << "Invalid choice!\n";
        break;
    }
    cout << "How many do you want?";
    cin >> quantity;
    if (choice == 'c') {
      total = c * quantity;
    } else {
      total = t * quantity;
    }
    while (total > balance) {
      do {
        cout << "You do not have enough balance, please enter coins." << endl;
        cout << "Enter coins - 5, 10, 25 only, 0 to stop: ";
        cin >> coins;
        while ((!cin) || (coins!= 0 && coins != 5 && coins != 10 && coins != 25)){ //check if valid
          cin.clear();                                                             //clear the wrong status
          cin.ignore(numeric_limits<streamsize>::max(), '\n');                     //clear what just cin until the enter
          cout << "Invalid coin!";
          cout << "Please try again!";
          cout << "Enter coins - 5, 10, 25 only, 0 to stop: ";
          cin >> coins;
        }                                                                          // exit the loop
        balance += coins;
        cout << "Your balance for now is: " << fixed << setprecision(2) << (balance / 100.0) << endl;
      } while ( coins != 0 );
      cout << "\nYour balance is $" << fixed << setprecision(2) << (balance / 100.0) << "\n\n";
    }
    cout << "Your total will be: $" << fixed << setprecision(2) << (total / 100.0) << endl;
    balance -= total;
    cout << "Your balance is: " << balance << endl;
    cout << "Thanks for using the vending machine.";
  }







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