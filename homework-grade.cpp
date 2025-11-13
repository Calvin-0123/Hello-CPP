// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅:7,grade calculator
// Date ✅:11.13.2025
// Citations: sample 7


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
void welcome();

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

    char grade;
    int qty_daily;
    float daily;
    float homework;
    float midterm;
    float finalterm;
    float total;
// Calculate the average for homework grade.
    cout << "Enter the number of assignments (0 to 10): " << endl;
    cin >> qty_daily;
    while((!cin) && (qty_daily < 0 && qty_daily > 10)) {
        cout << "Wrong input, please try again." << endl;
        cin >> qty_daily;
    }
    for (int i = 0; i < qty_daily; i++) {
        cout << "What is your grade for the homework " << i + 1 << " ? \nYour answer should be 0-4: " << endl;
        cin >> daily;
        while ((!cin) && (daily < 0 && daily >4)) {
            cout << "Wrong input, please try again!" << endl;
            cin >> daily;
        }
        homework += daily;
    }
    homework /= qty_daily;

// Midterm grade
    cout << "What is your grade for midterm exam? \nPlease enter your grade(0-4): " << endl;
    cin >> midterm;
    while((!cin) && (midterm < 0 && midterm > 4)) {
        cout << "Wrong input, please try again." << endl;
        cin >> midterm;
    }

//Finalterm grade
    cout << "What is your grade for finalterm exam? \nPlease enter your grade(0-4): " << endl;
    cin >> finalterm;
    while((!cin) && (finalterm < 0 && finalterm > 4)) {
        cout << "Wrong input, please try again." << endl;
        cin >> finalterm;
    }

//total
    total = (homework * 0.6) + (midterm * 0.2) + (finalterm * 0.2);
    cout << "Your total score is: " << total << endl;
    switch (total) {
        case (total <= 4 && total >=3.3):
            cout << "You got Grade A!";
            break
        case (total < 3.3 && total >= 2.8):
            cout << "You got Grade B!"; 
            break
        case (total < 2.8 && total >= 2):
            cout << "You got Grade C!";
            break
        case (total < 2 && total >= 1.2):
            cout << "You got Grade D!";
            break
        case (total < 1.2 && total >= 0):
            cout << "You got Grade F!";
            break
    }


    return 0;
}
void welcome() {
    cout << "Welcome to my Final Grade Calculator!" << endl;
    cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Grade calculator

Program Description: It will calculate your grade for you.

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