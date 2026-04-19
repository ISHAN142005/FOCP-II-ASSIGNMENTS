#include <bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end(), greater<int>());

    unordered_set<int> alexConsumed, bobConsumed;
    long long alexTotal = 0, bobTotal = 0;
    int turn = 0;

    for (int i = 0; i < n; i++)
    {
        int quantity = arr[i];

        if (turn == 0)
        {
            if (alexConsumed.find(quantity) == alexConsumed.end())
            {
                alexTotal += quantity;
                alexConsumed.insert(quantity);
                turn = 1;
            }
        }
        else
        {
            if (bobConsumed.find(quantity) == bobConsumed.end())
            {
                bobTotal += quantity;
                bobConsumed.insert(quantity);
                turn = 0;
            }
        }
    }

    if (alexTotal > bobTotal)
    {
        return "Alex";
    }
    else
    {
        return "Bob";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i_arr = 0; i_arr < n; i_arr++)
        {
            cin >> arr[i_arr];
        }

        string out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }

    return 0;
}