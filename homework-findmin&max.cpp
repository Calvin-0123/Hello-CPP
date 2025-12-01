// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅:9
// Date ✅:11.30.2025
// Citations: sample 9


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
// A. INPUT ✅: count, value
// B. OUTPUT ✅: Welcome, how many do you want?, enter, enter a positive integer, no integers were entered, the min is, the max is
// C. CALCULATIONS ✅:minVal, maxVal, minPos, maxPos, loop
// D. LOGIC and ALGORITHMS ✅: print welcome, read, loop, print result, print thanks.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)
void welcome();
void getInput(int &num);
void doStats(int num);
void goodbye();

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    int count = 0;

    // Show welcome message
    welcome();

    // Get the number of integers to process
    getInput(count);

    // Check if the user entered a valid count (must be > 0)
    if (count <= 0) {
        cout << "No integers were entered." << endl;
    } else {
        // Only call doStats if we have a positive count
        doStats(count);
    }

    // Show goodbye message
    goodbye();

    return 0;
}

// Function implementations (if any)
// Prints the welcome message
void welcome() {
    cout << "Welcome to my Final Exam Practice." << endl;
}

// Prompts the user for the number of integers
// Read count
void getInput(int &num) {
    cout << "How many positive integers do you want to process? ";
    cin >> num;
}

// Find min and max
void doStats(int num) {
    int inputVal = 0;
    int minVal = 0;
    int maxVal = 0;
    int minPos = 0;
    int maxPos = 0;
    bool isFirst = true; // First valid number

    // Loop exactly 'num' times for valid integers
    for (int i = 1; i <= num; i++) {
        cout << "Enter integer #" << i << ": ";
        cin >> inputVal;

        // Validation: Must be strictly positive (> 0)
        if (inputVal <= 0) {
            cout << "Enter a positive integer!" << endl;
            // Decrement i so the loop repeats for this position
            i--;
        } else {
            // Processing valid input
            if (isFirst) {
                // If it's the first number, it is both min and max
                minVal = inputVal;
                maxVal = inputVal;
                minPos = i;
                maxPos = i;
                isFirst = false; // Turn off the flag
            } else {
                // Check for new minimum
                // Use < strictly to keep the FIRST occurrence position
                if (inputVal < minVal) {
                    minVal = inputVal;
                    minPos = i;
                }
                // Check for new maximum
                if (inputVal > maxVal) {
                    maxVal = inputVal;
                    maxPos = i;
                }
            }
        }
    }

    // Output the final statistics
    cout << "The minimum number entered was " << minVal << " entered in position " << minPos << "." << endl;
    cout << "The maximum number entered was " << maxVal << " entered in position " << maxPos << "." << endl;
}

// Prints the goodbye message
void goodbye() {
    cout << "Thank you for using my program." << endl;
}

// ------------- DESIGN -------------
/* 
Program Name: Find the min and max.

Program Description: It will find the min number and the max number.

Design:
A. INPUT
Define the input variables including name data type. 
    count, value
B. OUTPUT
Define the output variables including data types. 
    Welcome, how many do you want?, enter, enter a positive integer, no integers were entered, the min is, the max is
C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    minVal, maxVal, minPos, maxPos, loop
D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
    print welcome, read, loop, print result, print thanks.

SAMPLE RUNS
Copy from assignment document.

*/