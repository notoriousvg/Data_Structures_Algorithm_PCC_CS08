//
//  throttle.h
//  Throttle.cpp
//
//  Created by Victor Garcia on 10/2/22.
//

#ifndef throttle_h
#define throttle_h

namespace garcia_vic_2A
{
  class throttle
  {
  public:
    //Constructors
    throttle();
    throttle(int size);
    //Modification member functions
    void shut_off() { position = 0; }
    void shift(int amount);
    
    //constant member functions
    double flow() const { return (position / double(top_position)); }
    bool is_on() const { return (position > 0);  }
    
    //debugging
    int return_top() { return top_position; }
  private:
    int position;
    int top_position;
  };

}

#endif /* throttle_h */
