#ifndef standard_h
#define standard_h

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "bubbleSort.h"
#include "other.h"
#include "selectionSort.h"

using namespace std;

const int OUTPUT_WIDTH = 80;
const int CONSOLE_WIDTH = 60;
const int FILE_COUNT = 4;
const int MAX_NAME_LENGTH = 30;
const int MAX_ARRAY_SIZE = 200;
const char INPUT_NAMES[FILE_COUNT][MAX_NAME_LENGTH] = 
                             {"SmallRan.txt",
                              "Descend.txt",
                              "Ascend.txt",
                              "LargeRan.txt"};

const char OUTPUT_NAMES[FILE_COUNT][MAX_NAME_LENGTH] = 
                              {"Result1.txt",
                               "Result2.txt",
                               "Result3.txt",
                               "Result4.txt"};

typedef int[MAX_ARRAY_SIZE] dataArray;


#endif