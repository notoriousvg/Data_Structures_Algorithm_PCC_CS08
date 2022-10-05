//
//  throttle.cpp
//  Throttle.cpp
//
//  Created by Victor Garcia on 10/2/22.
//

#include <stdio.h>
#include "throttle.h"
namespace garcia_vic_2A
{
  throttle::throttle() {
    shut_off();
    top_position = 6;
  }
  throttle::throttle(int size) : throttle() {
    top_position = size;
  }
  void throttle::shift(int amount) {
      
    position += amount;
    if (position < 0)
      position = 0;
    if (position > top_position)
      position = top_position;
  }

}


