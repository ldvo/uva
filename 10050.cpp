#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests, days, parties, param, currentday, strikecount;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        vector<int> strikedays(3700);
        strikecount = 0;
        cin >> days >> parties;
        for (int y = 0; y < parties; y++)
        {
            cin >> param;
            currentday = param;
            while (currentday <= days)
            {
                if (currentday % 7 != 6 && currentday % 7 != 0 && strikedays[currentday] != 1)
                {
                    strikecount++;
                    strikedays[currentday] = 1;
                }
                currentday += param;
            }
        }
        cout << strikecount << endl;
        strikedays.clear();
    }

    return 0;

}
