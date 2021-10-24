#ifndef STOPWATCH_HPP
#define STOPWATCH_HPP

#include <iostream>
#include <chrono>

class stopwatch{
    private:
        std::chrono::high_resolution_clock::time_point tic_time;
        std::chrono::high_resolution_clock::time_point toc_time;

    public:
        stopwatch() {
            tic_time = std::chrono::high_resolution_clock::now();
            toc_time = tic_time;
        }

        std::chrono::high_resolution_clock::time_point tic() {
            tic_time = std::chrono::high_resolution_clock::now();
            return tic_time;
        }

        std::chrono::high_resolution_clock::time_point toc() {
            toc_time = std::chrono::high_resolution_clock::now();
            return toc_time;
        }

        friend std::ostream& operator<<(std::ostream& os, const stopwatch& sw){
            os << std::chrono::duration<double>(sw.toc_time - sw.tic_time).count();
            return os;
        }
};

#endif