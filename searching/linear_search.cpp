#include <bits/stdc++.h>
using namespace std;

// LINEAR SEARCH IS USED TO FIND A GIVEN KEY IN THE ARRAY IN A LINEAR FASHION.THE TIME COMPLEXITY OF LINEAR SEARCH IS O(N) AS IT TRAVERSE THE WHOLE ARRAY LINEARLY.
int main()
{
    // FIRST WE TAKE THE DESIRED  ARRAY AND THE KEY.
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // TRAVERSE THE ARRAY AND CHECK IF ELEMENT EXISTS OR NOT AND IF DOESNT EXISTS PRINT -1 OR THE INDEX OF THE KEY ELEMENT
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i << endl;
            return 0;
        }
    }

    // IF THE ELEMENT IS NOT FOUND
    cout << -1 << endl;
}