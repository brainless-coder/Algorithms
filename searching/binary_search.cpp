#include <bits/stdc++.h>
using namespace std;

// BINARY SEARCH WORKS ON THE DIVIDE AND CONQUER APPROACH.IT ONLY WORKS ON A SORTED ARRAY.
// THE TIME COMPLEXITY IS O(logn) BECAUSE IT DIVIDES THE ARRAY INTO HALF EACH TIME.

int main()
{
    // FIRST WE TAKE THE INPUT SIZE,KEY AND THE ARRAY AS USUAL
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // IT CAN BE DONE BOTH ITERATIVELY AND RECURSIVELY BUT FOR SIMPLICITY WE WILL DO IT ITERATIVELY BECAUSE MAYBE SOME BEGGINERS DONT KNOW THE CONCEPT OF RECURSION YET.

    // YOU CAN ALSO OPEN AN ISSUE IF U WANT A RECURSIVE IMPLEMENTATION TOO.

    // FIRST WE CALCULATE THE START AND THE END OF THE ARRAY.
    int start = 0, end = n - 1;

    // LOOP WILL RUN TILL ARRAY WILL HAVE A SINGLE ELEMENT TO SEARCH FOR
    while (start <= end)
    {
        // CALCULATE MID TO USE THE DIVIDE AND CONQUER APPROACH
        int mid = (start + end) / 2;

        // IF THE KEY IS AT THE MID ITSELF

        if (arr[mid] == key)
        {
            // PRINT THE INDEX AND END THE PROGRAM
            cout << mid << endl;
            return 0;
        }
        // IF OUR KEY ELEMENT IS LESS THAN THE MIDDLE ELEMENT THEN WE HAVE TO FIND IN THE LEFT SIDE OF THE ARRAY HENCE WE WILL MOVE OR END POINTER TO MID TO DIVDE THE ARRAY IN HALF FOR OUR NEXT ITERATION.

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        // NOW IF THE KEY ELEMENT IS GREATED THAN THE MIDDLE ELEMENT WE WILL MOVE THE START POINTER TO THE MID AND DIVIDE THE ARRAY INTO HALF,AGAIN.

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    // IF THE ELEMENT IS NOT FOUND IN THE ARRAY
    cout << -1 << endl;
}