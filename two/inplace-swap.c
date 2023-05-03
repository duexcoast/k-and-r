void inplace_swap(int *x, int *y);

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--)
    inplace_swap(&a[first], &a[last]);
}

// function inplace_swap swaps the values stored at the locations denoted by
// pointer variables x and y. Unlike the usual technique for swapping two
// values, we do not need a third location to temporarily store one value while
// we are moving the other. There is no performance advantage to this way of
// swapping, merely an intellectual exercise.
//
// This works because a ^ a = 0 for any value a. Each element is it's own
// additive inverse in a Boolean ring (with XOR being the "addition" operation).
// This property even holds when we rearrange terms and combine them in a
// different order, and so (a ^ b) ^ a = a. XOR is both commutative and
// associative.
//
// The following operation proceeds as follows:
// Step 1:
// *y = *x ^ *y
// Step 2:
// *x = *x ^ (*x ^ *y) => *y
// *x = *y
// Step 3:
// *y = *y (*x ^ *y) => *x
// *y = *x
void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}
