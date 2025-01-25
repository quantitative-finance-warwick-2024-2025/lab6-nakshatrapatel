#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Line.hpp"

TEST_CASE("the length of a line to the origin is the same as the norm of a point from the origin", "[tests]")
{
    Point a(5,7);
    Point o(0,0);

    Line oa(a, o);
    CAPTURE(oa.length(), a.compute_norm());
    REQUIRE(oa.length() == a.compute_norm());

}