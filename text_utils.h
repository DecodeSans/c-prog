#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "text_utils.h"

int wordCount(const char *str) {
    int count = 0, inWord = 0;
    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            count++;
            inWord = 1;
        }
        str++;
    }
    return count;
}

int sentenceCount(const char *str) {
    int count = 0;
    while (*str) {
        if (*str == '.' || *str == '!' || *str == '?') {
            count++;
        }
        str++;
    }
    return count;
}

void toCamelCase(char *str) {
    int i, j = 0;
    int capitalize = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            if (capitalize && isalpha(str[i])) {
                str[j++] = toupper(str[i]);
                capitalize = 0;
            } else {
                str[j++] = tolower(str[i]);
            }
        } else {
            capitalize = 1;
        }
    }
    str[j] = '\0';
}

void toSentenceCase(char *str) {
    int i, capitalize = 1;
    for (i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }
}

void toToggleCase(char *str) {
    while (*str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void capitalizeEachWord(char *str) {
    int capitalize = 1;
    while (*str) {
        if (isspace(*str)) {
            capitalize = 1;
        } else if (capitalize && isalpha(*str)) {
            *str = toupper(*str);
            capitalize = 0;
        } else {
            *str = tolower(*str);
        }
        str++;
    }
}
