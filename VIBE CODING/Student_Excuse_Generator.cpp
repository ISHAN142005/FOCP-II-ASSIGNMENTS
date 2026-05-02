#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time() to seed the generator

using namespace std;

int main()
{
    // Seed the random number generator using the current system time
    // This is the crucial fix that ensures different results on each run
    srand(time(0));

    string name;

    // Ask the user for their name using getline to allow spaces
    cout << "Enter the student's name: ";
    getline(cin, name);

    // If the user just presses Enter, give them a default name
    if (name.empty() || name.find_first_not_of(" \t") == string::npos)
    {
        name = "The student";
    }

    // Store exactly 10 excuse templates in a vector
    vector<string> excuses = {
        "{name} couldn't complete the assignment because the laptop battery died unexpectedly.",
        "{name} tried finishing the homework, but the internet stopped working.",
        "{name} was ready to submit when the file mysteriously disappeared.",
        "{name} would have submitted it, but the dog ate the USB drive.",
        "{name} finished the work, but the LMS was down at midnight.",
        "{name} had the assignment ready, but the printer ran out of ink.",
        "{name} completed everything, but forgot to save before closing.",
        "{name} wrote the code, but the power outage deleted everything.",
        "{name} was about to submit when the browser crashed.",
        "{name}'s little brother deleted the file by accident."};

    // Randomly select an excuse template using rand() % 10
    int randomIndex = rand() % 10;
    string selectedExcuse = excuses[randomIndex];

    // Find the placeholder "{name}" in the selected excuse
    string placeholder = "{name}";
    size_t pos = selectedExcuse.find(placeholder);

    // If the placeholder is found, replace it with the actual name
    if (pos != string::npos)
    {
        selectedExcuse.replace(pos, placeholder.length(), name);
    }

    // Display the final personalized excuse
    cout << "\n--- EXCUSE GENERATED ---\n";
    cout << selectedExcuse << endl;

    return 0;
}