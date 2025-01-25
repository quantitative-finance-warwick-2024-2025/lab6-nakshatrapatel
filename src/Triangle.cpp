#include "Triangle.hpp"

Triangle::Triangle(Point p1, Point p2, Point p3)
    : m_p1(p1), m_p2(p2), m_p3(p3), m_p4(Point(0, 0)), m_l1(Line(Point(0, 0), Point(0, 0)))
{}

Triangle::Triangle(Point p4, Line l1)
    : m_p4(p4), m_l1(l1), m_p1(p4), m_p2(p4), m_p3(p4)
{}

double Triangle::perimeter() const
{

    if (m_l1.length() == 0){
        Line l2(m_p1, m_p2);
        Line l3(m_p1, m_p3);
        Line l4(m_p2, m_p3);
        
        return l2.length() + l3.length() + l4.length();
    }
    else{
        Point p4 = *m_l1.p1();
        Point p5 = *m_l1.p2();
        Line l5(p4, m_p4);
        Line l6(p5, m_p4);

        return l5.length() + l6.length() + m_l1.length();
    }
    
}


