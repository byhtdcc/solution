#include <bits/stdc++.h>

int a[105];
int b[105];
int main()
{
	int n;
	int ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				if (i == j || k == i || k == j)
				{
					continue;
				}
				if (a[i] + a[j] == a[k] && b[k] != 1)
				{
					ans++;
					b[k] = 1;
				}
			}
		}
	}
	printf("%d", ans);
	return 0;
}