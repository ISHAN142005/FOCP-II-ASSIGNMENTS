#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool canCover(const vector<int> &ones, int l, int K)
{
    int count = 0;
    int i = 0;
    int m = ones.size();

    while (i < m)
    {
        count++;
        if (count > K)
        {
            return false;
        }
        int coverUntil = ones[i] + l - 1;
        while (i < m && ones[i] <= coverUntil)
        {
            i++;
        }
    }
    return count <= K;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, K;
    cin >> n >> K;

    string s;
    cin >> s;

    vector<int> ones;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones.push_back(i);
        }
    }

    if (ones.empty())
    {
        cout << 1 << endl;
        return 0;
    }

    int left = 1, right = n;
    int answer = n;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (canCover(ones, mid, K))
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << answer << endl;

    return 0;
}