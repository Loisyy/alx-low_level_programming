 0x1A-hash_tables

A hash function is a function that takes an input (or "key") and produces a fixed-size string of characters, typically a hash value or hash code. The output is typically a unique representation of the input data, which is used to index a data structure or verify data integrity.

A good hash function has several characteristics:

Deterministic: For a given input, it always produces the same hash value.
Efficient: It should compute the hash value quickly, ideally in constant time.
Uniform distribution: It should produce hash values that are evenly distributed across the range of possible hash values to minimize collisions.
Avalanche effect: A small change in the input should produce a significantly different hash value.
Minimal collisions: Collisions (two different inputs producing the same hash value) should be rare.
A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found. To store an item in a hash table, the key is hashed to determine the index, and the value is then stored at that index.

A collision occurs when two different keys hash to the same index in the hash table. There are several ways to deal with collisions:

Chaining: Each bucket in the hash table contains a linked list of key-value pairs that hash to the same index. New items are appended to the end of the list.
Open addressing: When a collision occurs, an alternate location in the hash table is searched for by using a probing sequence.
Double hashing: In this method, a second hash function is used to calculate an offset from the original index, providing a different location to store the collided item.
The advantages of using hash tables include:

Fast lookup: Hash tables offer constant-time average-case lookup, insertion, and deletion operations.
Flexible key-value storage: They can efficiently store and retrieve key-value pairs with arbitrary keys.
Memory efficiency: Hash tables dynamically resize themselves to maintain a balance between memory usage and performance.
Some common use cases of hash tables include:

Databases: Hash tables are often used to implement database indexes, allowing fast lookups of records based on keys.
Caching: They are used in caching systems to quickly retrieve cached data based on cache keys.
Symbol tables: They are used in compilers and interpreters to store symbols and their associated attributes.
Hash-based sets and maps: Hash tables can be used to implement sets and maps, offering fast membership tests and key-value lookups.
