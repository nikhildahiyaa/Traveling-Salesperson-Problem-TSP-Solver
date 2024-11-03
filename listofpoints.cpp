#include "listofpoints.hpp"


ListOfPoints::ListOfPoints() {
  // implement me
}

void ListOfPoints::addAfter(Point& newPt, string name) {
  // implement me
  for(int i =0;i<getSize();i++)
  {
    if (m_points[i].getName() == name)
    {
      m_points.insert(m_points.begin()+i+1,newPt);
    }
  }
}

void ListOfPoints::addPoint(Point& newPt)  {
  // implement me
  m_points.push_back(newPt);
}

Point& ListOfPoints::getPointAt(unsigned int i) {
  return m_points[i];
}

int ListOfPoints::getSize() const {
  return m_points.size();
}

void ListOfPoints::printList() const {
  // implement me
  for(int i = 0; i<getSize();i++)
  {
    m_points[i].printPoint();
  }
}

void ListOfPoints::draw() const {
  // implement me
  for(int i = 0;i<=MAX_X;i++)
  {
    for(int j=0;j<=MAX_Y;j++)
    {
      bool found= false;
      int k;
      for(k=0;k<getSize();k++)
      {
        if(m_points[k].getX() == i && m_points[k].getY() == j)
        {
          found = true;
          break;
        }
      }
      if(found){
        cout<< m_points[k].getName();
      }else
      {
        cout<< " - ";
      }
    }
    cout<< endl;
  }
} 
 
