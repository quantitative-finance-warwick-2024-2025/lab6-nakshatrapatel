#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Point.hpp"


TEST_CASE("adding a + a - a is a", "[tests]")
{
    Point a(5,7);
    CAPTURE(a.x(), a.y(), a.compute_norm());
    REQUIRE(a.add(&a).subtract(&a).x() == a.x());
    REQUIRE(a.add(&a).subtract(&a).y() == a.y());
}
