#include <bits/stdc++.h>

int a[105] = {100};
int b[105];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                b[i] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}