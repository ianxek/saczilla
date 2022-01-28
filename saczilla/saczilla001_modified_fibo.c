#include <stdio.h>


long long fibonacci(long long f, long long s, long long rep, int N) {
    long long first = f;
    long long second = s;
    long long next = 0;

    while (rep > 0ll) {
        first = f;
        second = s + rep; 
        for (int i = 0; i < N; i++) {
            next = first + second%2ll + rep;
            first = second;
            second = next - rep;
        }
        rep--;
    }
    return first;
}

int main() {
  long long rep = 10000;
  int N=1000000-1;

  long long first = fibonacci(0ll, 1ll, rep, N);

  printf("\nResult with rep = %lld and N = %d : %lld\n", rep, N, first);
  return 0;
}


