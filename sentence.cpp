//Write a C program to print each word of a sentence on a new line. 
 
#include <stdio.h> 
int main() { 
char str[100]; 
printf("Enter a sentence: "); 
fgets(str, sizeof(str), stdin); 
printf("Words in sentence:\n"); 
for(int i=0;str[i]!='\0';i++){ 
if(str[i]==' ' || str[i]=='\n') printf("\n"); 
else printf("%c",str[i]); 
} 
printf("\n"); 
return 0; 
}
