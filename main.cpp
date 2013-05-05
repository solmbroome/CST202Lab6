///////////////////////////////////////////////////////////////////////////////
//Lab 6 Grading Block
//Team: Team 1
//Members: Sharon Smalls-Williams, Caleb Donovick, and Scott Olmstead
//Grade:
//General Comments:
//
///////////////////////////////////////////////////////////////////////////////
//                            Documentation Block                            //
///////////////////////////////////////////////////////////////////////////////
// Programmers: Caleb Donovick, Sharon Smalls-Williams, and Scott Olmstead
// Project Name: Lab 6
// Description: Reads integers from an input file into a integer array. The 
//               array is then copied twice and sorted using bubble sort and
//               selection sort algorithms. The number of swaps and comparisons
//               are counted during this process. The sorted arrays along with
//               the comparisons and swaps for each are output to an output
//               file.
//   Input:
//      A number(int) indicating the input file that the use would like to
//       open is input from the keyboard.
//      A undetermined amount of numbers(int) are read from an input file 
//       into a integer array(int[]) until either the array is full or the
//       file is empty.
//   Process:
//      A input file(ifstream) and output file(ofstream) are opened based on
//       a selection(int) given by a user via keyboard input.
//      Data(int) is read from an input file into a integer array(int[]).
//      The array(int[]) with the input is copied into a array(int[]) that
//       is to be sorted using the selection sort algorithm
//      The copied array(int[]) is sorted, ascending, using the selection
//       sort algorithm.
//      The number of swaps(int) and number of comparisons(int) that occur 
//       during the selection sort are stored into variables(int).
//      The array(int[]) with the input is copied into a array(int[]) that
//       is to be sorted using the bubble sort algorithm
//      The copied array(int[]) is sorted, ascending, using the bubble
//       sort algorithm.
//      The number of swaps(int) and number of comparisons(int) that occur
//       during the bubble sort are stored into variables(int).
//      The input file and output file streams are closed.
//   Output:
//      A list of input files with a heading is output to the console window.
//      Where appropriate, dividers are output to the console window.
//      A prompt asking the user to enter the number representing the file from
//       the input list is output to the console window.
//      A message stating success or failure regarding the opening of the input
//       file is output to the console window.
//      A message stating what file the output will be written to is output to
//       the console window.
//      Where appropriate, dividers are output to the to the output
//       file(ofstream).
//      A heading stating the information of the lab and the team is output to
//       the output file.
//      A heading for the unsorted selection sort array is output to the output
//       file.
//      The unsorted array(int[]) is output to the output file.
//      A heading for the sorted selection sort array is output to the output
//       file.
//      The array(int[]) sorted using selection sort is output to the output 
//       file.
//      A heading for the comparisons and swaps for the selection sort is 
//       output to the output file.
//      The number of comparisons(int) for the selection sort is output to
//       the output file.
//      The number of swaps(int) for the selection sort is output to the output
//       file.
//      A heading for the unsorted bubble sort array is output to the output 
//       file.
//      The unsorted array(int[]) is output to the output file.
//      A heading for the sorted bubble sort array is output to the output 
//       file.
//      The array(int[]) sorted using bubble sort is output to the output 
//       file.
//      A heading for the comparisons and swaps for the bubble sort is output
//       to the output file.
//      The number of comparisons(int) for the bubble sort is output to the 
//       output file.
//      The number of swaps(int) for the bubble sort is output to the output
//       file.
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

    //Close the input file, for input processing has finished.
    inputFile.close();

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

    //Close the output file
    outputFile.close();

    return 0;
}