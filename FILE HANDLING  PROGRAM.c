#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    fptr = fopen("Newfile.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fptr);
    fclose(fptr);
    printf("Data written to file.\n");

    fptr = fopen("Newfile.txt", "a");
    if(fptr == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    printf("Enter data to append to the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fptr);
    fclose(fptr);
    printf("Data appended to file.\n");

    fptr = fopen("Newfile.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while(fgets(data, sizeof(data), fptr) != NULL) {
        printf("%s", data);
    }
    fclose(fptr);

    return 0;
}
