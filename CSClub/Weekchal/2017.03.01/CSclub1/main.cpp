/*****************************************************
        Find the number of integers 1 < n < 10000000,
        for which n and n + 1 have the same number
        of positive divisors.

        D.Koltsov 2017.03.02
*****************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count1 = 0;
    int count2 = 0;
    int total = 1;
    int n = 4;
    int d;
    double n_check;

    while (n < 10000001){
        d = 2;
        n_check = sqrt(n);
        while (d <= n_check){
            if (n % d == 0)
                count2++;
            d++;
        }
        if (floor(n_check) < n_check)
            count2 *= 2;
        else
            count2 = count2 * 2 - 1;
        if (count2 == count1)
            total++;
        count1 = count2;
        count2 = 0;
        n++;
    }
    cout << endl << "\t" << total << endl;
    return 0;
}
