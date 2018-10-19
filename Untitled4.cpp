/*
   This program shows the most repeated character of any given string, discarding spaces.
   
   
   Author: Victor Manuel Gastelum Huitzil
   Date: 18/10/18
   Mail: A01411995@itesm.mx
 
 */
#include <stdio.h>
#include <string.h>

int main() {
    char string[250];
    int count=0;
    char m=string[0];
    int k=0;
    
    // Here I ask the user for the string.
    printf("Give me a string: \n");
    fgets(string, sizeof(string), stdin);

    // Here I compare the values
    for (int i=0; i<strlen(string); i++){
        count=0;
        for (int j=i+1; j<strlen(string); j++){
            // This part will avoid to count spaces
            if (string[j] == string[j] && string[j]!= ' '){
                count++;
            }
        }
        // Here I store the repeated values
        if (count>k){
            k=count;
            m=string[i];
        }
    }

    printf("The most repeated character is %c", m);

return 0;
}

