Andrew Schoenberger (aschoenberger)  

Nicholas Hughes (nghughes)  

# Assignment 1 Part 2 API  

## Object

Represents any object that can be hashed and exhibit congruence

Contains Virtual Methods:
- size_t hash()
  - hashes and returns hash value
- bool equals(Object* const other)
  - returns whether or not this object is equal to the given object

## String - Inherits Object

Represents a string (array of characters) as an object

Inherits all object virtual methods

Contains methods:
- size_t size()
  - returns the length of this string
- String *concat(String const *s)
  - appends the given string to this string and returns the result as a new string object
- int cmp(String *const s)
  - compares this string to another string, returning -1 if this string is less than, 0 if equal to, and 1 if greater than the other string  

## Queue - Inherits Object

Represents a linked list of elements exhibiting a FIFO (first in first out) pattern

Inherits all object virtual methods

Contains methods:
- bool offer(Object* o)
  - adds an object to the END of this queue
  - returns true on success and false if object is null
- Object *peek()
  - returns the object in the FRONT of this queue
  - returns null if queue is empty
- Object *poll()
  - removes the object in the FRONT of this queue and returns it
  - returns null if queue is empty