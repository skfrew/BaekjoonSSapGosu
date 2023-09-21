#include <stdio.h>

int main() {
  int h, m;
  scanf("%d %d", &h, &m);
  int al = m - 45;
  if (al < 0) {
    if (h - 1 < 0) {
      printf("%d %d", h+24-1, al + 60);
    }
    else {
      printf("%d %d", h-1, al + 60);
    }
  }
  else {
    printf("%d %d", h, al);
  }
  return 0;
}