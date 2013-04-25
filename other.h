///////////////////////////////////////////////////////////////////////////////
//File Name: other.h
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////
#ifndef other_h
#define other_h

#include "standard.h"

void CopyArray(int originalArray[],
               int sortedArray[],
               int& numberOfValues);

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
				     int fillWidth = CONSOLE_WIDTH);

void CenterOutput(ofstream& outputFile,
				  string outString,
				  int screenWidth = CONSOLE_WIDTH);

void OutputTeamInformation(ofstream& outputFile,
							  int width = CONSOLE_WIDTH);

#endif