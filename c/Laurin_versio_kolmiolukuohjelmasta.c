
// This program was improved by Lauri K. Friberg in 2020. I got the original from a website and improved it a bit.
// The website URL I got the original code from was https://www.geeksforgeeks.org/program-print-triangular-number-series-till-n/
// C Program to find Triangular Number Series 
#include <stdio.h> 
  
// Function to find triangular number This is code from the WWW site
void triangular_series(int n) 
{ 
    int i, j = 1, k = 1; 
  
    // For each iteration increase j by 1 
    // and add it into k 
    for (i = 1; i <= n; i++) { 
        printf(" %d ", k); 
        j = j + 1; // Increasing j by 1 
        k = k + j; // Add value of j into k and update k 
    } 
} 
// Driven Function 
int main() 
{ 
    int n = 5; // This is still from the site
	printf("Enter the n for T[n] the triangular number: n = "); // This was added by L.K.F. 2020
    scanf("%d",&n); // Added by L.K.F. 2020
    printf("The triangular series is displayed as thus: "); // Added by L.K.F. 2020
    triangular_series(n); // From the site
    return 0; 
} 
