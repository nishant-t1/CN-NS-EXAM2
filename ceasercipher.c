#include <stdio.h>
#include <string.h>
// Function to encrypt the text
void encrypt(char text[], int shift) {
 for (int i = 0; text[i] != '\0'; ++i) {
 char ch = text[i];
 if (ch >= 'a' && ch <= 'z') {
 ch = (ch - 'a' + shift) % 26 + 'a';
 } else if (ch >= 'A' && ch <= 'Z') {
 ch = (ch - 'A' + shift) % 26 + 'A';
 }
 text[i] = ch;
 }
}
// Function to decrypt the text
void decrypt(char text[], int shift) {
 for (int i = 0; text[i] != '\0'; ++i) {
 char ch = text[i];
 if (ch >= 'a' && ch <= 'z') {
 ch = (ch - 'a' - shift + 26) % 26 + 'a';
 } else if (ch >= 'A' && ch <= 'Z') {
 ch = (ch - 'A' - shift + 26) % 26 + 'A';
 }
 text[i] = ch;
 }
}
int main() {
 char text[100];
 int shift;
 printf("Enter a message to encrypt: ");
 gets(text);
 printf("Enter shift amount: ");
 scanf("%d", &shift);
 encrypt(text, shift);
 printf("Encrypted message: %s\n", text);
 decrypt(text, shift);
 printf("Decrypted message: %s\n", text);
 return 0;
} 
