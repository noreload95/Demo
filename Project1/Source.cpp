#include <iostream>
#include <vector>
using namespace std;

int firstMissingPos(int A[], int n)
{

    //Count occurrence of elements
    vector<bool> presentCount;
    for (int i = 0; i < n + 1; i++)
    {
        presentCount.push_back(false);
    }

    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] <= n)
        {
            presentCount[A[i]] = true;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!presentCount[i])
        {
            return i;
        }
    }
    return n + 1;
}

int main()
{
    int A[] = { 0, 10, 2, -10, -20,1,3,4,5,8 };
    int size = sizeof(A) / sizeof(A[0]);
    cout << firstMissingPos(A, size);
}