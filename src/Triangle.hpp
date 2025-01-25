#pragma once
#include "Line.hpp"
#include "Point.hpp"

class Triangle
{
private:
    Point m_p1;
    Point m_p2;
    Point m_p3;
    Point m_p4;
    Line m_l1;

public:
    Triangle(Point p1, Point p2, Point p3);
    Triangle(Point p4, Line l1);

    double perimeter() const;
};

