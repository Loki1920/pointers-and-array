// pointers and Arrays
#include <stdio.h>
int main() {
	int A[] = {2, 4, 5, 8, 1};
	printf("Base address: %p\n", A);
	printf("Base address: %p\n", &A[0]);
	printf("value at base address:%d\n", A[0]);
	printf("value at base address:%d\n", *A);

	// another approach
  int i;
  for(i=0;i<5;i++){
    printf("Address:%p\n",&A[i]);
    printf("Address:%p\n",A+i);
    printf("value :%d\n",A[i]);
    printf("value:%d\n",*(A+i));
  }
  
}