///////////////////////////////////////////////////////////////////////////////
//File Name: other.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, and Scott Olmstead
//Description: Contains the named constants and function prototypes for
//               various non-sorting functions.
///////////////////////////////////////////////////////////////////////////////
#ifndef other_h
#define other_h

#include "standard.h"

//Named constants for other.cpp
const int OUTPUT_COULMNS = 4;
const int OUTPUT_COULMN_WIDTH = 10;
const int ARRAY_OUTPUT_WIDTH = OUTPUT_COULMNS * OUTPUT_COULMN_WIDTH;
const int SWAP_COMPARE_WIDTH = 25;

//Function prototypes for other.cpp
void CopyArray(int originalArray[],
               int sortedArray[],
               int numberOfValues);

void ReadArrayData(ifstream& outputFile,
                   int dataArray[],
                   int& numberOfValues);

void OutputArray(ofstream& outputFile,
                 int dataArray[],
                 int numberOfValues,
                 string title);

void OutputSwapsAndCompares(ofstream& outputFile,
                            int comparisonCount,
                            int swapCount,
                            string sortName);

void PromptUserInput(ofstream& outputFile,
                     ifstream& inputFile);

void OutputTitle(ofstream &outputFile,
                 string title);

void OutputDivider(ofstream& outputFile,
                   char fillChar = '=',
                   int fillWidth = OUTPUT_WIDTH);

void CenterOutput(ofstream& outputFile,
                  string outString,
                  int screenWidth = OUTPUT_WIDTH);

void OutputTeamInformation(ofstream& outputFile,
                           int width = OUTPUT_WIDTH);

#endif