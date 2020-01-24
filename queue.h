#include "string.h"

#pragma once

/**
 * Queue: represents a linked list of elements exhibiting
 *        a FIFO (first in first out) pattern
 * authors: hughes.ni@husky.neu.edu, schoenberger.a@husky.neu.edu
 */
class Queue : public Object {
 public:
  Queue() {}
  ~Queue() {}

  /**
   * Adds an element to the queue
   *
   * Args:
   * - o: the object to add to the end
   *
   * Returns:
   * - true on success
   * - false on failure
   */
  bool offer(Object* o) {}

  /**
   * Peeks at the front of the queue
   *
   * Returns:
   * - the first element in the queue
   * - null if empty
   */
  Object* peek() {}

  /**
   * Removes an element from the queue
   *
   * Returns:
   * - the removed object
   * - null if empty
   */
  Object* poll() {}

  // Overrides object hash()
  size_t hash() {}

  // Overrides object equals
  bool equals(Object* other) {}

  // Overrides object copy
  Object* copy() {}

  // Overrides object print_self
  void print_self() {}
};