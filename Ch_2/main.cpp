//
//  main.cpp
//  Throttle.cpp
//
//  Created by Victor Garcia on 10/2/22.
//

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cassert>
#include <cstdlib>
#include "throttle.h"

int main() {
  using namespace std;
  using namespace garcia_vic_2A;
  
  //Initialize a new object
  throttle control;
  //Initialize a new variable
  int user_input;
  
  cout << "Please enter a numner between 0 and 6: ";
  cin >> user_input;
  
  assert (user_input >= -6);
  assert(user_input <= 6);
  
  control.shift(user_input);
  
  while (control.is_on())
  {
      cout << "THe flow is now " << control.flow() << endl;
      control.shift(-1);
  }
  
  if (!control.is_on())
      cout << "The flow is OFF";
  
  cout << "\nlimit of throttle: " << control.return_top() << endl;
  
  throttle airplane(100);
  cout << "limit of airplane throttle: " << airplane.return_top() << endl;
  
  //default copy constructor works for this project
  throttle copy(airplane);
  
  cout << "limit of copy of airplane throttle: " << copy.return_top() << endl;
  
  return EXIT_SUCCESS;
}

