#include <iostream>
#include "std_lib_facilities.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */


/*
Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14 * 4 5
Read the operation into a string called operation and use an if-statement to figure out which operation the user wants,
for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations
called +, –, *, /, plus, minus, mul, and div with their obvious meanings.

*/

int main() {

  string operation;
  double operand1;
  double operand2; 

  cout << "Choose an operation (+,-,*,/) then two operands (seperated by a space)\n";

//reads operation and values
cin>>operation>>operand1>>operand2;

double result;

//if statements with different operations
  if(operation=="+"||operation=="plus"){
    result=operand1+operand2;
    cout<<result;
  }else if(operation=="-"||operation=="minus")
  {
    result=operand1-operand2;
    cout<<result;
  }
  else if(operation=="*"||operation=="mul")
  {
    result=operand1*operand2;
    cout<<result;
  }
  else if(operation=="/"||operation=="div")
  {
    result=operand1/operand2;
    cout<<result;
  }
else
cout<<"Invalid operation";


} 