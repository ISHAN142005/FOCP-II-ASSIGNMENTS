/*
Q7. A game compares three players' scores to find who is ahead.
Implement a solution to accept three scores and identify the winner.
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string player[3];
    int score[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the name of " << i + 1 << " player:";
        getline(cin, player[i]);
        cout << "Enter the score of " << player[i] << " :";
        cin >> score[i];
        cin.ignore();
    }
    if (score[0] > score[1])
    {
        if (score[0] > score[2])
        {
            cout << player[0] << " is the top scorer!";
        }
        else if (score[0] < score[2])
        {
            cout << player[2] << " is the top scorer!";
        }
    }
    else if (score[0] < score[1])
    {
        cout << player[1] << " is the top scorer";
    }
    else
    {
        cout << "Invalid input!";
    }

    return 0;
}