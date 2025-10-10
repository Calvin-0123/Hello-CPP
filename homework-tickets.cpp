// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: 3
// Date ✅: 10.9.2025
// Citations: sample 3


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
// A. INPUT ✅: if riding a vehicle on the ferry; numbers of adults, seniors, youths, bikes.
// B. OUTPUT ✅: Welcome and bye. Total charges. If spend more...; 
// C. CALCULATIONS ✅: Total charges. 100 - total charges. number of people, bikes.
// D. LOGIC and ALGORITHMS ✅: calculate people, total price, and bikes.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {
  
  const double v_ad_p = 57.90;
  const double ad_p = 14.95;
  const double sen_p = 7.40;
  const double you_p = 5.55;
  const double bikes_p = 4.00;
  char an;
  int v_ad = 0;
  int ad = 0;
  int sen = 0;
  int you = 0;
  int bikes = 0;
  double total;
  double hun;
  int num_people;

  cout << "Welcome to your tickets calculator! Using Y/N to answer questions!" << endl;
  cout << endl;
  cout << "Fare Description" << endl;
  cout << "--------------------------------------------    ------" << endl;
  cout << "Vehicle Under 14' (less than 168\") & Driver    $57.90" << endl;
  cout << "Adult (age 19 - 64)                             $14.95" << endl;
  cout << "Senior (age 65 & over) / Disability             $7.40" << endl;
  cout << "Youth (age 6 - 18)                              $5.55" << endl;
  cout << "Bicycle Surcharge (included with Vehicle)       $4.00" << endl;

  cout << "--------------------------------------------    ------" << endl;

  cout << "Did you ride a vehicle?" << endl;
  if (!(cin >> an)) { 
    cout << "Wrong input, please try again later!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  }
    an = static_cast<char>(tolower(an));
 
  if (an != 'y' && an != 'n'){
    cout << "Wrong input, please try again later!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  }
  
  if (an == 'y') {
    v_ad = 1;
    bikes = 0;

    cout << "How many adults you have?" << endl;
    if (!(cin >> ad) || ad < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
    }
    if (ad > 0) {
      ad -=1;
    }
    cout << "How many seniors you have?" << endl;
    if (!(cin >> sen) || sen < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
    }

    cout << "How many youths you have?" << endl;
    if (!(cin >> you) || you < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
    }
  }
    else if (an == 'n') {
    v_ad = 0;
    
    cout << "How many adults you have?" << endl;
    if (!(cin >> ad) || ad < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
    }
    cout << "How many seniors you have?" << endl;
    if (!(cin >> sen) || sen < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  }
    cout << "How many youths you have?" << endl;
    if (!(cin >> you) || you < 0) {
    cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  }
    cout << "How many bikes you have?" << endl;
    if (!(cin >> bikes) || bikes < 0) {
      cout << "Wrong input, please try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  }
}
  num_people = ad + sen + you;

  if (num_people > 20) {
    cout << "Uh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
  } 

    cout << fixed << showpoint << setprecision(2);

  total =  v_ad_p * v_ad + ad_p * ad + sen_p * sen + you_p * you + bikes_p * bikes;
  if (total < 100){
    hun = 100 - total;
    cout << endl;
    cout << "Your total charges will be $" << total << endl;
    cout << endl;
    cout << "If you spend $" << hun << " more, you will get a free adult ticket!" << endl;
    cout << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
  }
  else if (total >= 100){
    cout << "Your total charges will be $" << total << endl;
    cout << "                      ****                 ******************" << endl;
    cout << "Your purchase is over $100, you will get a free adult ticket!" << endl;
    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
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