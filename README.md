Andrew Schoenberger (aschoenberger)  

Nicholas Hughes (nghughes)  

# Assignment 1 Part 2 API  

## Object

Represents any object that can be hashed and exhibit congruence

Contains Virtual Methods:
- size_t hash()
  - hashes and returns hash value
- bool equals(Object* other)
  - returns whether or not this object is equal to the given object
- Object *copy()
  - returns a copy of this object in separately allocated memory
- void print_self()
  - prints this object's data

## String - Inherits Object

Represents a string (array of characters) as an object

Inherits all object virtual methods

Contains methods:
- size_t length()
  - returns the length of this string
- char *get()
  - returns this string as an array of chars
- char char_at(size_t i)
  - returns the character at index i (null if out of bounds)
- String *concat(String *s)
  - appends the given string to this string and returns the result as a new string object

## Queue - Inherits Object

Represents a linked list of elements exhibiting a FIFO (first in first out) pattern

Inherits all object virtual methods

Contains methods:
- bool offer(Object* o)
  - adds an object to the end of this queue
  - returns true on success and false if object is null
- Object *peek()
  - returns the object in the front of this queue
  - returns null if queue is empty
- Object *poll()
  - removes the first object in the queue and returns it
  - returns null if queue is empty