//PAPER 4 QUESTION 3
#include <bits/stdc++.h> 
using namespace std;  
  
int minimumD(int arr[], int s, int x, int y) 
{ 
    int i, j; 
    int min_d = INT_MAX; 
    for (i = 0; i < s; i++) 
    { 
        for (j = i+1; j < s; j++) 
        { 
            if( (x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min_d > abs(i-j)) 
            { 
                min_d = abs(i-j); 
            } 
        } 
    } 
    return min_d; 
} 
  
/* Driver code */
int main()  
{ 
    int arr[] = {1, 3, 5, 6, 7, 8, 9, 10}; 
    int s = sizeof(arr)/sizeof(arr[0]); 
    int x = 1; 
    int y = 6; 
  
    cout << "Minimum distance between " << x <<  " and " << y << " is " <<  minimumD(arr, s, x, y) << endl; 
    return 0;
} 
  
