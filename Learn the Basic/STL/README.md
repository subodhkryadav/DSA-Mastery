# STL (Standard Template Library)

This folder covers the C++ Standard Template Library. STL provides ready-to-use data structures and algorithms that are heavily used in competitive programming and DSA.

All implementations are in C++.

---

## Topics Covered

| Container | Type | Use Case |
|-----------|------|----------|
| Vector | Sequence | Dynamic array, most commonly used container |
| Stack | Adaptor | LIFO — Last In First Out operations |
| Queue | Adaptor | FIFO — First In First Out operations |
| Deque | Sequence | Double-ended queue, insert/remove from both ends |
| List | Sequence | Doubly linked list, efficient insert/delete anywhere |
| Set | Associative | Stores unique elements in sorted order |
| Map | Associative | Key-value pairs in sorted order by key |
| Priority Queue | Adaptor | Max-heap by default, access largest element first |
| Sort | Algorithm | Built-in sort for arrays and containers |
| Utility | Utility | Pair, make_pair, swap and other helpers |

---

## Key Notes

**Vector** — The most used STL container. Supports dynamic sizing, random access in O(1), and push/pop at end in O(1) amortized.

**Stack** — Built on top of deque. Only allows push, pop, and top operations. Used in problems like balanced parentheses, next greater element.

**Queue** — Used in BFS traversal, task scheduling. Supports push at back and pop from front.

**Deque** — Like vector but supports O(1) insert and delete from both front and back. Used in sliding window problems.

**Set** — All elements are unique and sorted. Supports insert, delete, and search in O(log n).

**Map** — Stores key-value pairs sorted by key. All operations are O(log n). Useful for frequency counting and lookups.

**Priority Queue** — Max-heap by default. Access to the largest element in O(1). Push and pop in O(log n). Use `greater<int>` for min-heap.

**Sort** — `sort(arr, arr+n)` sorts in ascending order. Custom comparator can be passed for custom sorting logic.
