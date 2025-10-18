// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: Midterm
// Date ✅: 10.17.2025
// Citations: Midterm-Exam sample


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
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

    string name1, name2, name3;
    int rock1, rock2, rock3;

    cout << "Welcome!" << endl;

    cout << "Enter player 1 name: " << endl;
        getline(cin, name1);
    cout << "How many rocks did " << name1 << " collect?" << endl;
        cin >> rock1;
    if (rock1 <0 ){
        rock1 = 0;
        cout << "Not a positive number, set for 0." << endl;
    }

    cout << "Enter player 2 name: " << endl;
        getline(cin, name2);
    cout << "How many rocks did " << name2 << " collect?" << endl;
        cin >> rock2;
    if (rock2 <0 ){
        rock2 = 0;
        cout << "Not a positive number, set for 0." << endl;
    }

    cout << "Enter player 3 name: " << endl;
        getline(cin, name3);
    cout << "How many rocks did " << name3 << " collect?" << endl;
        cin >> rock3;
    if (rock3 <0 ){
        rock3 = 0;
        cout << "Not a positive number, set for 0." << endl;
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