#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MovieTicket
{
public:
    vector<int> b[1005];
    int t[1005];

    MovieTicket()
    {
        for (int i = 0; i <= 1000; i++)
        {
            t[i] = 100;
        }
    }

    bool BOOK(int cid, int mid)
    {
        int flag = 0;
        for (int i = 0; i < b[mid].size(); i++)
        {
            if (b[mid][i] == cid)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            return false;
        }

        if (t[mid] == 0)
        {
            return false;
        }

        b[mid].push_back(cid);
        t[mid]--;
        return true;
    }

    bool CANCEL(int cid, int mid)
    {
        for (int i = 0; i < b[mid].size(); i++)
        {
            if (b[mid][i] == cid)
            {
                b[mid].erase(b[mid].begin() + i);
                t[mid]++;
                return true;
            }
        }
        return false;
    }

    bool IS_BOOKED(int cid, int mid)
    {
        for (int i = 0; i < b[mid].size(); i++)
        {
            if (b[mid][i] == cid)
            {
                return true;
            }
        }
        return false;
    }

    int AVAILABLE_TICKETS(int mid)
    {
        return t[mid];
    }
};

int main()
{
    int q;
    cin >> q;

    MovieTicket mt;

    while (q > 0)
    {
        string type;
        cin >> type;

        if (type == "BOOK")
        {
            int x, y;
            cin >> x >> y;
            bool ans = mt.BOOK(x, y);
            if (ans == true)
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else if (type == "CANCEL")
        {
            int x, y;
            cin >> x >> y;
            if (mt.CANCEL(x, y) == true)
                cout << "true\n";
            else
                cout << "false\n";
        }
        else if (type == "IS_BOOKED")
        {
            int x, y;
            cin >> x >> y;
            if (mt.IS_BOOKED(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else if (type == "AVAILABLE_TICKETS")
        {
            int y;
            cin >> y;
            cout << mt.AVAILABLE_TICKETS(y) << endl;
        }
        q--;
    }
    return 0;
}