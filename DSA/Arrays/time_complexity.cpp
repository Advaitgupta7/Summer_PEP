/*
Asymptotic Notations:

1. Big O Notation - O()
   - Represents the Upper Bound (Worst Case).
   - Describes the maximum time an algorithm can take.
   Example: Linear Search -> O(n)

2. Big Omega Notation - Ω()
   - Represents the Lower Bound (Best Case).
   - Describes the minimum time an algorithm can take.
   Example: Linear Search -> Ω(1)
   (Element found at the first position)

3. Big Theta Notation - Θ()
   - Represents the Tight Bound (Average/Exact Growth Rate).
   - Used when the upper and lower bounds are the same.
   Example: Accessing an array element -> Θ(1)

Relationship:
Ω(f(n)) ≤ Θ(f(n)) ≤ O(f(n))

Common Time Complexities:

O(1) -> Constant Time
Example:
int x = arr[0];

--------------------------------

O(log n) -> Logarithmic Time
Example:
while(low <= high){
    int mid = low + (high - low)/2;
}

(Binary Search)

--------------------------------

O(n) -> Linear Time
Example:
for(int i = 0; i < n; i++){
    cout << arr[i];
}

--------------------------------

O(n log n) -> Linearithmic Time
Example:
Merge Sort
Heap Sort

--------------------------------

O(n²) -> Quadratic Time
Example:
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << i << " " << j;
    }
}

--------------------------------

O(n³) -> Cubic Time
Example:
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            cout << i << j << k;
        }
    }
}

--------------------------------

O(2^n) -> Exponential Time
Example:
int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

--------------------------------

O(n!) -> Factorial Time
Example:
Generating all permutations of a string.

--------------------------------

Linear Search:
Best Case    -> Ω(1)
Average Case -> Θ(n)
Worst Case   -> O(n)

Binary Search:
Best Case    -> Ω(1)
Average Case -> Θ(log n)
Worst Case   -> O(log n)
*/