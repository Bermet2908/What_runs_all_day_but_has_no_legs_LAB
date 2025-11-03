#include "timer.hpp"
#include <ctime>

Timer::Timer() : start_time_{0}, end_time_{0}, running_{false} {
}

void Timer::start() {
    start_time_ = std::time(nullptr);
    running_ = true;
}

void Timer::stop() {
    end_time_ = std::time(nullptr);
    running_ = false;
}

long Timer::elapsed() const {
    std::time_t finish;
    if (running_) {
        finish = std::time(nullptr);
    } else {
        finish = end_time_;
    }
    return finish - start_time_;
}

