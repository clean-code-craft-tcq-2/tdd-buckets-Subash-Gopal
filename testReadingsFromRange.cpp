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

TEST_CASE("Test readings for empty samples")
{
  vector <int> chargingSessionSamples = {};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 3, 5) == -1);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 10, 12) == -1);
}

TEST_CASE("Test readings for less than 2 samples")
{
  vector <int> chargingSessionSamples = {1};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 3, 5) == -1);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 10, 12) == -1);
}

TEST_CASE("Test readings 2 samples")
{
  vector <int> chargingSessionSamples = {1,2};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 3, 5) ==  0);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 10, 12) == 0);
}

TEST_CASE("Test readings count with invalid ranges values")
{
  vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, -1, -5) ==  -1);
   REQUIRE(getReadingsForTheRange(chargingSessionSamples, -5, -1) ==  -1);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 14, 100) == 0);
}

TEST_CASE("Test readings count")
{
  vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 0, 100) ==  7);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 12, 100) == 1);
}


TEST_CASE("Test readings count with same value in both lower bound and upper bound")
{
  vector <int> chargingSessionSamples = {3, 3, 5, 4, 10, 11, 12};   
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 5, 5) ==  -1);
  REQUIRE(getReadingsForTheRange(chargingSessionSamples, 3, 3) == -1); //returns invalid input
}

