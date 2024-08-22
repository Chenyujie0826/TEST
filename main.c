#include <stdio.h>
#include <math.h>

void sort(int arr[], int sz)
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

float average(int n, int a[])
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b += a[i];
    }
    return b / (n+0.0);
}

float median(int n, int a[])
{
    sort(a, n);
    if (n % 2)
        return a[(n - 1) / 2];
    else
        return (a[n / 2] + a[n / 2 - 1]) / 2.0;
}

float variance(int n, int a[], float x)
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b += (a[i] - x) * (a[i] - x);
    }
    return b / (n+0.0);
}

float range(int n, int a[])
{
    sort(a, n);
    return a[n - 1] - a[0];
}

int main()
{
    printf("*统计计算器*\n");

    printf("数据个数:");
    int n;
    scanf("%d", &n);

    int a[n];
    printf("输入数据(用空格隔开):");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    float x = average(n, a);
    printf("平均数:%f\n", x);

    printf("中位数:%f\n", median(n, a));

    float y = variance(n, a, x);
    printf("方差:%f\n", y);

    printf("标准差:%f\n", sqrt(y));

    printf("极差:%f\n", range(n, a));
    return 0;
}

