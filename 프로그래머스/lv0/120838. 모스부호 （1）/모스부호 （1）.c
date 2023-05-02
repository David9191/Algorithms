#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int what_temp(char* temp, char *letter, int i)
{
    int cnt = 0;
    while (letter[i] != ' ' && letter[i])
    {
        temp[cnt++] = letter[i];
        i++;
    }
    temp[cnt] = '\0';
    return (++i);
}

char* solution(const char* letter) {
    int     cnt = 0, index = 0;
    char    *answer = calloc(1, (strlen(letter))),
            *temp = calloc(1, 5);
    char    mose[26][5] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",
           "--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    while (letter[index])
    {
        index = what_temp(temp, letter, index);
        for (int k = 0; k < 26; k++)
        {
            if (!strcmp(temp, mose[k]))
            {
                answer[cnt++] = k + 'a';
                break ;
            }
        }
    }
    return (answer);
}