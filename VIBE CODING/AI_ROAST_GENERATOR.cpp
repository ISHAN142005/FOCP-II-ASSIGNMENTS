#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;

int main() {
    // Seed the random number generator using the current system time
    srand(time(0));

    string name;
    cout << "Enter your first name to get roasted: ";
    
    // 1. Use getline instead of cin >> to capture the entire line, including empty inputs
    getline(cin, name); 

    // 2. Check if the string is empty or contains only spaces/tabs
    // find_first_not_of looks for any character that ISN'T a space or tab.
    // If it returns string::npos, it means the string is entirely spaces or completely empty.
    if (name.empty() || name.find_first_not_of(" \t") == string::npos) {
        // 3. Set the name to the default fallback
        name = "Mystery Person";
        // 4. Display the required message
        cout << "No name entered? Okay, let's call you Mystery Person\n";
    }

    // 5. Store our 10 roast templates in a vector
    vector<string> roasts = {
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "Programmer {name} types so loud that even the compiler gets scared.",
        "{name}'s debugging style is staring at the screen until the bug leaves.",
        "If procrastination were an Olympic sport, {name} would have gold.",
        "{name} writes code so slow that a turtle switched to Python.",
        "Even ChatGPT feels sorry for {name}'s coding skills.",
        "{name} relies on Stack Overflow so much, their browser history is just 'how to exit vim'.",
        "The only thing more broken than {name}'s code is their sleep schedule."
    };

    // 6. Randomly select one template
    int randomIndex = rand() % roasts.size();
    string selectedRoast = roasts[randomIndex];

    // Find and replace the "{name}" placeholder
    string placeholder = "{name}";
    size_t pos = selectedRoast.find(placeholder);

    if (pos != string::npos) {
        // Replace the placeholder with the actual name (or "Mystery Person")
        selectedRoast.replace(pos, placeholder.length(), name);
    }

    // Print the final result
    cout << "\n--- INCOMING ROAST ---\n";
    cout << selectedRoast << endl;

    return 0;
}