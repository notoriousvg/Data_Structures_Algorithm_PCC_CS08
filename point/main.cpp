//
//  main.cpp
//  point
//
//  Created by Victor Garcia on 10/4/22.
//

#include <iostream>
#include <cstdlib>
#include "point.h"

int main(int argc, const char * argv[])
{
  using namespace garcia_vic_2A;
  using namespace std;
  
  // insert code here...
  std::cout << "Hello, World!\n";
  
  point one(-10,-2.3);
  point two(-5,0);
  
  point mid = one.midpoint(one, two);
  
  cout << "midpoint: (" << mid.get_x() << "," << mid.get_y() << ")\n";
  return EXIT_SUCCESS;
}
