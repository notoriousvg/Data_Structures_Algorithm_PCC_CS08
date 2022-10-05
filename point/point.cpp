//
//  point.cpp
//  point
//
//  Created by Victor Garcia on 10/4/22.
//
#include <cmath>
#include "point.h"

namespace garcia_vic_2A
{
  point::point(double x, double y) : x_coor(x), y_coor(y) { }

  void point::rotate_90()
  {
    double new_x = y_coor;
    double new_y = -x_coor;
    
    x_coor = new_x;
    y_coor = new_y;
  }
  point point::midpoint(const point &p1, const point &p2)
  {
    double mid_x, mid_y;
    
    mid_x = (p2.x_coor + p1.x_coor)/ 2.0;
    mid_y = (p2.y_coor + p1.y_coor)/ 2.0;
    
    
    point midpoint(mid_x,mid_y);
    return midpoint;
  }
double point::distance(const point &p1, const point &p2)
{
  double x, y, hyp;
  
  x = (p2.x_coor - p1.x_coor);
  y = (p2.y_coor -  p1.y_coor);
  
  hyp = sqrt(pow(x, 2) + pow(y,2));
  return hyp;
}
double point::get_x() const
{
  return x_coor;
}
double point::get_y() const
{
  return y_coor;
}
}
