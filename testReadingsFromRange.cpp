#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "ReadingsFromRange.h"
#include <bits/stdc++.h>
#include <vector>

TEST_CASE("Test readings from ranges")
{
  vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 3, 5) == 4);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 10, 12) == 3);
}
