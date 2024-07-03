#include <stdio.h>

int main() {
    FILE *numFile, *evenFile, *oddFile;
    int num;

    // Open the NUM file for reading
    numFile = fopen("NUM", "r");
    if (numFile == NULL) {
        printf("Error opening NUM file for reading.\n");
        return 1;
    }

    // Open the EVEN file for writing
    evenFile = fopen("EVEN", "w");
    if (evenFile == NULL) {
        printf("Error opening EVEN file for writing.\n");
        fclose(numFile);
        return 1;
    }

    // Open the ODD file for writing
    oddFile = fopen("ODD", "w");
    if (oddFile == NULL) {
        printf("Error opening ODD file for writing.\n");
        fclose(numFile);
        fclose(evenFile);
        return 1;
    }

    // Read integers from NUM and copy to EVEN or ODD accordingly
    while (fscanf(numFile, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close all files
    fclose(numFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers copied to EVEN and ODD files successfully.\n");

    return 0;
}
