// ------------- FILE HEADER -------------
// Author ✅: Calvin Li
// Assignment ✅: number 5, pizza
// Date ✅: 10.28.2025
// Citations:  sample 5


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
// A. INPUT ✅: number of people, yes or no
// B. OUTPUT ✅: welcome, number of pizzas, cost, tax, delivery, total
// C. CALCULATIONS ✅: cost, tax, delivery, total
// D. LOGIC and ALGORITHMS ✅: ask number of people and calculating.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   

    //Welcome to my Pizza Party Statistics program!

    //Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

    //Number of pizzas: 4
    //Cost of pizzas:  $42.00
    //Tax:             $2.94
    //Delivery:        $8.99
    //Total Cost:      $53.93

    //Do you want to enter more (y/n): y

// ------------- CODE -------------
#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    int numPizzas;
    int numPeople;
    int totalPizzas = 0;

    int entries = 0;
    double pizzaCost;
    double avePizzasPerEntries;
    int maxPeople = 0;
    double maxCost = 0.0;

    const double taxrate = 0.07;
    const double deliveryfee = 0.20;
    const int pizzaSlices = 8;
    char answer;

    cout << "Welcome to my Pizza Party Statistics program!" << endl;
    do {
        cout << "Enter the number of pizzas, total of people, "
                "and the total cost of pizzas separated by a space: " << endl;
        cin >> numPizzas >> numPeople >> pizzaCost;

        double tax = pizzaCost * taxrate;
        double delivery = (pizzaCost + tax) * deliveryfee;
        double total = pizzaCost + tax + delivery;

        cout << fixed << setprecision(2);
        cout << "Number of pizzas: " << numPizzas << endl;
        cout << "Cost of pizzas: " << pizzaCost << endl;
        cout << "Tax: " << tax << endl;
        cout << "Delivery: " << delivery << endl;
        cout << "Total cost: " << total << endl;

        cout << "Do you want to enter more? (y/n): " << endl;
        cin >> answer;
        answer = tolower(answer);

        entries += 1;
        totalPizzas += numPizzas;
        avePizzasPerEntries = static_cast<double>(totalPizzas) / entries;

        if (numPeople > maxPeople) {
            maxPeople = numPeople;
        }
        if (total > maxCost) {
            maxCost = total;
        }
    }
        while (answer == 'y');

        cout << fixed << setprecision(2);
        cout << "Number of entries: " << entries << endl;
        cout << "Total number of pizzas: " << totalPizzas << endl;
        cout << "Average number of pizzas: " << fixed << setprecision(1) << avePizzasPerEntries << endl;
        cout << "Maximum number of people: " << maxPeople << endl;
        cout << "Maximum cost of pizzas: " << maxCost;

        cout << "Thank you for using my program!" << endl;

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
    number of people, yes or no
B. OUTPUT
Define the output variables including data types. 
    OUTPUT ✅: welcome, number of pizzas, cost, tax, delivery, total
C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    CALCULATIONS ✅: cost, tax, delivery, total
D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
    LOGIC and ALGORITHMS ✅: ask number of people and calculating.

SAMPLE RUNS
Copy from assignment document.

*/