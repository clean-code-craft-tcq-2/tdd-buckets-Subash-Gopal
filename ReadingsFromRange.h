#include <iostream>
#include<string>
#include <vector>
using namespace std;
bool isPreConditionsMet(int sizeofChargingSessionSamples, int lowerBound, int upperBound);
int getReadingsForTheRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
int countReadingsForRange(vector<int> chargingSessionSamples, int lowerBound, int upperBound);
void printToConsole(int lowerBound, int upperBound,int readingCount);
