0. Write a function that creates a hash table where size is the size of the array. Return NULL on failure, and a pointer to the new hash table on success. 
1. Write a hash function which implements the djb2 algorithm. 
2. Write a function that gives you the index of a key where key is the key and size is the size of the array of the hash table. It should use the djb2 algorithm, and return the index of the key/value pair.
3. Write a function that adds an element to the hash table where ht is the hash table you want to update, key is the key, and value is the value associated with the key. Return 1 in success, 0 on failure, and in case of collision, add a new node to the top of the list. 
4. Write a function that retrieves a value associated with a key where ht is the hash table you are searching, key is the key you are looking for. Return the value on success, or NULL if the key cannot be found. 
5. Write a function that prints a hash table. Print in the order of appearance. On NULL print nothing. 
6. Write a function that deletes a hash table. 
