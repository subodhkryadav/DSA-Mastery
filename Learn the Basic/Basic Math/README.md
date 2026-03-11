# Basic Math

This folder covers the fundamental math problems that are commonly used in DSA. Each problem is implemented in Python with multiple approaches.

---

## Topics Covered

| Topic | What it covers |
|-------|----------------|
| Count Digits | Count the number of digits in a given number |
| Reverse a Number | Reverse the digits of a number using loops and recursion |
| Palindrome Check | Check if a number reads the same forwards and backwards |
| Armstrong Number | Check if the sum of cubes of digits equals the number itself |
| Extract All Digits | Extract each digit from a number one by one |
| All Divisors | Find all numbers that divide a given number evenly |
| GCD | Find the Greatest Common Divisor using subtraction, modulo, and Euclidean algorithm |
| Prime Number | Check if a number is prime using brute force and optimized sqrt method |

---

## Files

| File | Description |
|------|-------------|
| `count_number_0.py` | Count digits - basic approach |
| `count_number_1.py` | Count digits - using string conversion |
| `count_number_2.py` | Count digits - using logarithm |
| `Reverse_0.py` | Reverse number - approach 1 |
| `Reverse_1.py` | Reverse number - approach 2 |
| `Reverse_2.py` | Reverse number - approach 3 |
| `Palindrome_1.py` | Palindrome check - method 1 |
| `Palindrome_2.py` | Palindrome check - method 2 |
| `Amstrong_number.py` | Armstrong number check |
| `Extractiion_of_all_the_digits.py` | Extract each digit from a number |
| `All_Divisors.py` | Find all divisors - brute force O(n) |
| `All_Divisors_1.py` | Find all divisors - optimized O(sqrt n) |
| `GCD_of_two_number.py` | GCD using subtraction method |
| `GCD_1.py` | GCD using modulo |
| `GCD_2.py` | GCD using Euclidean algorithm |
| `GCD_3.py` | GCD - additional approach |
| `PrimeNumber_1.py` | Prime check - brute force |
| `PrimeNumber_2.py` | Prime check - optimized using sqrt |

---

## Key Concepts

**GCD (Greatest Common Divisor)** — The largest number that divides both numbers without a remainder. The Euclidean algorithm is the most efficient approach: `gcd(a, b) = gcd(b, a % b)`.

**Prime Number** — A number greater than 1 that has no divisors other than 1 and itself. Optimized check only goes up to sqrt(n).

**Armstrong Number** — A number where the sum of each digit raised to the power of total digits equals the number. Example: 153 = 1^3 + 5^3 + 3^3.

**All Divisors** — Instead of checking all numbers up to n, check only up to sqrt(n) and collect divisors in pairs for O(sqrt n) efficiency.
