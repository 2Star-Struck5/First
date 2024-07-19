#include <stdio.h>
#include <string.h>

int main() {
    char string1[50],ch2;
    int i, length;
    int flag = 0;
       

   
    printf("\nEnter a string: ");
    gets(string1);
    printf("\nEnter a character to check its occurence: ");
    scanf("%c", &ch2);
    

    
    length = strlen(string1);
    printf("\nLength of the string is: %d", length);

    int count1=0;
    for (i=0;i<length;i++){

        if (string1[i]==' '){
            count1++;
        }
    }
    printf("\nNumber of whitespaces are: %d", count1);

    int count2=0;
    for (i=0;i<length;i++){

        if (string1[i]==ch2){
            count2++;
        }
    }
    printf("\nNumber of %c in %s are: %d", ch2,string1,count2);

   
    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    
    if (flag) {
        printf("\n%s is not a palindrome\n", string1);
    } else {
        printf("\n%s is a palindrome\n", string1);
    }

    return 0;
}