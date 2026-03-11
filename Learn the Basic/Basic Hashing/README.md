# Basic Hashing

Hashing is a technique used to store and retrieve data in constant time O(1) on average. It maps a key to a specific index using a hash function.

---

## Definition

A hash map (or hash table) is a data structure that stores key-value pairs. Given a key, it computes a hash and uses that to find the value directly without searching through all elements.

In Python, dictionaries (`dict`) and sets (`set`) are built on hashing.  
In C++, `unordered_map` and `unordered_set` are the hash-based containers.

---

## Key Points

- Hash maps provide O(1) average time for insert, delete, and search.
- The worst case is O(n) due to hash collisions, but this is rare with a good hash function.
- Use hashing when you need fast lookups, frequency counting, or checking membership.
- Sets store only unique keys. Maps store key-value pairs.
- In C++, `unordered_map` is faster than `map` but does not maintain order.

---

## Common Use Cases

- Counting frequency of characters in a string
- Finding duplicates in an array
- Caching results (memoization in dynamic programming)
- Checking if two arrays have common elements
