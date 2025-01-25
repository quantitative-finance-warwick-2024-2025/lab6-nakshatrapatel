#include "Point.hpp"
#include <iostream>
#include <math.h> // for sqrt

Point::Point(double x, double y)
  : m_x(x), m_y(y)
{}

double Point::x() const
{
  return m_x;
}

double Point::y() const
{
  return m_y;
}

double Point::compute_norm() const
{
  return sqrt(m_x * m_x + m_y * m_y);
}

void Point::info() const
{
  std::cout<< "coordinates of the point: " << m_x, m_y;
  std::cout<< "2 norm: " << Point::compute_norm();
}

Point Point::add(const Point* p) const
{
  double x_1 = 0, y_1 = 0;
  const Point local_p = *p;
  x_1 = local_p.x() + m_x;
  y_1 = local_p.y() + m_y;
  return Point(x_1,y_1);
}

Point Point::subtract(const Point* p) const
{
  double x_1 = 0, y_1 = 0;
  x_1 = m_x - p->x();
  y_1 = m_y - p->y();
  return Point(x_1,y_1);
}
