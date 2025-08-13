#include "ChronoTimer.h"
#include <thread>
#include <chrono>

void createTimer()
{
    CHRONOTIMER_FUNCTION();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        createTimer();
    }
    return 0;
}
