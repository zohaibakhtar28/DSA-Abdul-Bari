#include <stdio.h>
int C(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
        return C(n - 1, r - 1) + C(n - 1, r);
}
int main()
{
    int ans;
    ans = C(4, 2);
    printf("Answer : %d\n", ans);
    return 0;
}