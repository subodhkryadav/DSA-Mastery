# Sorting

This folder is dedicated only to sorting algorithms. Each sorting algorithm is implemented with a clean explanation of how it works, its time complexity, and when to use it.

---

## Sorting Algorithms

| Algorithm      | Best Case    | Average Case | Worst Case   | Space    | Stable |
|----------------|--------------|--------------|--------------|----------|--------|
| Bubble Sort    | O(n)         | O(n^2)       | O(n^2)       | O(1)     | Yes    |
| Selection Sort | O(n^2)       | O(n^2)       | O(n^2)       | O(1)     | No     |
| Insertion Sort | O(n)         | O(n^2)       | O(n^2)       | O(1)     | Yes    |
| Merge Sort     | O(n log n)   | O(n log n)   | O(n log n)   | O(n)     | Yes    |
| Quick Sort     | O(n log n)   | O(n log n)   | O(n^2)       | O(log n) | No     |
| Cyclic Sort    | O(n)         | O(n)         | O(n)         | O(1)     | No     |
| Heap Sort      | O(n log n)   | O(n log n)   | O(n log n)   | O(1)     | No     |
| Counting Sort  | O(n+k)       | O(n+k)       | O(n+k)       | O(k)     | Yes    |
| Radix Sort     | O(nk)        | O(nk)        | O(nk)        | O(n+k)   | Yes    |

---

## Brief Notes

**Bubble Sort** — Repeatedly swaps adjacent elements if they are in the wrong order. Simple but slow for large inputs.

**Selection Sort** — Finds the minimum element from the unsorted part and places it at the beginning. Always O(n^2) regardless of input.

**Insertion Sort** — Builds the sorted array one item at a time. Works well for small or nearly sorted arrays.

**Merge Sort** — Divides the array into halves, sorts each half, and merges them. Guaranteed O(n log n) but uses extra space.

**Quick Sort** — Picks a pivot, partitions the array around it, and recursively sorts both sides. Fast in practice but worst case is O(n^2).

**Cyclic Sort** — Best used when the array contains numbers in a range like 1 to N. Places each number directly at its correct index.

**Heap Sort** — Uses a max-heap to sort elements. In-place and O(n log n) but not stable.

**Counting Sort** — Works only for integers within a known range. Very fast when the range is small.

**Radix Sort** — Sorts numbers digit by digit from least significant to most significant. Efficient for large datasets with fixed-length integers.

---

Note: This folder will be updated as each sorting algorithm is practiced and implemented.
