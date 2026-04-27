#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bank
{
public:
    int uid[10005];
    int bal[10005];
    int n;

    Bank()
    {
        n = 0;
    }

    bool CREATE(int x, int y)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (uid[i] == x)
            {
                bal[i] = bal[i] + y;
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            return false;
        }

        uid[n] = x;
        bal[n] = y;
        n++;
        return true;
    }

    bool DEBIT(int x, int y)
    {
        for (int i = 0; i < n; i++)
        {
            if (uid[i] == x)
            {
                if (bal[i] < y)
                {
                    return false;
                }
                bal[i] = bal[i] - y;
                return true;
            }
        }
        return false;
    }

    bool CREDIT(int x, int y)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (uid[i] == x)
            {
                bal[i] = bal[i] + y;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            return true;
        return false;
    }

    int BALANCE(int x)
    {
        for (int i = 0; i < n; i++)
        {
            if (uid[i] == x)
            {
                return bal[i];
            }
        }
        return -1;
    }
};

int main()
{
    int q;
    cin >> q;
    Bank b;

    while (q > 0)
    {
        string type;
        cin >> type;

        if (type == "CREATE")
        {
            int x, y;
            cin >> x >> y;
            bool ans = b.CREATE(x, y);
            if (ans == true)
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false\n";
            }
        }
        else if (type == "DEBIT")
        {
            int x, y;
            cin >> x >> y;
            if (b.DEBIT(x, y) == true)
                cout << "true\n";
            else
                cout << "false\n";
        }
        else if (type == "CREDIT")
        {
            int x, y;
            cin >> x >> y;
            bool ans = b.CREDIT(x, y);
            if (ans)
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else if (type == "BALANCE")
        {
            int x;
            cin >> x;
            int ans = b.BALANCE(x);
            cout << ans << "\n";
        }
        q--;
    }
    return 0;
}