# Cool Algorithms 

This repository is a collection of various algorithms that I find cool and interesting to explore and understand. 

> **Note:** Some are practical and some are purely creative but not ideal for real world scenarios. 

# Index
1. [Sleep sort](https://github.com/Subbu-Lakshmi-Sruthi/algo/blob/main/sorting/sleep-sort.cpp) - A sorting algorithm that utilizes multithreading. By creating a thread for each element to be sorted, and make the thread sleep for a duration proportional to the value of the element it represents.
2. [Reservoir Sampling](https://github.com/Subbu-Lakshmi-Sruthi/algo/blob/main/sampling/reservoir-sampling.cpp) - A randomized algorithm for randomly choosing k samples from a list of n items. It populates the sampling array with the first k elements in the stream, and iterates the stream from k + 1 to n, for each iteration i, generates a random number j and if j < k replace jth element in the sample with the current element (ith) in the stream.