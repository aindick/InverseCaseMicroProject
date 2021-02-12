#include <stdio.h>
#include <quadmath.h>
#include<string.h>
//Alexis Indick CSC 344
void invert_case(char *string){
    for (int i = 0; i < strlen(string); i++) {

        if (string[i] >= 'a' && string[i] <= 'z')
            //Converts lowercase to uppercase
            string[i] = string[i] - 32;

        else if (string[i] >= 'A' && string[i] <= 'Z')
            //Converts uppercase to lowercase
            string[i] = string[i] + 32;
    }}
int main() {
    char *s;

    const size_t size = 100;
    //Dynamically allocate memory
    s = (char*)malloc(sizeof(char) * size);

    printf("Enter a string: ");
    scanf("%s", s);
    //Inverts lowercase letters to upper and upper to lower.
    invert_case(s);
    printf("Inverted String: %s ", s);

    free(s);
    return 0;
}
