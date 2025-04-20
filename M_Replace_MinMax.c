#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minimum = a[0], inx1 = 0;
    int maximum = a[0], inx2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
            inx1 = i;
        }

        if (a[i] > maximum)
        {
            maximum = a[i];
            inx2 = i;
        }
    }

    // swap minimum and maximum
    int tmp = a[inx1];
    a[inx1] = a[inx2];
    a[inx2] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
