#include "ChronoTimer.h"
#include <iostream>

ChronoTimer::ChronoTimer(const std::string &name) : name(name)
{
    startTime = std::chrono::high_resolution_clock::now();
}

ChronoTimer::~ChronoTimer()
{
    auto endTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
    std::cout << "Function [" << name << "] took " << duration << " us" << std::endl;
}
