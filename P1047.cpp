#include <bits/stdc++.h>

int road[10003];
void off(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        road[i] = 1;
    }
}
int main()
{
    int l, m, ans = 0;
    scanf("%d%d", &l, &m);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        off(a, b);
    }
    for (int i = 0; i <= l; i++)
    {
        if (road[i] == 0)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}