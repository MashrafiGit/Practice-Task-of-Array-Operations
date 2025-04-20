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

    int i = 0;
    int j = n - 1;
    int palindrome = 0;

    while (i < j)
    {
        if(a[i] == a[j])
        {
            palindrome = 1;
        }
        else if (a[i] != a[j])
        {
            palindrome = 0;
            break;
        }
        
        i++;
        j--;
    }

    if(palindrome == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}