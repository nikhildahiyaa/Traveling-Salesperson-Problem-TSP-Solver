#include "tspsolver.hpp"

TSPSolver::TSPSolver(ListOfPoints &list) {
  // implement me
  m_list = list;
}

float TSPSolver::getDist_points(Point i, Point j, Point j2)
{
  float d1 = i.getDistance(j);
  float d2 = i.getDistance(j2);
  float d3 = j.getDistance(j2);

  return d1+d2-d3;
}


void TSPSolver::solve() {
  // implement me
  for(int i=0;i<3;i++)
  {
    m_solution.addPoint(m_list.getPointAt(i));
  }
  for(int i=3;i<m_list.getSize();i++)
  {
    int place = 0;
    float dist1 = getDist_points(m_list.getPointAt(i),m_solution.getPointAt(0),m_solution.getPointAt(1));
    
    for(int j=1;j<i;j++)
    {
    
      float dist2 = getDist_points(m_list.getPointAt(i),m_solution.getPointAt(j),m_solution.getPointAt((j+1)%i));
      if(dist2<dist1)
      {
        dist1 = dist2;
        place = j;
      }
    }
    string ideal_location = m_solution.getPointAt(place).getName();
    m_solution.addAfter(m_list.getPointAt(i),ideal_location);
  }
}

TSPCycle& TSPSolver::getSolution() {
  // implement me

  // currently returns an empty cycle
  return m_solution;
}



