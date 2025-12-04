// Write a C program to count vowels, consonants, digits, uppercase, and lowercase letters in a 
string. 
 
#include <stdio.h> 
int main() { 
char str[100]; 
int vowels=0, consonants=0, digits=0, upper=0, lower=0; 
printf("Enter a string: "); 
fgets(str,sizeof(str),stdin); 
for(int i=0;str[i]!='\0';i++){ 
char ch=str[i]; 
if(ch>='A' && ch<='Z') upper++; 
if(ch>='a' && ch<='z') lower++; 
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
vowels++; 
else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')) consonants++; 
else if(ch>='0' && ch<='9') digits++; 
} 
printf("Vowels=%d, Consonants=%d, Digits=%d, Uppercase=%d, Lowercase=%d\n", vowels, 
consonants, digits, upper, lower); 
return 0; 
} 

