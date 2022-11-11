#include <bits/stdc++.h>

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    long long a, b, x = 1;
    scanf("%lld%lld", &a, &b);
    if (a == 1)
    {
        printf("1\n");
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            x = x * a;
            if (x > 1e9)
            {
                printf("-1\n");
                break;
            }
            if (i == b && x <= 1e9)
            {
                printf("%lld\n", x);
            }
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}