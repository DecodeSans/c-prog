#include <stdio.h>
#include "text_utils.h"

int main() {
    char str[500];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("\nWord Count: %d", wordCount(str));
    printf("\nSentence Count: %d", sentenceCount(str));

    toCamelCase(str);
    printf("\nCamel Case: %s", str);

    printf("\nEnter a string again: ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);
    printf("\nSentence Case: %s", str);

    toToggleCase(str);
    printf("\nToggle Case: %s", str);

    capitalizeEachWord(str);
    printf("\nCapitalized Each Word: %s\n", str);

    return 0;
}
