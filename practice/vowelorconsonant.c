#include <stdio.h>
void main()
// ifelse
{

    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    /*   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      {
          printf("the alphabet is vowel");
      }
      else
          printf("the alphabet is consonant");*/

    // switch case

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':

        printf("the alphabet is vowel");

        break;

    default:
        printf("the alphabet is consonant");
        break;
    }
}