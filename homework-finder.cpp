// ------------- FILE HEADER -------------
// Author ✅: Calvin
// Assignment ✅: Four, find
// Date ✅:10.14.2025
// Citations: Sample 4


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
// A. INPUT ✅: Two phrases
// B. OUTPUT ✅:Check same or one of them in another one.
// C. CALCULATIONS ✅:None
// D. LOGIC and ALGORITHMS ✅:Using if and find statement to check same or one of them in another one.
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   
//Welcome 
//Please enter your first phrase
//Please enter your second phrase
//They are same/ Found phrase 1 in phrase 2.
//Thanks for using.


// ------------- CODE -------------
#include <iostream>
#include <string>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

// Set string 

    string phrase1;  
  string phrase2;

// Get all the inputs into strings.

  cout << "Welcome to the finder." << endl;
  cout << "Please enter your first phrase: ";
  getline(cin, phrase1);
  cout << "You entered: " << phrase1 << endl;
  cout << "Please enter your second phrase: ";
  getline(cin, phrase2);
  cout << "You entered: " << phrase2 << endl;

// Check if same. Else find the one in another one.

  if (phrase1 == phrase2){
    cout << "They are same.";
  }
  else {
    size_t pos12 = phrase2.find(phrase1);
    size_t pos21 = phrase1.find(phrase2);

// If no error, cout "1 is found in 2". And cout the input after the found thing.

    if (pos12 != string::npos){

        cout << phrase1 << " is found in " << phrase2 << endl;
        cout << phrase2.substr(pos12) << endl;
    }
    else if (pos21 != string::npos){
        cout << phrase2 << " is found in " << phrase1 << endl;
        cout << phrase1.substr(pos21) << endl;
    }
    else {
        cout << "No match" << endl;
    }
  }
  
  cout << "\nThanks for using the finder!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Finder

Program Description: It can find a phrase in another phrase

Design:
A. INPUT 
Define the input variables including name data type. 
    Two phrases

B. OUTPUT
Define the output variables including data types. 
    Same, phrase1 is found in phrase2, phrase2 is found in phrase1, not match

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
    None

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt
    Using if and find statement to check same or one of them in another one.


SAMPLE RUNS
Copy from assignment document.

Welcome to the finder.
Please enter your first phrase: I do not know.
You entered: I do not know.
Please enter your second phrase: no
You entered: no
no is found in I do not know.
not know.

Thanks for using the finder!
 
Normal program termination. Exit status: 0

*/