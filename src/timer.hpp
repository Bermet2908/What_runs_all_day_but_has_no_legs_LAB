#pragma once
#include <ctime>

class Timer {
private:
    std::time_t start_time_;
    std::time_t end_time_;
    bool running_;

public:
    Timer();
    void start();
    void stop();
    long elapsed() const;
};

