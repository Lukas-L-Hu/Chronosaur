#ifndef CHRONOTIMER_H
#define CHRONOTIMER_H

#include <string>
#include <chrono>

class ChronoTimer {
    public:
        ChronoTimer(const std::string& name);
        ~ChronoTimer();

    private:
        std::string name;
        std::chrono::high_resolution_clock::time_point startTime;
};

#define CHRONOTIMER_FUNCTION() CHRONOTimer timer(__FUNCTION__)

#endif