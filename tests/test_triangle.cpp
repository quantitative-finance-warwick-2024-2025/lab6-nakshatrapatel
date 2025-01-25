#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Triangle.hpp"

TEST_CASE("Triangle perimeter correct for concrete example", "[tests]")
{
    Triangle t1(Point(0,0), Point(0,4), Point(3,0));
    REQUIRE(t1.perimeter() == 12);

    Triangle t2(Point(0,4), Line(Point(0,0), Point(3,0)));
    REQUIRE(t2.perimeter() == 12);
}

TEST_CASE("the same triangle constructed with each of the two constructors returns the same perimeter", "[tests]")
{
    Triangle t1(Point(0,0), Point(0,4), Point(3,0));

    Triangle t2(Point(0,4), Line(Point(0,0), Point(3,0)));

    REQUIRE(t2.perimeter() == t1.perimeter());

}