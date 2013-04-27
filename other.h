///////////////////////////////////////////////////////////////////////////////
//File Name: other.h
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////
#ifndef other_h
#define other_h

#include "standard.h"

const int OUTPUT_COULMNS = 4;
const int OUTPUT_COULMN_WIDTH = 10;

void CopyArray(int originalArray[],
               int sortedArray[],
               int numberOfValues);

void ReadArrayData(ifstream& outputFile,
                   int dataArray[],
                   int& numberOfValues);

void OutputArray(ofstream& outputFile,
                 int dataArray[],
                 int& numberOfValues,
                 string title);

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