#include <iostream>
using namespace std;

// Declare variables to receive input by the user later
int first = 0;
int second = 0;
int limit = 0;

// Declare custom function(s)
void easter_egg();

int main()
{
    cout << "First denominator: ";
    try
    {
        cin >> first;
        if (first <= 0)
        {
            throw 1;
        }
        cout << first << endl;
    }
    catch (int x)
    {
        cout << "ERROR: Number must be a positive integer." << endl;
    }

    cout << "Second denominator: ";
    try
    {
        cin >> second;
        if (second <= 0)
        {
            throw 1;
        }
        cout << second << endl;
    }
    catch (int x)
    {
        cout << "ERROR: Number must be a positive integer." << endl;
    }

    cout << "Limit: ";
    try
    {
        cin >> limit;
        if (limit < first || limit < second)
        {
            throw 2;
        }
        cout << limit << endl;
    }
    catch (int x)
    {
        cout << "ERROR: Number must be larger than both denominaros." << endl;
    }

    for (int i = 0; i < limit + 1; i++)
    {
        if (i % first == 0 && i % second == 0)
        {
            if (i == 69)
            {
                easter_egg();
            }
            else
            {
                cout << "'Tis, 'Twas" << endl;
            }
        }
        else if (i % first == 0)
        {
            cout << "'Tis" << endl;
        }
        else if (i % second == 0)
        {
            cout << "'Twas" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}

void easter_egg()
{
    cout << "’Twas bright, ’twas heav’nly, but ’tis past!" << endl
        << "Oh! ever thus, from childhood’s hour," << endl
        << "I’ve seen my fondest hopes decay;" << endl
        << "I never lov’d a tree or flow’r," << endl
        << "     But ’twas the first to fade away." << endl;
}
