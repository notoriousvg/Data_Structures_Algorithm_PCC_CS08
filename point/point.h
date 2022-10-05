//
//  point.hpp
//  point
//
//  Created by Victor Garcia on 10/4/22.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
namespace garcia_vic_2A
{
  class point
{
public:
  point(double x = 0.0, double y = 0.0);
  
  //Member functions
  void rotate_90();
  
  point midpoint(const point& p1, const point &p2);
  
  double distance(const point &p1, const point &p2);
  
  //Accessores
  double get_x() const;
  double get_y() const;
  
private:
  double x_coor;
  double y_coor;
};
}
#endif /* point_hpp */
