#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* output = malloc(200);
    for(int letter_idx = 0; letter_idx < 200; letter_idx++) {
        char compare_char = strs[0][letter_idx];
        char current_char;
        for(int word_idx = 0; word_idx < strsSize; word_idx++) {
            current_char = strs[word_idx][letter_idx];
            if(current_char == '\0' || compare_char != current_char) {
                output[letter_idx] = '\0';
                return output;
            }
        }
        output[letter_idx] = current_char;
    }
    return "";
}

int main(int argc, char* argv[])
{
    char* test_case1[] = {"flower", "flow", "flight"};
    char* test_case2[] = {"dog", "racecar", "car"};
    char* output1 = longestCommonPrefix(test_case1, 3);
    char* output2 = longestCommonPrefix(test_case2, 3);
    printf("%s %s", output1, output2);
    free(output1);
    free(output2);
    return 0;
}