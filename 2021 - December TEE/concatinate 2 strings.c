#include <stdio.h>

int main () {

    char str1[100], str2[100];
    int i=0 , j=0;

    printf("Enter first string: \n");
    gets(str1);
    printf("Enter second string: \n");
    gets(str2);

    while(str1[i] !='\0') {
        i++;
    }
    while(str2[j] != '\0') {  //looping upto last string
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

    printf("The concatinated string is: %s \n", str1);
    system("pause");
    return 0;
}