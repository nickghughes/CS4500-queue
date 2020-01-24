#include <cstdlib>

#pragma once

/**
 * Object: represents any object that can be
 *         hashed and exhibit congruence.
 * author: hughes.ni@husky.neu.edu, schoenberger.a@husky.neu.edu
 */
class Object {
 public:
  virtual ~Object() {}

  // Hashes this object with a size_t
  virtual size_t hash() {}

  /**
   * Determines whether this object is equal to another object
   *
   * Args:
   * - other: the object to compare this object to
   */
  virtual bool equals(Object *other) {}

  // Returns a newly allocated copy of this object
  virtual Object *copy() {}

  // Prints this object
  virtual void print_self() {}
};