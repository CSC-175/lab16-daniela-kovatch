// Code to implement the gcf function goes here
#include <iostream>
using namespace std;

// Recursive function to compute the GCF using the Euclidean Algorithm
int gcf(int A, int B) {
    if (B == 0)
        return A;
    return gcf(B, A % B);
}
