#include <stdio.h>

void main() {
  int i, n = 9, t = 1, sort = 0, mark = 1;
  int  count[10], c2[10], c3[10];

  printf("Input number of element to be store in array : ");
  scanf("%d", & n);
  printf("\n-------------------------- \n", n);

  for (i = 0; i <= n - 1; i++) {
    printf("Element[%d] : ", i + 1);
    scanf("%d", & count[i]);
 
    c2[i] = count[i];
  }


  printf("\n-------------------------- \n");
  for (i = 0; i < n; i++) {
    for (t = i + 1; t < n; ++t) {
      if (c2[i] > c2[t]) {
        sort = c2[i];
        c2[i] = c2[t];
        c2[t] = sort;
      }
    }
  }
  t = 1;
  for (i = 0; i < n; i++) {
    c3[i] = t;
    for (t = 0; t < n; t++) {

      if (c2[i] == c2[t]) {
        c3[i] = mark++;
      }
    }
    mark = 1;
    if(c2[i] != c2[i-1])
    {
      printf("\n%d -> %d ", c2[i], c3[i]);
    }
  }
  printf("\n");
  system("PAUSE");
}
