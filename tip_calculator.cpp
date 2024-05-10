#include <iostream>
#include <cmath> 

using namespace std;



int main () {

  //need to define our starting parts of the program

  // int tip;
  float input_bill;
  float input_tip; 
  int tip_and_bill;
  int input_people;
  int total_tip;
  int total;
  int grand_total;

  //1. Capture the user inputs
  //prompt the user for the following inputs for total amount

  cout << "What was the total amount for the bill?\n";
  cout << "$ ";
  cin >> input_bill;

  //ask how much tip to add to the total
  cout << "How much tip do you want to add 10, 12, 15, or 20%?\n";
  cout << "$ ";
  cin >> input_tip;

  //how many people want to split it
  cout << "How many people to split the check?\n";
  cin >> input_people;

  
//2. do the math for the tip calculator
  total_tip = (input_tip * 0.01) * input_bill;

  //3. add tip to bill
  tip_and_bill = total_tip + input_bill;

  //4. now split it with the amount of people.
  total = tip_and_bill/input_people;

  //5. output the final result
  grand_total = total;

  cout<< "Each person needds to pay $" << grand_total << " dollars ";
  
}


