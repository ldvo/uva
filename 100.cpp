#include <cstdio>
#include <algorithm>

using namespace std;

int main ()
{
    int i, j;

    while ( scanf ("%d %d", &i, &j) != EOF ) {

        if ( i > j ) swap (i, j);

        int max_cycle_length = 0;
        int cycle_length;

        for (int x = i; x <=j; x++)
        {
            unsigned int n = x;
            cycle_length = 1;

            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n /= 2;
                cycle_length++;
            }

            if ( cycle_length > max_cycle_length )
                max_cycle_length = cycle_length;
        }

        printf ("%d %d %d\n", temp_i, temp_j, max_cycle_length);
    }

    return 0;
}
