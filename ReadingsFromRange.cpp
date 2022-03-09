#include "ReadingsFromRange.h"
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool isPreConditionsMet(int sizeofChargingSessionSamples, int lowerBound, int upperBound) {
  return ((sizeofChargingSessionSamples > 1) && (lowerBound < upperBound))? true : false;
}
  

int getReadingsForTheRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound) {
  int sizeofChargingSessionSamples = chargingSessionSamples.size();
  if(isPreConditionsMet(sizeofChargingSessionSamples,lowerBound,upperBound) == true) {
    return countReadingsForRange(chargingSessionSamples,lowerBound,upperBound);
  }  
  return -1;  
}

int countReadingsForRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound) {
    int countOfReadingsFromRange = 0;
    for(int i = 0; i < chargingSessionSamples.size(); i++) {
      if((chargingSessionSamples[i] >= lowerBound) && (chargingSessionSamples[i] <= upperBound)) {
        countOfReadingsFromRange++;
      }
    } 
    return countOfReadingsFromRange;
}
