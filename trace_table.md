# Hash Table Insertion Trace Table

Hash function:

h(k) = k % 10

Collision resolution: Linear Probing

| Step | Song ID | Hash Index | Collision | Final Index |
|------|---------|------------|-----------|-------------|
| 1 | 105 | 5 | No | 5 |
| 2 | 210 | 0 | No | 0 |
| 3 | 315 | 5 | Index 5 | 6 |
| 4 | 420 | 0 | Index 0 | 1 |
| 5 | 525 | 5 | Index 5, 6 | 7 |
| 6 | 630 | 0 | Index 0, 1 | 2 |
| 7 | 735 | 5 | Index 5, 6, 7 | 8 |
| 8 | 840 | 0 | Index 0, 1, 2 | 3 |

## Total Collisions

Total collision occurrences = 12

## Final Hash Table

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-------|---|---|---|---|---|---|---|---|---|---|
| Value | 210 | 420 | 630 | 840 | - | 105 | 315 | 525 | 735 | - |
