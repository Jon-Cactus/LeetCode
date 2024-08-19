bool isSubsequence(char* s, char* t) {
    int match = 0;
    for (int i = 0; i < strlen(s) + 1; i++) {
        for (int j = match; j < strlen(t) + 1; j++) {
            if (t[j] == s[i] && i != strlen(s)) {
                match = j + 1;
                break;
            }
            else if (s[i] == '\0') {
                return true;
            }
            else if (t[j] == '\0') {
                return false;
            }
        }
    }
    return false;
}