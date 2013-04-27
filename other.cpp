///////////////////////////////////////////////////////////////////////////////
//File Name: other.cpp
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////

#include "other.h"

////////////////////////[ Lab-Specific Functions ]/////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Name: CopyArray
// Authors: Caleb Donovick & Scott Olmstead
// Description: Copies the original array into the array to be sorted
///////////////////////////////////////////////////////////////////////////////
void CopyArray(int originalArray[],
               int sortedArray[],
               int& numberOfValues)
{
    int index;

    //For all the records in the original array
    for(index = 0; index < numberOfValues; index++)
    {
        //Set the position, index, in the sorted array to the 
        // position, index, in the original array
        sortedArray[index] = originalArray[index];
    }
}

///////////////////////////////////////////////////////////////////////////////
// Name: ReadArrayData
// Authors: Sharon Smalls-Williams and Scott Olmstead
// Description: Reads all the integers in from the input file
///////////////////////////////////////////////////////////////////////////////
void ReadArrayData(ifstream& inputFile,
                   int dataArray[],
                   int& numberOfValues)
{
    int tempNumber;
    
    //Initialize the number of values to zero for counting
    numberOfValues = 0;

    //While there is data to read from the input file
    while(!(inputFile.eof()))
    {
        //Get the number from this line of the input file
        inputFile >> tempNumber;

        //Set the array position to this number
        dataArray[numberOfValues] = tempNumber;
        
        //Increment the number of values in the array
        numberOfValues++;
    }
}

///////////////////////////////////////////////////////////////////////////////
// Name: OutputArray
// Author: Scott Olmstead
// Description: Outputs all the indexes of an integer array to the output file
//               with a heading.
///////////////////////////////////////////////////////////////////////////////
void OutputArray(ofstream& outputFile,
                 int dataArray[],
                 int& numberOfValues,
                 string title)
{
    int index;
    int tempOutputWidth;
    
    //Set the output width to the length of the four columns
    tempOutputWidth = OUTPUT_COULMNS * OUTPUT_COULMN_WIDTH;

    //Output some whitespace to the output file
    outputFile << endl;

    //Output a divider to the output file.
    OutputDivider(outputFile,'-',tempOutputWidth);

    //Output the title to the output file
    CenterOutput(outputFile,title,tempOutputWidth);

    //Output a divider to the output file.
    OutputDivider(outputFile,'-',tempOutputWidth);

    //For all the indexes in the passed array
    for(index = 0; index < numberOfValues; index++)
    {
        //Output the number at this index to the output file.
        outputFile << left << setw(OUTPUT_COULMN_WIDTH) 
                   << setfill(' ') << dataArray[index];

        //If there are enough columns and this isn't the last number
        if(((index + 1) % OUTPUT_COULMNS == 0) && 
            (index + 1 != numberOfValues))
        {
            //Insert a line break in the output file
            outputFile << endl;
        }
    }

    //Insert a line break in the output file
    outputFile << endl;
    
    //Output a divider to the output file.
    OutputDivider(outputFile,'_',tempOutputWidth);
}

///////////////////////////////////////////////////////////////////////////////
// Name: PromptUserInput
// Author: Scott Olmstead
// Description: Prompts the user as to what file they would like to open.
//              Then, based on their choice, opens the input and output files
//               associated with that choice.
///////////////////////////////////////////////////////////////////////////////
void PromptUserInput(ofstream& outputFile,
                     ifstream& inputFile)
{
    int index; 
    int choice;

    //Output a file list title to the console window
    cout << "File Names" << endl;

    //Output a divider to the console window
    OutputDivider((ofstream&)cout,'-',CONSOLE_WIDTH);

    //Output the choices to the to console window
    for(index = 0; index < FILE_COUNT; index++)
    {
        //Output the current file name to the console window
        cout << index + 1 << ". " << INPUT_NAMES[index]
             << endl;
    }

    //Output a divider to the console window
    OutputDivider((ofstream&)cout,'=',CONSOLE_WIDTH);

    //Prompt the user to enter a file number via console
    cout << "Enter the number of which file you would like to use: ";

    //Get choice from the keyboard via console
    cin  >> choice;

    //Output whitespace to the console window
    cout << endl;

    //If choice is out of range, select default
    if(!(choice > 0 && choice <= FILE_COUNT))
    {
        //Output a divider to the console window
        OutputDivider((ofstream&)cout,'.', 30);

        //Output an error message to the console window
        cout << "Choice " << choice 
             << " is out of range." << endl;

        //Let the user know the default was selected
        // by outputting message to console window
        cout << "Opening default file choice, 1"
             << endl;

        //Set the default choice(1)
        choice = 1;
    }

    //Open the input file
    inputFile.open(INPUT_NAMES[choice - 1]);

    //Open output file
    outputFile.open(OUTPUT_NAMES[choice - 1]);

    //If the input file is open
    if(inputFile.is_open())
    {
        //Output a message to the console window saying the input file 
        // was opened
        cout << "SUCCESS! The file " << INPUT_NAMES[choice - 1] 
             << " was opened successfully. " << endl;
    }
    //If the input file is not open
    else 
    {
        //Output a message to the console window stating the file could not
        // be opened.
        cout << "ERROR: The file " << INPUT_NAMES[choice - 1] 
             << " could not be opened. " << endl
             << " This program will not produce expected results";
    }

    cout << endl << "Writing output to: " << OUTPUT_NAMES[choice - 1] 
         << endl;

    //Output a divider to the console window
    OutputDivider((ofstream&)cout,'_', CONSOLE_WIDTH);
}

//////////////////////////[ Non-Lab Functions ]////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Name: OutputTitle
// Author: Scott Olmstead
// Outputs a title to the output screen. The file name is taken as a reference
//  parameter. The title is a value parameter.
///////////////////////////////////////////////////////////////////////////////
void OutputTitle(ofstream &outputFile,
                 string title)
{
    //Output a divider to the output file
    OutputDivider(outputFile,'_');

    //Center the title and output it to the output file
    CenterOutput(outputFile, title);

    //Output a divider to the output file
    OutputDivider(outputFile);
}

///////////////////////////////////////////////////////////////////////////////
// Name: OutputDivider
// Author: Scott Olmstead
// Outputs a divider to the output screen that is taken as a reference
// parameter. Has an option for the divider character and output width, taken
// as value parameters.
///////////////////////////////////////////////////////////////////////////////
void OutputDivider(ofstream& outputFile,
				      char fillChar, 
				      int fillWidth)
{
	//Output a divider to the output file stream.
	outputFile << right << setfill(fillChar) << setw(fillWidth) << fillChar 
		       << setfill(' ') << endl;
}

///////////////////////////////////////////////////////////////////////////////
// Name: CenterOutput
// Author: Scott Olmstead
// Outputs a string of to the reference parameter output file stream to half
// that of a given width. Takes options as value parameters.
///////////////////////////////////////////////////////////////////////////////
void CenterOutput(ofstream& outputFile,
				  string outString,
				  int screenWidth)
{
	//Output centered string to the output file stream.
	outputFile << right 
		       << setw((screenWidth + static_cast<int>(outString.length()))/2) 
		       << outString << endl;
}

///////////////////////////////////////////////////////////////////////////////
// Name: OutputStudentInformation
// Author: Scott Olmstead
// Output the student header including student name, school, course, and lab
// number(constant strings) to the output file file stream that is taken as a
// reference parameter. 
///////////////////////////////////////////////////////////////////////////////
void OutputTeamInformation(ofstream& outputFile,
						   int width)
{

	//Output a divider to the output file stream of default width.
	OutputDivider(outputFile, '*', width);

    //Center the student's name and output to the output file stream.
	CenterOutput(outputFile, TEAM_MEMBERS, width);

	//Center the student's name and output to the output file stream.
	CenterOutput(outputFile, TEAM_NAME, width);

	//Center the college name and output to the output file stream.
	CenterOutput(outputFile, COLLEGE, width);

	//Center the course name and output to the output file stream.
	CenterOutput(outputFile, COURSE, width);

	//Center the lab name and output to the output file stream.
	CenterOutput(outputFile, LAB_NAME, width);

	//Output a divider to the output file stream of default width.
	OutputDivider(outputFile, '*', width);

	//Output a divider to the output file stream of default width.
	OutputDivider(outputFile, '*', width);
}