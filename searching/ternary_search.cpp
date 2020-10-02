#include <bits/stdc++.h>
using namespace std;

// TERNARY SEARCH IS SIMILAR TO BINARY SEARCH BUT INSTEAD OF DIVIDING THE ARRAY INTO HALF,WE WILL DIVIDE THE ARRAY INTO THREE PARTS.THIS IS ALSO BASED ON THE DIVIDE AND CONQUER APPROACH BUT RARELY USED.

int ternary_search(int start, int end, int key, int arr[])
{
    // CHECK IF START IS LESS THAN AND EQUAL TO END
    if (start <= end)
    {
        // FIND TWO MIDDLE INDEXES
        int mid1 = start + (end - start) / 3;
        int mid2 = end - (end - start) / 3;

        // CHECK IF IT MATCHES TO THE FIRST INDEXED ELEMENT.
        if (arr[mid1] == key)
            return mid1;

        // CHECK IF IT MATCHES TO THE SECOND INDEXED ELEMENT.
        if (arr[mid2] == key)
            return mid2;

        // CHECK IF KEY ELEMENT IS LESS THAN THE MID THEN CALL ON LEFT SIDE OF THE MID
        if (key < arr[mid1])
            return ternary_search(start, mid1 - 1, key, arr);

        // CHECK IF KEY ELEMENT IS GREATER THAN THE MID THEN CALL ON RIGHT OF THE MID
        else if (key > arr[mid2])
            return ternary_search(mid2 + 1, end, key, arr);

        // ELSE SEARCH FROM MID1 TO MID2
        else
            return ternary_search(mid1 + 1, mid2 - 1, key, arr);
    }
    // IF ELEMENT IS NOT FOUND THEN RETURN -1
    return -1;
}
int main()
{
    // FIRST WE WILL TAKE THE INPUT SIZE,KEY AND THE ARRAT AS USUAL
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // WE WILL DO THIS RECURSIVELY THIS TIME :)
    // FIRST WE WILL CALCULATE THE START AND END OF THE ARRAY.
    int start = 0, end = n - 1;
    // THEN WE WILL CALL OUR FUNCTION TO GET THE ANSWER AND JUST PRINT IT

    int ans = ternary_search(start, end, key, arr);

    cout << ans << endl;
}