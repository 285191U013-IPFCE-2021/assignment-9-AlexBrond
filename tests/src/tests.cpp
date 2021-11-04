#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "search.h"
#include "dfs.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sum")
{   
    // Empty array
    int a[5] = {1,-3,1,1,5};
    REQUIRE(sum(a,0)==0);

    // Non-empty
    REQUIRE(sum(a,5)==5);

}

TEST_CASE("search")
{

    int a[5] = {2,-3,1,1,5};
    // True 
    REQUIRE(search(a,5,5)==true);
    REQUIRE(search(a,5,1)==true);
    REQUIRE(search(a,5,2)==true);

    // False
    REQUIRE(search(a,5,0)==false);
    REQUIRE(search(a,0,1)==false);
}

TEST_CASE("tree")
{
      node *root = make_node (4,
			  make_node (7,
				     make_node (28,
						make_node (77,
							   NULL,
							   NULL),
						make_node (23,
							   NULL,
							   NULL)),
				     make_node (86,
						make_node (3,
							   NULL,
							   NULL),
						make_node (9,
							   NULL,
							   NULL))),
			  make_node (98,
				     NULL,
				     NULL));
    // Print Tree
    DFT(root);
}
