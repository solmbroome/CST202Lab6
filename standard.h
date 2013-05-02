///////////////////////////////////////////////////////////////////////////////
//File Name:  standard.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, Scott Olmstead
//Brief Description: This header file contains the other class definition.
///////////////////////////////////////////////////////////////////////////////

#ifndef standard_h
#define standard_h

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int OUTPUT_WIDTH = 60;
const int CONSOLE_WIDTH = 60;
const int FILE_COUNT = 4;
const int MAX_NAME_LENGTH = 30;
const int MAX_NUMBERS = 200;

const string COLLEGE = "Broome Community College";
const string TEAM_NAME = "Team 1";
const string TEAM_MEMBERS = "Caleb Donovick, Sharon Smalls-Williams,"
                            " and Scott Olmstead";
const string COURSE = "CST 202"; 
const string LAB_NAME = "Lab 6";

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
#endif