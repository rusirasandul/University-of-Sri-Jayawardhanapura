/*1.  Write a C program to print the following characters in reverse order.  
Test Characters: 'X', 'M', 'L'  
Expected Output:  
The reverse of XML is LMX*/

#include <stdio.h>

int main(){
      char c1='X' , c2='M' , c3 ='L';
      printf("the reverse of %c ,%c ,%c is %c ,%c ,%c" ,c1,c2,c3,c3,c2,c1);
      return 0;

}

// second programme for extra credits 
#include <stdio.h>

int main() {
    char chars[] = {'X', 'M', 'L'};
    int length = sizeof(chars) / sizeof(chars[0]);

    printf("The reverse of ");
    for(int i = 0; i < length; i++) {
        printf("%c", chars[i]);
    }

    printf(" is ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", chars[i]);
    }

    printf("\n");

    return 0;
}
