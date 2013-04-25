#include "standard.h"

void PromptUserInput(ofstream& outputFile,
                     ifstream& inputFile)
{
    int index; 
    int choice;

    cout << "Please enter the number of which file you would like to use: "
         << endl;

    //Output t
    for(index = 0; index < FILE_COUNT; index++)
    {
        cout << index + 1 << ". " << INPUT_NAMES[index]
             << endl;
    }

    //Get choice from user
    cin  >> choice;

    //If choice is out of range, select default
    if(!(choice > 0 && choice <= FILE_COUNT))
    {
        cout << "Choice " << choice 
             << " is out of range." << endl;

        cout << "Opening default file choice, 1"
             << endl;

        choice = 1;
    }

    //Open the input file
    inputFile.open(INPUT_NAMES[choice - 1]);

    //Open output file
    outputFile.open(OUTPUT_NAMES[choice - 1]);
}

int main(void)
{
    ifstream inputFile;
    ofstream outputFile;

    PromptUserInput(outputFile,inputFile);

    //Close input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}