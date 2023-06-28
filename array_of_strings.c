#include <stdio.h>
void function(char **characters) {
    // Accessing the strings
    printf("%s\n", characters[0]);  // Print the first string
    printf("%s\n", characters[1]);  // Print the second string
}

int main() {
    // Create an array of strings
    char *strings[] = {"Hello", "World"};

    // Pass the array of strings to the function
    function(strings);

    return 0;
}
