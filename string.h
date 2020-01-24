#include "object.h"

#pragma once

/**
 * String: represents a string (array of characters) as an object
 * author: hughes.ni@husky.neu.edu, schoenberger.a@husky.neu.edu
 */
class String : public Object {
 public:
  String(char *buf) {}

  String(const char *buf) {}

  ~String() {}

  // Calculates the length of the string
  size_t length() {}

  // Returns the value of this string
  char *get() {}

  // Gets the char at a specific position in the string
  char char_at(size_t i) {}

  /**
   * Concatenates another string and this string,
   *  and returns the result as a new string object
   *
   * Args:
   * - s: the string to append to this string
   */
  String *concat(String *s) {}

  // Overrides object hash()
  size_t hash() {}

  // Overrides object equals
  bool equals(Object *other) {}

  // Overrides object copy
  Object *copy() {}

  // Overrides object print_self
  void print_self() {}
};