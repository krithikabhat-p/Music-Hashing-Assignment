# Hashing vs Linear Search Comparison

| Search Key | Hashing Comparisons | Linear Search Comparisons |
|------------|---------------------|---------------------------|
| 315 | 2 | 3 |
| 840 | 4 | 8 |
| 999 | 6 | 8 |

## Performance Comparison

| Feature | Hashing | Linear Search |
|---------|---------|---------------|
| Average Time | O(1) | O(n) |
| Worst Time | O(n) | O(n) |
| Space | O(m) | O(1) |
| Collision | Yes | No |
| Suitable for large data | Yes | Less suitable |

## Observation

Hashing requires fewer comparisons for the given searches.

For example, searching for 840 requires:

- Hashing: 4 comparisons
- Linear Search: 8 comparisons

Therefore, hashing provides better search performance for this application.

## Conclusion

Hashing is more suitable for the music application because song IDs can be searched faster on average.

The main disadvantage is collisions. In this experiment, 12 collision occurrences were observed.

Linear search is simple and does not require a hash table, but its search time increases as the number of songs increases.

Therefore, hashing is the preferred approach for a large music application.
