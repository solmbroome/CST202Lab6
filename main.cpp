///////////////////////////////////////////////////////////////////////////////
//Lab 6 Grading Block
//Grade:
//General Comments:
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//                            Documentation Block                            //
///////////////////////////////////////////////////////////////////////////////
///!!! CLEAN UP AND FINISH
// Programmers: Caleb Donovick, Sharon Smalls-Williams, Scott Olmstead
// Project Name: Lab 6
// I
//PromptUserInput - Prompt the user to choose an input file to process.
//
//OutputTeamInformation - Output the heading for the output file, OutputFile.
//
//ReadArrayData - Read the array data from the input file, InputFile, until
//                all the information is read in.
//
//CopyArray - Copy the unsorted array data into the selected sort array.
//
//SelectionSort - Perform selection sort on the data, sorting numbers in
//                ascending order.
//
// BubbleSort - Perform bubble sort on the data, sorting numbers in
//              ascending order.
//
//OutputArray - Output the array to the output file, OutputFile.
//////////////////////////////////////////////////////////////////////////////
#include "bubbleSort.h"
#include "other.h"
#include "selectionSort.h"
#include "standard.h"

int main(void)
{
    ifstream inputFile;
    ofstream outputFile;

    int numberOfValues;
    int selectionSwaps;
    int selectionComparisons;
    int bubbleSwaps;
    int bubbleComparisons;
    int dataArray[MAX_NUMBERS];
    int selectionDataArray[MAX_NUMBERS];
    int bubbleDataArray[MAX_NUMBERS];

    //Prompt the user to choose an input file to process
    PromptUserInput(outputFile,inputFile);

    //Output the heading for the output file to the output file
    OutputTeamInformation(outputFile);

    //Initialize the array tag field to zero
    numberOfValues = 0;
    
    //Read the array data from the input file
    ReadArrayData(inputFile,dataArray,numberOfValues);
    
    //Copy the array data into the selection sort array
    CopyArray(dataArray,selectionDataArray,numberOfValues);

    //Perform selection sort on the data
    SelectionSort(selectionDataArray,
                  numberOfValues,
                  selectionComparisons,
                  selectionSwaps);

    //Copy the array data into the bubble sort array
    CopyArray(dataArray,bubbleDataArray,numberOfValues);

    //Perform bubble sort on the data
    BubbleSort(bubbleDataArray,
               numberOfValues,
               bubbleComparisons,
               bubbleSwaps);

    //Output the unsorted selection sort array to the output file
    OutputArray(outputFile,
                dataArray,
                numberOfValues,
                "Selection Sort: Unsorted");

    //Output the sorted selection sort array to the output file
    OutputArray(outputFile,
                selectionDataArray,
                numberOfValues,
                "Selection Sort: Sorted");
    
    //Output the number of swaps and comparisons that occurred
    // int the selection sort algorithm
    OutputSwapsAndCompares(outputFile,
                           selectionComparisons,
                           selectionSwaps,
                           "Selection Sort");

    //Output the unsorted bubble sort array to the output file
    OutputArray(outputFile,
                dataArray,
                numberOfValues,
                "Bubble Sort: Unsorted");

    //Output the sorted bubble sort array to the output file
    OutputArray(outputFile,
                bubbleDataArray,
                numberOfValues,
                "Bubble Sort: Sorted");

    //Output the number of swaps and comparisons that occurred
    // int the bubble sort algorithm
    OutputSwapsAndCompares(outputFile,
                           bubbleComparisons,
                           bubbleSwaps,
                           "Bubble Sort");

    //Close input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}