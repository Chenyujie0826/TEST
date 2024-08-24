#include "T.h"

Test::Tool::Tool()
{
    //TODO
}

void Test::Tool::sort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float Test::Tool::average(int n, int a[])
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b += a[i];
    }
    return b / (n + 0.0);
}

float Test::Tool::median(int n, int a[])
{
    if (n % 2)
        return a[(n - 1) / 2];
    else
        return (a[n / 2] + a[n / 2 - 1]) / 2.0;
}

float Test::Tool::variance(int n, int a[], float x)
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b += (a[i] - x) * (a[i] - x);
    }
    return b / (n + 0.0);
}

float Test::Tool::range(int n, int a[])
{
    return a[n - 1] - a[0];
}

void Test::Tool::mode(int a[], int b[])
{
    //TODO
    
}

Test::Tool::~Tool()
{
    //TODO
}
