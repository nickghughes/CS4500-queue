#include "object.h"

#pragma once

/**
 * String: represents a string (array of characters) as an object
 * author: hughes.ni@husky.neu.edu, schoenberger.a@husky.neu.edu
 */
class String : public Object {
 public:
  // Empty constructor
  String();

  // Constructor taking in string literal
  String(const char *buf);

  // Constructor taking in char pointer
  String(char *buf);

  // Constructor taking in string
  String(String *const s);

  // Inherited destructor from object
  ~String();

  // Calculates the length of the string
  size_t size();

  /** Compares string to another string (alphabetical)
   *
   * Args:
   * - s: string to compare to this string
   * Returns:
   * - <0 if this string belongs first alphabetically
   * - 0 if strings are equal
   * - >0 if this string belongs second alphabetically
   */
  int cmp(String *const s);

  /**
   * Concatenates another string and this string,
   *  and returns the result as a new string object
   *
   * Args:
   * - s: the string to append to this string
   */
  String *concat(String const *s);

  // Overrides object hash()
  size_t hash();

  // Overrides object equals
  bool equals(Object const *other);
};