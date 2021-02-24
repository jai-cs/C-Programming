#include <stdio.h>
int main() {
   int c = 5;
   int *p = &c;

   printf("%d", *p);  // 5
   return 0; 
}

/* Here it does not show an error because, 
int *p = &c; 
is equivivalent to 
int *p:
p = &c;     */
