#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int arr[100000000];
    long long int first = 0;
    long long int second = 1;
    long long int t, x, y, ele, temp;
    for (int i = 0; i < 100000000; i++)
    {
        arr[i] = 0;
    }
    arr[first] = 1;
    arr[second] = 1;
    for (long long int i = 0; i < 100000000; i++)
    {
        ele = first + second;
        temp = second;
        second = ele;
        first = temp;
        arr[ele] = 1;
    }
    scanf("%lld", &t);
    while (t--)
    {
        long long int count = 0;
        scanf("%lld", &x);
        scanf("%lld", &y);
        for (long long int i = x; i <= y; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }
        printf("%lld\n", count);
        return 0;
    }
}
