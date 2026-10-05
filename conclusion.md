# Final Conclusion

Hashing using the Division Method was implemented for the given music application.

The hash function used was:

h(k) = k % 10

Linear probing was used to resolve collisions.

A total of 12 collisions occurred and the load factor was 0.80.

Hashing required fewer comparisons than linear search for the tested search keys. Hashing has an average time complexity of O(1), while linear search has an average time complexity of O(n).

Therefore, hashing is more suitable for a music application with a large number of song IDs because it provides faster average search performance.
