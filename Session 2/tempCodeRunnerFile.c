
void copyString(char destination[], char source[]) {
    int i;

    for(i=0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}