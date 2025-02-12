#include <bits/stdc++.h>
using namespace std;

void INTERCHANGE(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

int QUICK(int A[], int N, int BEG, int END)
{

    int LEFT = BEG, RIGHT = END;
    int LOC = BEG;
STEP2:
    while (A[LOC] <= A[RIGHT] && LOC != RIGHT)
    {
        RIGHT = RIGHT - 1;
    }
    if (LOC == RIGHT)
    {
        return LOC;
    }

    if (A[LOC] > A[RIGHT])
    {
        INTERCHANGE(&A[LOC], &A[RIGHT]);
        LOC = RIGHT;
    }
STEP3:
    while (A[LEFT] <= A[LOC] && LEFT != LOC)
    {
        LEFT = LEFT + 1;
    }
    if (LOC == LEFT)
    {
        return LOC;
    }
    if (A[LEFT] > A[LOC])
    {
        INTERCHANGE(&A[LOC], &A[LEFT]);
        LOC = LEFT;
        goto STEP2;
    }
    return 0;
}

void QUICK_SORT(int A[], int N)
{
    int TOP = -1;
    int LOWER[N], UPPER[N], BEG, END, LOC;
    if (N > 1)
    {
        TOP = TOP + 1;
        LOWER[TOP] = 0;
        UPPER[TOP] = N - 1;
    }
    while (TOP >= 0)
    {
        BEG = LOWER[TOP];
        END = UPPER[TOP];
        TOP = TOP - 1;

        LOC = QUICK(A, N, BEG, END);
        if (BEG < LOC - 1)
        {
            TOP = TOP + 1;
            LOWER[TOP] = BEG;
            UPPER[TOP] = LOC - 1;
        }
        if (LOC + 1 < END)
        {
            TOP = TOP + 1;
            LOWER[TOP] = LOC + 1;
            UPPER[TOP] = END;
        }
    }
}

void PRINT_ARRAY(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int ARRAY[] = {2, 1, 4, 5, 3};

    int sizeOf_ARRAY = sizeof(ARRAY) / sizeof(int);
    PRINT_ARRAY(ARRAY, sizeOf_ARRAY);
    QUICK_SORT(ARRAY, sizeOf_ARRAY);
    PRINT_ARRAY(ARRAY, sizeOf_ARRAY);
}