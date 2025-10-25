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

    const int num_players = 3;
// If all same
    string name1, name2, name3;
    int rock1, rock2, rock3;
// If two same
    int c; // first
    string name;
    int d; // second
    string namee;
    int e; // third
    string nameee;
// If different
    int f; // second
    int g; // first

    double ave = (rock1 + rock2 + rock3) / num_players;

    cout << "Welcome!" << endl;
// Cin names and numbers.
    cout << "Enter player 1 name: " << endl;
        getline(cin, name1);
    cout << "How many rocks did " << name1 << " collect?" << endl;
        cin >> rock1;
    if (rock1 <0 ){
        rock1 = 0;
        cout << "Not a positive number, set for 0." << endl;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter player 2 name: " << endl;
        getline(cin, name2);
    cout << "How many rocks did " << name2 << " collect?" << endl;
        cin >> rock2;
    if (rock2 <0 ){
        rock2 = 0;
        cout << "Not a positive number, set for 0." << endl;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter player 3 name: " << endl;
        getline(cin, name3);
    cout << "How many rocks did " << name3 << " collect?" << endl;
        cin >> rock3;
    if (rock3 <0 ){
        rock3 = 0;
        cout << "Not a positive number, set for 0." << endl;
    }
// If they are same.
    if (rock1 == rock2 && rock2 == rock3) {
        cout << "It is a three-way tie!";
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    
// If they got two same. See which ones are same and compare to another.
    if (rock1 == rock2){
        if (rock2 > rock3){
            cout << name1 << " and " << name2 << " are same!" << endl;
            f = rock3;
            cout << f << " will be the second!" << endl;
        }
        else {g = rock3;
             cout << g << " got the first!" << endl;
             cout << rock1 << " and " << rock2 << " are same!" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (rock2 == rock3){
        if (rock2 > rock1){
            cout << name2 << " and " << name3 << " are same!" << endl;
            f = rock1;
            cout << f << " will be the second!" << endl;
        }
        else {g = rock1;
             cout << g << " got the first!" << endl;
             cout << rock2 << " and " << rock3 << " are same!" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (rock1 == rock3){
        if (rock1 > rock2){
            cout << name1 << " and " << name3 << " are same!" << endl;
            f = rock2;
            cout << f << " will be the second!" << endl;
        }
        else {g = rock2;
             cout << g << " got the first!" << endl;
             cout << rock1 << " and " << rock3 << " are same!" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
// If they are all different. See which is the biggest number.

    if (rock1 > rock2) {
        c = rock1;
        name = name1;
    }
    else {c = rock2;
         name = name2;
    }
    if (rock3 > c) {
        c = rock3;
        name = name3;
    }
// If they are all different. See which ones are second and third.
    if (c == rock1) {
        if (rock2 > rock3) {
            d = rock2;  namee = name2;
            e = rock3;  nameee = name3;
        } else {
            d = rock3;  namee = name3;
            e = rock2;  nameee = name2;
        }
        cout << c << " got first! " << d << " got second! " << e << "got third!" << endl;
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (c == rock2) {
        if (rock1 > rock3) {
            d = rock1;  namee = name1;
            e = rock3;  nameee = name3;
        } else {
            d = rock3;  namee = name3;
            e = rock1;  nameee = name1;
        }
        cout << c << " got first! " << d << " got second! " << e << "got third!" << endl;
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (c == rock3) {
        if (rock1 > rock2) {
            d = rock1;  namee = name1;
            e = rock2;  nameee = name2;
        } else {
            d = rock2;  namee = name2;
            e = rock1;  nameee = name1;
        }
        cout << c << " got first! " << d << " got second! " << e << "got third!" << endl;
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
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