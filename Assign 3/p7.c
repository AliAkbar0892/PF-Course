#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_USERS 5
#define NUM_CATEGORIES 3
#define NUM_DEVICES 3
#define NUM_CONTENT 4

// Structure for Content Metadata
typedef struct {
    char title[100];
    float rating;
    int runtime;  // in minutes
    char encodingFormat[50];
} ContentMetadata;

// Structure for User Profile
typedef struct {
    float *engagementScores;  // Pointer to user's row in the engagement matrix
    float **devicePreferences; // Pointer to device-specific preferences
} UserProfile;

// Function to create the engagement matrix
float** createEngagementMatrix(int numUsers, int numCategories) {
    float **engagementMatrix = (float**)malloc(numUsers * sizeof(float*));
    for (int i = 0; i < numUsers; i++) {
        engagementMatrix[i] = (float*)malloc(numCategories * sizeof(float));
        for (int j = 0; j < numCategories; j++) {
            engagementMatrix[i][j] = 0.0;  // Initialize engagement scores to 0
        }
    }
    return engagementMatrix;
}

// Function to create the device matrix
float*** createDeviceMatrix(int numUsers, int numDevices) {
    float ***deviceMatrix = (float***)malloc(numUsers * sizeof(float**));
    for (int i = 0; i < numUsers; i++) {
        deviceMatrix[i] = (float**)malloc(numDevices * sizeof(float*));
        for (int j = 0; j < numDevices; j++) {
            deviceMatrix[i][j] = (float*)malloc(3 * sizeof(float)); // Resolution, Playback history, Bandwidth
            for (int k = 0; k < 3; k++) {
                deviceMatrix[i][j][k] = 0.0;  // Initialize all preferences to 0
            }
        }
    }
    return deviceMatrix;
}

// Function to create the content metadata matrix
ContentMetadata** createContentMetadataMatrix(int numCategories, int numContent) {
    ContentMetadata **contentMetadata = (ContentMetadata**)malloc(numCategories * sizeof(ContentMetadata*));
    for (int i = 0; i < numCategories; i++) {
        contentMetadata[i] = (ContentMetadata*)malloc(numContent * sizeof(ContentMetadata));
        for (int j = 0; j < numContent; j++) {
            strcpy(contentMetadata[i][j].title, "Unknown");
            contentMetadata[i][j].rating = 0.0;
            contentMetadata[i][j].runtime = 0;
            strcpy(contentMetadata[i][j].encodingFormat, "Unknown");
        }
    }
    return contentMetadata;
}

// Function to update engagement score for a user
void updateEngagementScore(float **engagementMatrix, int userIndex, int categoryIndex, float score) {
    engagementMatrix[userIndex][categoryIndex] = score;
}

// Function to display engagement scores for a user
void displayUserEngagementScores(float **engagementMatrix, int userIndex, int numCategories) {
    printf("User %d's Engagement Scores:\n", userIndex);
    for (int i = 0; i < numCategories; i++) {
        printf("Category %d: %.2f\n", i, engagementMatrix[userIndex][i]);
    }
}

// Function to update device preference for a user on a device
void updateDevicePreference(float ***deviceMatrix, int userIndex, int deviceIndex, int preferenceType, float value) {
    deviceMatrix[userIndex][deviceIndex][preferenceType] = value;
}

// Function to display device preferences for a user
void displayUserDevicePreferences(float ***deviceMatrix, int userIndex, int numDevices) {
    printf("User %d's Device Preferences:\n", userIndex);
    for (int i = 0; i < numDevices; i++) {
        printf("Device %d: Resolution=%.2f, Playback History=%.2f, Bandwidth=%.2f\n",
               i, deviceMatrix[userIndex][i][0], deviceMatrix[userIndex][i][1], deviceMatrix[userIndex][i][2]);
    }
}

// Function to display content metadata for a category
void displayContentMetadata(ContentMetadata **contentMetadata, int categoryIndex, int numContent) {
    printf("Content Metadata for Category %d:\n", categoryIndex);
    for (int i = 0; i < numContent; i++) {
        printf("Title: %s, Rating: %.2f, Runtime: %d minutes, Encoding: %s\n", 
               contentMetadata[categoryIndex][i].title, contentMetadata[categoryIndex][i].rating,
               contentMetadata[categoryIndex][i].runtime, contentMetadata[categoryIndex][i].encodingFormat);
    }
}

// Main function to run the platform
int main() {
    // Create 2D matrices
    float **engagementMatrix = createEngagementMatrix(NUM_USERS, NUM_CATEGORIES);
    float ***deviceMatrix = createDeviceMatrix(NUM_USERS, NUM_DEVICES);
    ContentMetadata **contentMetadata = createContentMetadataMatrix(NUM_CATEGORIES, NUM_CONTENT);

    // Update some engagement scores
    updateEngagementScore(engagementMatrix, 0, 1, 75.0);  // User 0, Category 1 (Drama)
    updateEngagementScore(engagementMatrix, 1, 0, 85.0);  // User 1, Category 0 (Action)
    
    // Update device preferences
    updateDevicePreference(deviceMatrix, 0, 0, 0, 1080.0); // User 0, Device 0 (Resolution)
    updateDevicePreference(deviceMatrix, 0, 0, 1, 120.0);  // User 0, Device 0 (Playback History)
    
    // Update content metadata
    strcpy(contentMetadata[0][0].title, "Action Movie 1");
    contentMetadata[0][0].rating = 4.5;
    contentMetadata[0][0].runtime = 120;
    strcpy(contentMetadata[0][0].encodingFormat, "HD");

    displayUserEngagementScores(engagementMatrix, 0, NUM_CATEGORIES);
    displayUserDevicePreferences(deviceMatrix, 0, NUM_DEVICES);
    
    displayContentMetadata(contentMetadata, 0, NUM_CONTENT);

    updateEngagementScore(engagementMatrix, 0, NUM_CATEGORIES, 100.0);  

    // Clean up allocated memory
    for (int i = 0; i < NUM_USERS; i++) {
        free(engagementMatrix[i]);
    }
    free(engagementMatrix);

    for (int i = 0; i < NUM_USERS; i++) {
        for (int j = 0; j < NUM_DEVICES; j++) {
            free(deviceMatrix[i][j]);
        }
        free(deviceMatrix[i]);
    }
    free(deviceMatrix);

    for (int i = 0; i < NUM_CATEGORIES; i++) {
        free(contentMetadata[i]);
    }
    free(contentMetadata);

    return 0;
}
