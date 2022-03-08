#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "ReadingsFromRange.h"
#include <bits/stdc++.h>
#include <vector>

TEST_CASE("Test readings from ranges")
{
  vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};
  int lowerBound=3;
  int upperBound=5;   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, lowerBound, upperBound) == 4);  
}