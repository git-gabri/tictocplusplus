# tictocplusplus
Adds a simple `stopwatch` class that allows similar functionality to MATLAB's `tic toc` commands.

## Usage
```
#include "stopwatch.hpp"

[...]

stopwatch s;
s.tic();

[code to be timed here]

s.toc();
std::cout << "Elapsed time: " << s << " seconds." << std::endl;
```
