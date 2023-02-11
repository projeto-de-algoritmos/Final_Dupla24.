# include<iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
#include <partition.h>

using namespace std;

/* In case someone wants to pass in the pivValue, I broke partition into 2 pieces.
 */
int pivot(vector<int>& vec, int pivot, int start, int end);


/* Returns the k-th element of this array. */
int MoM(vector<int>& vec, int k, int start, int end);