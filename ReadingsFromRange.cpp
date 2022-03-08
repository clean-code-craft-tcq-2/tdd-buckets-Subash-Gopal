#include "ReadingsFromRange.h"
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getReadingsForTheRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound) {
  int sizeofchargingSessionSamples = chargingSessionSamples.size();
  if(sizeofchargingSessionSamples > 0)
  {
    int countOfReadingsFromRange = 0;
    for(int i = 0; i < sizeofchargingSessionSamples; i++) {
      if((chargingSessionSamples[i] >= lowerBound) && (chargingSessionSamples[i] <= upperBound)) {
        countOfReadingsFromRange++;
      }
    } 
    return countOfReadingsFromRange;
  }
  return -1;  
}
