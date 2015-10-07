#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int sequence[3100], diff[3100];
    char currentchar;
    int n;
    bool possible;

    while ( scanf("%d", &n)!= EOF )
    {
        possible = true;
        scanf("%d", &sequence[0]);
        for (int x = 1; x < n; x++)
        {
            scanf("%d", &sequence[x]);
            sequence[x-1] = abs(sequence[x-1]-sequence[x]);
        }
        sort(sequence, sequence + n-1);
        for (int x = 0; x < n-1; x++)
        {
            if (sequence[x] != x+1)
                possible = false;
        }

        if (possible)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;



    }

    return 0;

}
