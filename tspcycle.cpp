#include <iostream>

#include "tspcycle.hpp"

TSPCycle::TSPCycle() {
  // implement me
//  cout << "default TSPCycle constructor" << endl;
}

// returns the length of the cycle
float TSPCycle::getLength() const {
  // implement me
  float total_dist =0;
  for(int i=0;i<getSize()-1;i++)
  {
    total_dist += m_points[i].getDistance(m_points[(i+1)%getSize()]);
  }
  return total_dist;
}
