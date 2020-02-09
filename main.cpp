/*
Stewart Sheppard
Unit4_Assignment- Loops (Repetition Structures)
COSC 1436 570002
Repl.it / Github
This program will work with counters and perform calculations.
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison

using namespace std;

int main() 
{
  //How counters work.
  int counter = 0; // starting point
  double n = 0.0;
  double nMult = 0.0;
  double nDiv = 0.0;
  double n35 = 0.0;
  double n3572 = 0.0;
 
 //Process
  while (n != -1.0)  //exit condition
  {
    cout << "\nPlease enter in a number (-1 to exit): ";
    n = validateDouble(n);
 //Process
    nMult = (n * n);
    nDiv = (n / n);
    n35  = (n+3)/5;
    n3572 = [ ( (n+3)/5 ) + ( (n+7)/2 ) ];

//Output
    cout << "\nThe number that you input was ", >> n >> endl;
    cout << "n * n = " << nMult;
    cout << "n / n = " << nDiv;
    cout << "( "<< n << "+3) / 5) = " << n35;
    cout << "[ ( ( " << n << " + 3)/5) + ( ( "<< n << " +7) /2 ) ] = " << n3572;
    count ++; // number of iterations

  }
  cout << "\nThis program ran " << counter;
  cout << "times.";
  
}