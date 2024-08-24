#include <bits/stdc++.h>
#include "T.h"
using namespace std;
using namespace Test;

int main()
{
    Tool t;
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

    t.sort(a, n);

    float x = t.average(n, a);
    printf("平均数:%f\n", x);

    printf("中位数:%f\n", t.median(n, a));

    float y = t.variance(n, a, x);
    printf("方差:%f\n", y);

    printf("标准差:%f\n", sqrt(y));

    printf("极差:%f\n", t.range(n, a));

    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = -2147483648;
    }
    t.mode(b, a);
    printf("众数:");
    for (int i = 0; i < n; i++)
    {
        if (b[i] != -2147483648)
            printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
