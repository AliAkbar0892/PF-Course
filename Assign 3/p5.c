#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initializeInventory(char ***speciesSupplies, int *numSpecies) {
    printf("Enter number of species: ");
    scanf("%d", numSpecies);

    *speciesSupplies = (char ***)malloc(*numSpecies * sizeof(char **));

    for (int i = 0; i < *numSpecies; i++) {
        int numSupplies;
        printf("Enter number of supplies for species %d: ", i + 1);
        scanf("%d", &numSupplies);

        (*speciesSupplies)[i] = (char **)malloc(numSupplies * sizeof(char *));
        for (int j = 0; j < numSupplies; j++) {
            (*speciesSupplies)[i][j] = NULL;
        }
    }
}

void addSupplies(char ***speciesSupplies, int numSpecies) {
    int speciesIndex, numSupplies;
    printf("Enter species index (0-%d) to add supplies: ", numSpecies - 1);
    scanf("%d", &speciesIndex);

    if (speciesIndex < 0 || speciesIndex >= numSpecies) {
        printf("Invalid species index.\n");
        return;
    }

    printf("Enter number of supplies to add: ");
    scanf("%d", &numSupplies);

    *speciesSupplies[speciesIndex] = realloc(*speciesSupplies[speciesIndex], numSupplies * sizeof(char *));
    for (int i = 0; i < numSupplies; i++) {
        (*speciesSupplies)[speciesIndex][i] = (char *)malloc(100 * sizeof(char));
        printf("Enter supply name %d: ", i + 1);
        scanf("%s", (*speciesSupplies)[speciesIndex][i]);
    }
}

void updateSupplies(char ***speciesSupplies, int numSpecies) {
    int speciesIndex, supplyIndex;
    printf("Enter species index (0-%d) to update supplies: ", numSpecies - 1);
    scanf("%d", &speciesIndex);

    if (speciesIndex < 0 || speciesIndex >= numSpecies) {
        printf("Invalid species index.\n");
        return;
    }

    printf("Enter supply index to update: ");
    scanf("%d", &supplyIndex);

    if (supplyIndex < 0 || supplyIndex >= sizeof(speciesSupplies[speciesIndex]) / sizeof(char *)) {
        printf("Invalid supply index.\n");
        return;
    }

    char newSupply[100];
    printf("Enter new supply name: ");
    scanf("%s", newSupply);

    strcpy(speciesSupplies[speciesIndex][supplyIndex], newSupply);
}

void removeSpecies(char ***speciesSupplies, int *numSpecies) {
    int speciesIndex;
    printf("Enter species index (0-%d) to remove: ", *numSpecies - 1);
    scanf("%d", &speciesIndex);

    if (speciesIndex < 0 || speciesIndex >= *numSpecies) {
        printf("Invalid species index.\n");
        return;
    }

    for (int i = 0; i < sizeof(speciesSupplies[speciesIndex]) / sizeof(char *); i++) {
        free(speciesSupplies[speciesIndex][i]);
    }
    free(speciesSupplies[speciesIndex]);

    for (int i = speciesIndex; i < *numSpecies - 1; i++) {
        speciesSupplies[i] = speciesSupplies[i + 1];
    }

    (*numSpecies)--;
}

void displayInventory(char ***speciesSupplies, int numSpecies) {
    for (int i = 0; i < numSpecies; i++) {
        printf("Species %d Supplies: ", i + 1);
        for (int j = 0; j < sizeof(speciesSupplies[i]) / sizeof(char *); j++) {
            printf("%s ", speciesSupplies[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char ***speciesSupplies = NULL;
    int numSpecies = 0;

    initializeInventory(&speciesSupplies, &numSpecies);

    addSupplies(&speciesSupplies, numSpecies);

    updateSupplies(&speciesSupplies, numSpecies);

    removeSpecies(&speciesSupplies, &numSpecies);

    displayInventory(speciesSupplies, numSpecies);

    for (int i = 0; i < numSpecies; i++) {
        for (int j = 0; j < sizeof(speciesSupplies[i]) / sizeof(char *); j++) {
            free(speciesSupplies[i][j]);
        }
        free(speciesSupplies[i]);
    }
    free(speciesSupplies);

    return 0;
}
