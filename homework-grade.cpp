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
// A. INPUT ✅: int numAssigns, double assignment scores, double midterm, double finalExam
// B. OUTPUT ✅: double finalScore, char letter
// C. CALCULATIONS ✅: Assignment average, Final numeric score, Letter grade based on finalScore
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototypes (if any)
void welcome();
int readInt(string prompt);
double readScore(string prompt);
double assignAverage(int numAssigns);
double calcFinalScore(double assignAvg, double midterm, double finalExam);
char calcLetterGrade(double finalScore);

// Constants
const double ASSIGN_WEIGHT = 0.6;
const double MID_WEIGHT    = 0.2;
const double FINAL_WEIGHT  = 0.2;

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

    int numAssigns;
    double assignAvg;
    double midterm;
    double finalExam;
    double finalScore;
    char letter;

    welcome();

    numAssigns = readInt("Enter the number of assignments (0 to 10): ");
    assignAvg = assignAverage(numAssigns);

    midterm   = readScore("Enter your midterm exam score: ");
    finalExam = readScore("Enter your final exam score: ");

    finalScore = calcFinalScore(assignAvg, midterm, finalExam);
    letter = calcLetterGrade(finalScore);

    cout << fixed << setprecision(1);
    cout << "Your Final Numeric score is " << finalScore << endl;
    cout << "Your Final Grade is " << letter << endl;
    cout << "Thank you for using my Grade Calculator!" << endl;

    return 0;
}

// Function implementations

void welcome() {
    cout << "Welcome to my Final Grade Calculator!" << endl;
    cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;
}

int readInt(string prompt) {
    int value;
    bool valid = false;

    while (!valid) {
        cout << prompt;
        if (!(cin >> value)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Illegal Value! Please try again!!" << endl;
        } else if (value < 0 || value > 10) {
            cout << "Illegal Value! Please try again!!" << endl;
        } else {
            valid = true;
        }
    }

    return value;
}

double readScore(string prompt) {
    double score;
    bool valid = false;

    while (!valid) {
        cout << prompt;
        if (!(cin >> score)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Illegal Score! Please try again!" << endl;
        } else if (score < 0 || score > 4) {
            cout << "Illegal Score! Please try again!" << endl;
        } else {
            valid = true;
        }
    }

    return score;
}

double assignAverage(int numAssigns) {
    if (numAssigns == 0) {
        return 0.0;
    }

    double sum = 0.0;
    double score;

    for (int i = 1; i <= numAssigns; i++) {
        string prompt = "Enter score " + to_string(i) + ": ";
        score = readScore(prompt);
        sum += score;
    }

    return sum / numAssigns;
}

double calcFinalScore(double assignAvg, double midterm, double finalExam) {
    double finalScore;
    finalScore = assignAvg * ASSIGN_WEIGHT
               + midterm   * MID_WEIGHT
               + finalExam * FINAL_WEIGHT;
    return finalScore;
}

char calcLetterGrade(double finalScore) {
    if (finalScore >= 3.3 && finalScore <= 4.0) {
        return 'A';
    } else if (finalScore >= 2.8 && finalScore < 3.3) {
        return 'B';
    } else if (finalScore >= 2.0 && finalScore < 2.8) {
        return 'C';
    } else if (finalScore >= 1.2 && finalScore < 2.0) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Grade calculator

Program Description: It will calculate your grade for you.

Design:
A. INPUT
Define the input variables including name data type. 
    int numAssigns, double assignment scores, double midterm, double finalExam

B. OUTPUT
Define the output variables including data types.
    double finalScore, char letter 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    Assignment average, Final numeric score, Letter grade based on finalScore

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/