#include <stdio.h>

int binarySearch(int x, int v[], int p, int u){
	if (p > u) {
       return 0;
       
	} else {
      int m = p + (u - p)/2;
      
      if (v[m] == x)
         return 1;
         
      if (v[m] > x)
         return binarySearch(x, v, p, m-1);  
         
      return binarySearch(x, v, m+1, u);   
   }
}

int main() {
    int n = 5;
    int v[] = {10, 5, 15, 3, 8};
    
    int index = binarySearch(13, v, 0, n-1);

    if(index == 1) {
    	printf("Valor encontrado.");
    	
	} else {
		printf("Valor nao encontrado.");
	}
}
