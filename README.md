# Matrix-Flatten
A 3D matrix is to be stored in a 1D vector (flattened). The 3D matrix is of size n x m x p and is indexed by i, j, k. The 1D vector is of size q and is indexed by y.
# q = i * m * p + (k + j * p)
## O(1) conversion solution based on pointer and array properties -> O(1)Conversion.cpp
## O(n * m * p) simple iterating over all elements solution -> O(N)Conversion.cpp
Compiled with g++ (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
