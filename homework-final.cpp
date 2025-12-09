// ------------- FILE HEADER -------------
// Author ✅: Calvin 
// Assignment ✅: final
// Date ✅:12.9.2025
// Citations: sample final


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
// A. INPUT ✅: weekly goal, daily miles
// B. OUTPUT ✅:welcome and bye, prompts, error message, total miles, goal status, difference
// C. CALCULATIONS ✅: total, over goal, under goal
// D. LOGIC and ALGORITHMS ✅: main control,goal check,loop,validation,calculation,result
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)
void welcome();
void goodbye();
void getInput(int &goal);
int calcTotal();
// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    int goal = 0;
    int totalMiles = 0;
    int difference = 0;

    // 1. Welcome Message
    welcome();

    // 2. Get Goal Input (Pass by Reference)
    getInput(goal);

    // 3. Check if goal is valid to proceed
    if (goal <= 0) {
        cout << "No miles were tracked this week." << endl;
    } 
    else {
        // 4. Call function to get daily miles and calculate total
        totalMiles = calcTotal();

        // 5. Output results
        cout << "You rode " << totalMiles << " miles this week." << endl;

        if (totalMiles == goal) {
            cout << "Good job! You met your goal!" << endl;
        } 
        else if (totalMiles > goal) {
            difference = totalMiles - goal;
            cout << "Great job! You exceeded your goal by " << difference << " miles!" << endl;
        } 
        else {
            difference = goal - totalMiles;
            cout << "Uh oh! You missed your goal by " << difference << " miles!" << endl;
        }
    }

    // 6. Goodbye Message
    goodbye();

    return 0;
}

// Function implementations (if any)
// Function to print welcome message
void welcome() {
    cout << "Welcome to my Miles Tracker program." << endl;
}

// Function to print goodbye message
void goodbye() {
    cout << "Keep riding!" << endl;
}

// Function to get the goal. 
// Uses a reference parameter (&goal) so the change affects the variable in main().
void getInput(int &goal) {
    cout << "How many miles do you want to ride this week? ";
    cin >> goal;
}

// Function to prompt for daily miles, validate input, and return the sum.
int calcTotal() {
    int total = 0;
    int dailyMiles = 0;

    // Loop for 7 days (0 = Sunday to 6 = Saturday)
    for (int i = 0; i < 7; ++i) {
        
        // Inner loop ensures we stay on the same day until valid input is given
        while (true) {
            cout << "How many miles did you ride on ";

            // Using switch to print days because arrays/strings are forbidden
            switch (i) {
                case 0: cout << "Sunday"; break;
                case 1: cout << "Monday"; break;
                case 2: cout << "Tuesday"; break;
                case 3: cout << "Wednesday"; break;
                case 4: cout << "Thursday"; break;
                case 5: cout << "Friday"; break;
                case 6: cout << "Saturday"; break;
            }
            cout << "? ";
            cin >> dailyMiles;

            // Validation: Miles cannot be negative
            if (dailyMiles < 0) {
                cout << "Miles must be 0 or greater!" << endl;
                // Loop continues, prompting for the same day again
            } else {
                // Valid input: add to accumulator and break inner loop to move to next day
                total += dailyMiles;
                break; 
            }
        }
    }

    return total;
}

/*
// DESIGN SECTION (Pseudocode)

// Module: Main Program
// Purpose: Orchestrate the flow of the miles tracker program
START
    DECLARE integer goal
    DECLARE integer totalMiles
    DECLARE integer difference

    CALL WelcomeMessage()

    // Pass goal by reference to modify the variable in main
    CALL GetInput(goal)

    IF goal <= 0 THEN
        PRINT "No miles were tracked this week."
    ELSE
        SET totalMiles = CALL CalcTotal()
        
        PRINT "You rode " + totalMiles + " miles this week."

        IF totalMiles == goal THEN
            PRINT "Good job! You met your goal!"
        ELSE IF totalMiles > goal THEN
            SET difference = totalMiles - goal
            PRINT "Great job! You exceeded your goal by " + difference + " miles!"
        ELSE
            SET difference = goal - totalMiles
            PRINT "Uh oh! You missed your goal by " + difference + " miles!"
        END IF
    END IF

    CALL GoodbyeMessage()
END

// Module: WelcomeMessage
// Purpose: Display start banner
FUNCTION WelcomeMessage()
    PRINT "Welcome to my Miles Tracker program."
END FUNCTION

// Module: GoodbyeMessage
// Purpose: Display end banner
FUNCTION GoodbyeMessage()
    PRINT "Keep riding!"
END FUNCTION

// Module: GetInput
// Purpose: Ask user for their weekly goal
// Parameters: Integer goal (Reference)
FUNCTION GetInput(Reference Integer goal)
    PRINT "How many miles do you want to ride this week? "
    INPUT goal
END FUNCTION

// Module: CalcTotal
// Purpose: Loop through days, validate input, and sum miles
// Returns: Integer (Total Miles)
FUNCTION CalcTotal() RETURNS Integer
    DECLARE integer total = 0
    DECLARE integer dailyMiles
    DECLARE integer day

    // Loop from 0 to 6 for 7 days
    FOR day = 0 to 6 DO
        DECLARE boolean valid = FALSE
        
        // Loop until valid input is received for the specific day
        WHILE valid is FALSE DO
            PRINT "How many miles did you ride on "
            
            // Switch case to print day name without using strings
            SWITCH day DO
                CASE 0: PRINT "Sunday"
                CASE 1: PRINT "Monday"
                CASE 2: PRINT "Tuesday"
                CASE 3: PRINT "Wednesday"
                CASE 4: PRINT "Thursday"
                CASE 5: PRINT "Friday"
                CASE 6: PRINT "Saturday"
            END SWITCH
            
            PRINT "? "
            INPUT dailyMiles

            IF dailyMiles < 0 THEN
                PRINT "Miles must be 0 or greater!"
            ELSE
                SET total = total + dailyMiles
                SET valid = TRUE
            END IF
        END WHILE
    END FOR

    RETURN total
END FUNCTION
*/

// ------------- DESIGN -------------
/* 
Program Name: miles calculator

Program Description: calculate miles

Design:
A. INPUT
Define the input variables including name data type. 
    weekly goal, daily miles
B. OUTPUT
Define the output variables including data types. 
    welcome and bye, prompts, error message, total miles, goal status, difference
C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    total, over goal, under goal
D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
    main control,goal check,loop,validation,calculation,result

SAMPLE RUNS
Copy from assignment document.

*/