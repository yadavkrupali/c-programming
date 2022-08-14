#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100], strA[100], strB[100];
    printf("Enter the first string:");
    scanf("%s", &str1);

    printf("Enter the second string:");
    scanf("%s", &str2);

    strcpy(strA, str1);
    strcpy(strB, str2);

    if (strlen(str1) == strlen(str2))
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            for (int j = 0; j < strlen(str1); j++)
            {
                if (str1[i] < str1[j])
                {
                    char temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }
            }
        }

        for (int i = 0; i < strlen(str2); i++)
        {
            for (int j = 0; j < strlen(str2); j++)
            {
                if (str2[i] < str2[j])
                {
                    char temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }
        if (strcmp(str1, str2) == 0)
        {
            printf("%s and %s are  anagram", strA, strB);
        }
        else
        {
            printf("%s and %s are not anagram", strA, strB);
        }
    }
    else
        printf("%s and %s are not anagram", strA, strB);
}