#include <stdio.h>

void reverse_string(char word[], char ch) {

    int idx = -1;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == ch) {
            idx = i;
            break;
        }
    }


    if (idx == -1) {
        return;
    }

    int start = 0;
    int end = idx;
    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
}

int main() {

    char word[100];
    char ch;


    printf("Enter a word: ");
    scanf("%99s", word);


    printf("Enter the character to find: ");

    scanf(" %c", &ch);


    reverse_string(word, ch);

    printf("Result: %s\n", word);

    return 0;
}
