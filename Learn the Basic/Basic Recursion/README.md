# Basic Recursion

Recursion is a technique where a function calls itself to solve a smaller version of the same problem. It continues until it reaches a base case, which stops the recursive calls.

---

## Definition

A function is called recursive if it calls itself directly or indirectly. Every recursive function must have two parts:

- **Base Case** — the condition where the function stops calling itself
- **Recursive Case** — the part where the function calls itself with a smaller input

---

## How it Works

Each recursive call is added to the call stack. When the base case is reached, the calls start returning one by one and the stack unwinds.

```
factorial(3)
  → 3 * factorial(2)
       → 2 * factorial(1)
            → 1 * factorial(0)
                 → returns 1
```

---

## Key Points

- Recursion uses the call stack internally, so deep recursion can cause stack overflow.
- Always define the base case first, otherwise the function will recurse infinitely.
- Time complexity of recursive solutions depends on the number of recursive calls made.
- Many recursion problems can also be solved with iteration, but recursion is more readable for divide-and-conquer type problems.
