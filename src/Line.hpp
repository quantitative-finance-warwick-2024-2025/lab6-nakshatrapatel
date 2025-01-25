#pragma once
#include "Point.hpp"

class Line
{
private:
    Point m_p1;
    Point m_p2;

public:
    Line(Point m_p1, Point m_p2);

    const Point* p1() const;

    const Point* p2() const;

    double length() const;

};