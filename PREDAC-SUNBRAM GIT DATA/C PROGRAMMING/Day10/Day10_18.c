#include<stdio.h> 
void sumpro(int *a, int *b, int *ps, int *pp) {
 *ps = *a + *b;
 *pp = *a * *b;
}
// Through pointer i have returned 2 values from the function indirectly
// using pointer we can return more than 1 values from the function indirectly  
int main() {
 int x = 12, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p);// 16 48 
 return 0;
}
