#include <stdio.h>
#include "queue.h"

void FAIL() { exit(1); }
void OK(const char *m) { puts(m); }
void t_true(bool p) {
  if (!p) FAIL();
}
void t_false(bool p) {
  if (p) FAIL();
}
void t_null(Object *o) {
  if (o != 0) FAIL();
}

void test_queue_offer_null() {
  Queue *q = new Queue();
  t_false(q->offer(0));
  OK("Null Offer Success");
}

void test_queue_offer_success() {
  String *s = new String("Hello World");
  Queue *q = new Queue();
  t_true(q->offer(s));
  OK("Offer Success");
}

void test_empty_queue_peek() {
  Queue *q = new Queue();
  t_null(q->peek());
  OK("Empty Queue Peek Success");
}

void test_first_in_peek() {
  String *s = new String("Hello");
  String *t = new String("World");
  Queue *q = new Queue();
  q->offer(s);
  q->offer(t);
  t_true(s->equals(q->peek()));
  OK("Peek Success");
}

void test_empty_queue_poll() {
  Queue *q = new Queue();
  t_null(q->poll());
  OK("Empty Queue Poll Success");
}

void test_queue_poll_success() {
  String *s = new String("Hello");
  String *t = new String("World");
  String *u = new String("HelloWorld");
  Queue *q = new Queue();
  q->offer(s);
  q->offer(t);
  q->offer(u);
  t_true(s->equals(q->poll()));
  t_true(t->equals(q->poll()));
  t_true(u->equals(q->poll()));
  OK("Poll Success");
}

int main() {
  test_queue_offer_null();
  test_queue_offer_success();
  test_empty_queue_peek();
  test_first_in_peek();
  test_empty_queue_poll();
  test_queue_poll_success();
  return 0;
}