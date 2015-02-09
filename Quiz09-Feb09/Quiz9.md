% Quiz 9: 2/9/15

# Question 1
**4pts** Give two methods that mutual exclusion can be achieved.

**Answers:**

- Busy wait (half credit)
- Turn taking
- Spin lock
- Dekker's Algorithm
- Peterson's Algorithm
- TSL - Test set lock


# Question 2
**6pts** Do the following examples need mutual exclusion?

**Answers:**

a) Yes
b) No
c) No

~~~c
/// a)
// Thread 1
x = x + 1;
// Thread 2
x = 2*x;

/// b)
// Thread 1
a = x+2;
// Thread 2
b = x*2;

/// c)
// Thread 1
x[4] = x[3] + x[2];
// Thread 2
x[1] = x[3] * x[4];
~~~
