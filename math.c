#include <stdio.h>

int main()
{
    ```
    double x;
    double answer=0;                   // Return value
    double holder;                     // Holds the value (1/x)
    int counter=1;                    // Determine if (1/x) should be negative or positive.

    // Leibniz Formula (for pi): 1 - (1/3) + (1/5) - (1/7) + (1/9) - ... = pi/4
    for (x=1; x<100000000; x+=2) {
        holder = (1/x);
        if (counter % 2 == 0) {
            holder = -holder;
        }
        counter++;
        answer = answer + holder;
    }

    // Variable answer approximately equals pi/4.
    // Multiply this answer by 4 to compute the value of pi and verify Leibniz formula.

    answer = answer * 4;
    printf("%6lf", answer);
    // Answer is rounded up
    return answer;
    ```
}
