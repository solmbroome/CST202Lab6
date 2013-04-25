///!!! DOCUMENTATION WILL GO HERE

#include "bubbleSort.h"
#include "other.h"
#include "selectionSort.h"
#include "standard.h"

int main(void)
{
    ifstream inputFile;
    ofstream outputFile;

    int numberOfValues;
    int dataArray[MAX_ARRAY_SIZE];
    int selectionDataArray[MAX_ARRAY_SIZE];
    int bubbleDataArray[MAX_ARRAY_SIZE];

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
    SelectionSort(selectionDataArray,numberOfValues);

    //Copy the array data into the bubble sort array
    CopyArray(dataArray,bubbleDataArray,numberOfValues);

    //Perform bubble sort on the data
    BubbleSort(bubbleDataArray,numberOfValues);

    //Output the unsorted selection sort array to the output file
    OutputArray(outputFile,
                dataArray,
                numberOfValues,
                "Selection Sort Unsorted");

    //Output the sorted selection sort array to the output file
    OutputArray(outputFile,
                selectionDataArray,
                numberOfValues,
                "Selection Sort Sorted");

    //Output the unsorted bubble sort array to the output file
    OutputArray(outputFile,
                dataArray,
                numberOfValues,
                "Bubble Sort Unsorted");

    //Output the sorted bubble sort array to the output file
    OutputArray(outputFile,
                bubbleDataArray,
                numberOfValues,
                "Bubble Sort Sorted");

    //Close input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}