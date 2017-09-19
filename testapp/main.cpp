// high_resolution_clock example
#include <iostream>
#if __cplusplus < 201103L
#include <unistd.h>
#else
#include <thread>
#endif
#include <universalTimer.h>

int main() {
    UniversalTimer timer;

    timer.init();

#if __cplusplus < 201103L
    sleep(3);
#else
    std::this_thread::sleep_for(std::chrono::seconds(3));
#endif

    double t = timer.getTotalElapsedSeconds("Elapsed seconds: ");

    std::cout << "It took me " << t << " seconds.";
    std::cout << std::endl;

    return 0;
}
