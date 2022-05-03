#include <stdio.h>

#define MAX 20

 
int intArray[MAX] = {1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66};

 

  
int find(int data) {

   int comparisons = 0;
   int index = -1;
   int i;

 
   for(i = 0;i<MAX;i++) {
	
      comparisons++;
      if(data == intArray[i]) {
         index = i;
         break;
      }
   }   
	
 
   return index;
}

void display() {
   int i;
   printf("[");
   for(i = 0;i<MAX;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

void main() {
   printf("Input Array: ");
   display();
 
	

   int location = find(55);

 
   if(location != -1)
      printf("\nElement found at location: %d" ,(location+1));
   else
      printf("Element not found.");
}