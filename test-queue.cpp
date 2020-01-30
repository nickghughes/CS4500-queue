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

void test_queue_equality() {
  Queue *q1 = new Queue();
  Queue *q2 = new Queue();
  t_true(q1->equals(q2));
  t_true(q1->hash() == q2->hash());

  String *s = new String("Hello");
  String *t = new String("World");
  String *u = new String("HelloWorld");
  q1->offer(s);
  q1->offer(t);
  q1->offer(u);
  t_false(q1->equals(q2));
  t_false(q1->hash() == q2->hash());

  q2->offer(s);
  q2->offer(t);
  q2->offer(u);
  t_true(q1->equals(q2));
  t_true(q1->hash() == q2->hash());
}

int main() {
  test_queue_offer_null();
  test_queue_offer_success();
  test_empty_queue_peek();
  test_first_in_peek();
  test_empty_queue_poll();
  test_queue_poll_success();
  test_queue_equality();
  return 0;
}