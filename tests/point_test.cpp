#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

TEST_CASE( "Points return expected X and Y values" ) {
    Point p1(0,0);
    REQUIRE( p1.get_x() == 0 );
    REQUIRE( p1.get_y() == 0 );

    Point p2(1,0);
    REQUIRE( p2.get_x() == 1 );
    REQUIRE( p2.get_y() == 0 );

    Point p3(4,2);
    REQUIRE( p3.get_x() == 4 );
    REQUIRE( p3.get_y() == 2 );

    Point p4(7.8,22);
    REQUIRE( p4.get_x() == 7.8 );
    REQUIRE( p4.get_y() == 22 );
}

TEST_CASE( "== operator works as expected with points" ) {
    REQUIRE( Point(1,1) == Point(1,1) );
    REQUIRE( Point(13.4,2.3) == Point(13.4,2.3) );
}

TEST_CASE( "!= operator works as expected with points" ) {
    REQUIRE( Point(1,1) != Point(0,0) );
    REQUIRE( Point(12,22) != Point(14.2,13) );
    REQUIRE( Point(12,3) != Point(12,2.5) );
    REQUIRE( Point(3,4) != Point(3.75,4) );
}

TEST_CASE( "Can successfully calculate the distance between points" ) {
    Point p1(1,1);
    Point p2(1,1);
    REQUIRE( p1 - p2 == 0 );

    Point p3(0,0);
    Point p4(0,12);
    REQUIRE( p3 - p4 == 12 );

    Point p5(2,3);
    Point p6(-4,4);
    REQUIRE( p5 - p6 == sqrt(37) );
}

TEST_CASE( "Can successfully calculate the midpoint between points" ) {
    Point p1(1,1);
    Point p2(1,1);
    REQUIRE( p1 / p2 == Point(1,1) );

    Point p3(0,0);
    Point p4(0,12);
    REQUIRE( p3 / p4 == Point(0, 6) );

    Point p5(2,3);
    Point p6(-4,4);
    REQUIRE( p5 / p6 == Point(-1, 3.5) );
}