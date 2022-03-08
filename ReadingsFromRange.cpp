#include "ReadingsFromRange.h"
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int getReadingsForTheRange(const int *chargingSessionSamples[], int lowerBound, int upperBound) {
  int sizeofchargingSessionSamples = sizeof((chargingSessionSamples) / sizeof(chargingSessionSamples[0]));
  int countOfReadingsFromRange = 0;
  for(int i = 0; i < sizeofchargingSessionSamples; i++) {
    if((chargingSessionSamples[i] >= lowerBound) && (chargingSessionSamples[i] <= upperBound)) {
      countOfReadingsFromRange++;
    }
  }
  return countOfReadingsFromRange;
}
