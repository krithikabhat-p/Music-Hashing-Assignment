# Complexity Analysis

## Hashing

Hashing is used to store and search song IDs using a hash table.

Hash function:

h(k) = k % 10

### Time Complexity

- Average case: O(1)
- Worst case: O(n)

The average search is fast because the hash function directly gives the index.

However, collisions can increase the number of comparisons.

### Space Complexity

- O(m), where m is the hash table size.

For this problem:

m = 10

---

## Linear Search

Linear search checks each song ID one by one.

### Time Complexity

- Best case: O(1)
- Average case: O(n)
- Worst case: O(n)

### Space Complexity

- O(1) extra space.

---

## Load Factor

Load factor is calculated as:

alpha = n / m

where:

n = number of elements = 8

m = hash table size = 10

Therefore,

alpha = 8 / 10

alpha = 0.80

The load factor is 0.80, which means 80% of the hash table is occupied.

---

## Collision Analysis

Total number of collisions = 12

The high number of collisions occurs because many song IDs have the same hash value.

For example:

105 % 10 = 5
315 % 10 = 5
525 % 10 = 5
735 % 10 = 5

Also:

210 % 10 = 0
420 % 10 = 0
630 % 10 = 0
840 % 10 = 0

Therefore, collisions occur frequently.

---

## Comparison

| Method | Average Time | Worst Time | Extra Space |
|--------|--------------|------------|-------------|
| Hashing | O(1) | O(n) | O(m) |
| Linear Search | O(n) | O(n) | O(1) |

## Conclusion

Hashing is more suitable for the music application because it provides faster average search performance than linear search.

Even though collisions occur, linear probing allows the elements to be stored and searched.

Therefore, hashing is the preferred method for searching song IDs when the application contains a large number of songs.
