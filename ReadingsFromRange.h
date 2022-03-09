#include <iostream>
#include<string>
#include <vector>
using namespace std;
bool isPreConditionsMet(int sizeofChargingSessionSamples);
int getReadingsForTheRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
int countReadingsForRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
