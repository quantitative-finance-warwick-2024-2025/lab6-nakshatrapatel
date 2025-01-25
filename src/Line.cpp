#include "Line.hpp"
#include "Point.hpp"
#include <iostream>


Line::Line(Point p1, Point p2)
    : m_p1(p1), m_p2(p2)
{}


const Point* Line::p1() const
{
    return &m_p1;
}

const Point* Line::p2() const
{
    return &m_p2;
}

double Line::length() const
{
    
    Point diff = m_p1.subtract(&m_p2);
    return diff.compute_norm();
}