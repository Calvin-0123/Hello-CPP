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
// A. INPUT ✅: names and numbers.
// B. OUTPUT ✅: their order and the average
// C. CALCULATIONS ✅:comparison and the average
// D. LOGIC and ALGORITHMS ✅:To compare their orders and list them. Tells the average number.
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
    string f; // second
    string g; // first

    cout << "Welcome!" << endl;
// Cin names and numbers.
    cout << "Enter player 1 name: " << endl;
    getline(cin, name1);
    cout << "How many rocks did " << name1 << " collect?" << endl;

    if (!(cin >> rock1)) {
        cout << "Invalid amount. 0 will be entered." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        rock1 = 0;
    } else {
        if (rock1 < 0) {
            rock1 = 0;
            cout << "Not a positive number, set for 0." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 成功读取后清掉换行
    }

    cout << "Enter player 2 name: " << endl;
    getline(cin, name2);
    cout << "How many rocks did " << name2 << " collect?" << endl;

    if (!(cin >> rock2)) {
        cout << "Invalid amount. 0 will be entered." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        rock2 = 0;
    } else {
        if (rock2 < 0) {
            rock2 = 0;
            cout << "Not a positive number, set for 0." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter player 3 name: " << endl;
    getline(cin, name3);
    cout << "How many rocks did " << name3 << " collect?" << endl;

    if (!(cin >> rock3)) {
        cout << "Invalid amount. 0 will be entered." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        rock3 = 0;
    } else {
        if (rock3 < 0) {
            rock3 = 0;
            cout << "Not a positive number, set for 0." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << fixed << setprecision(2);
    double ave = (rock1 + rock2 + rock3) / static_cast<double>(num_players);

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
            f = name3;
            cout << f << " will be the second!" << endl;
        }
        else {g = name3;
             cout << g << " got the first!" << endl;
             cout << name1 << " and " << name2 << " are same!" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (rock2 == rock3){
        if (rock2 > rock1){
            cout << name2 << " and " << name3 << " are same!" << endl;
            f = name1;
            cout << f << " will be the second!" << endl;
        }
        else {g = name1;
             cout << g << " got the first!" << endl;
             cout << name2 << " and " << name3 << " are same!" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The average is " << ave << endl;
        return 0;
    }
    else if (rock1 == rock3){
        if (rock1 > rock2){
            cout << name1 << " and " << name3 << " are same!" << endl;
            f = name2;
            cout << f << " will be the second!" << endl;
        }
        else {g = name2;
             cout << g << " got the first!" << endl;
             cout << name1 << " and " << name3 << " are same!" << endl;
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
        cout << name << " got first! " << namee << " got second! " << nameee << " got third!" << endl;
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
        cout << name << " got first! " << namee << " got second! " << nameee << " got third!" << endl;
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
        cout << name << " got first! " << namee << " got second! " << nameee << " got third!" << endl;
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
 names and numbers.
B. OUTPUT
Define the output variables including data types. 
 their order and the average
C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
 comparison and the average
D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
To compare their orders and list them. Tells the average number.

SAMPLE RUNS
Copy from assignment document.

Welcome!
Enter player 1 name: 
li
How many rocks did li collect?
2
Enter player 2 name: 
wang
How many rocks did wang collect?
3
Enter player 3 name: 
ni
How many rocks did ni collect?
4
ni got first! wang got second! li got third!
The average is 3.00
 
Normal program termination. Exit status: 0

*/