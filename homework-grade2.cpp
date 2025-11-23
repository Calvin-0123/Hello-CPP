// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: a8
// Date ✅:11.23.2025
// Citations: sample 8


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
//     number of assignments (int), individual assignment scores(double), midterm and final exam scores(double)
// B. OUTPUT ✅:
//     final calculated numeric score(double), final letter grade(char)
// C. CALCULATIONS ✅:
//     Average = Sum of assignments / Total assignments, Final Score = (Avg * 0.6) + (Midterm * 0.2) + (Final * 0.2)

// D. LOGIC and ALGORITHMS ✅:
//1. Show welcome message.
//2. Read number of assignments (validate 0-10).
//3. Loop to read each assignment score and calculate average (validate 0-4).
//4. Read Midterm and Final Exam scores (validate 0-4).
//5. Calculate Final Score using the weights.
//6. Determine Letter Grade (A, B, C, D, F) based on the Final Score.
//7. Output the Final Score and Letter Grade.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Constants for weighting
const double W_ASSIGN = 0.6;
const double W_EXAM = 0.2;

// Function prototypes
void welcome();
int readInt(string);
void readScore(string, double &);
double assignAverage(int);
void getInput(double &, double &);
double calcFinalScore(double, double, double);
void calcLetterGrade(double, char &);


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    int count; // number of assignments
    double avg;
    double midScore;
    double finalExam;
    double totalScore;
    char grade;

    welcome();

    // get assignment count (0-10)
    count = readInt("Enter the number of assignments (0 to 10): ");
    
    // Validation loop for assignment count
    while (count < 0 || count > 10) {
        cout << "Illegal Value! Please try again!!" << endl;
        count = readInt("Enter the number of assignments (0 to 10): ");
    }

    // calculate assignment average
    avg = assignAverage(count);

    // get exam scores
    getInput(midScore, finalExam);

    // calculate final
    totalScore = calcFinalScore(avg, midScore, finalExam);

    cout << fixed << setprecision(1);
    cout << "Your Final Numeric score is " << totalScore << endl;

    // determine letter grade
    calcLetterGrade(totalScore, grade);
    cout << "Your Final Grade is " << grade << endl;

    cout << "Thank you for using my Grade Calculator!" << endl;

    return 0;
}

// Function implementations

// Print the welcome message
void welcome() {
    cout << "Welcome to my Final Grade Calculator!" << endl;
    cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;
}

// Reads integer input with basic error checking
int readInt(string prompt) {
    int val;
    bool isGood = false;

    while (!isGood) {
        cout << prompt;
        if (cin >> val) {
            isGood = true;
        } else {
            cout << "Illegal Value! Please try again!!" << endl;
            cin.clear();
            cin.ignore(100, '\n'); 
        }
    }
    return val;
}

// Reads double score with validation 0-4
void readScore(string prompt, double &num) {
    bool done = false;

    while (!done) {
        cout << prompt;
        if (cin >> num) {
            if (num >= 0 && num <= 4.0) {
                done = true;
            } else {
                cout << "Illegal Score! Please try again!" << endl;
            }
        } else {
            cout << "Illegal Score! Please try again!" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
    }
}

// Loop to get all assignment scores
double assignAverage(int count) {
    if (count == 0) return 0.0;

    double total = 0.0;
    double tempScore;

    for (int i = 1; i <= count; i++) {
        // Construct the string for prompt
        string s = "Enter score " + to_string(i) + ": ";
        readScore(s, tempScore);
        total += tempScore;
    }

    return total / count;
}

// Get midterm and final exam using reference parameters
void getInput(double &midterm, double &finalEx) {
    readScore("Enter your midterm exam score: ", midterm);
    readScore("Enter your final exam score: ", finalEx);
}

// Calculate weighted score
double calcFinalScore(double avg, double mid, double fin) {
    // 60% assignments, 20% each exam
    return (avg * W_ASSIGN) + (mid * W_EXAM) + (fin * W_EXAM);
}

// Determine letter grade from score
void calcLetterGrade(double score, char &grade) {
    if (score >= 3.3 && score <= 4.0) {
        grade = 'A';
    } else if (score >= 2.8 && score < 3.3) {
        grade = 'B';
    } else if (score >= 2.0 && score < 2.8) {
        grade = 'C';
    } else if (score >= 1.2 && score < 2.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Grade 
    calculator

Program Description: 
    Calculates a student's final grade using weighted averages for assignments (60%) and exams (40%).

Design:
A. INPUT
Define the input variables including name data type. 
    number of assignments (int), individual assignment scores(double), midterm and final exam scores(double)

B. OUTPUT
Define the output variables including data types. 
    final calculated numeric score(double), final letter grade(char)

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    Average = Sum of assignments / Total assignments, Final Score = (Avg * 0.6) + (Midterm * 0.2) + (Final * 0.2)

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
1. Show welcome message.
2. Read number of assignments (validate 0-10).
3. Loop to read each assignment score and calculate average (validate 0-4).
4. Read Midterm and Final Exam scores (validate 0-4).
5. Calculate Final Score using the weights.
6. Determine Letter Grade (A, B, C, D, F) based on the Final Score.
7. Output the Final Score and Letter Grade.

SAMPLE RUNS
Copy from assignment document.

*/