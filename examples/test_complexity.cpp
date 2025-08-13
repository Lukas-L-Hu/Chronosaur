#include "../include/ChronoTimer.h"
#include <vector>
#include <algorithm>

void testSort(int n)
{
    CHRONOTIMER_SCOPE("testSort");
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
        v[i] = n - i;
    std::sort(v.begin(), v.end());
}
int main()
{
    for (int size = 1000; size <= 10000; size += 1000)
    {
        testSort(size);
    }
    return 0;
}
