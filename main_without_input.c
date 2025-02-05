#include <stdio.h>
#include "text_utils.h"

int main() {
    char str[] = "hello world! how are you? this is a test STRING.";
    
    printf("Original: %s\n", str);
    printf("\nWord Count: %d", wordCount(str));
    printf("\nSentence Count: %d", sentenceCount(str));

    toCamelCase(str);
    printf("\nCamel Case: %s", str);

    char str2[] = "hello world! how are you? this is a test STRING.";
    toSentenceCase(str2);
    printf("\nSentence Case: %s", str2);

    toToggleCase(str2);
    printf("\nToggle Case: %s", str2);

    capitalizeEachWord(str2);
    printf("\nCapitalized Each Word: %s\n", str2);

    return 0;
}
