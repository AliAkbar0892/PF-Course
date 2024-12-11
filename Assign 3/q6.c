#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float temperature;
    float rainfall;
    float windSpeed;
} Weather;

typedef struct {
    char cropType[50];
    int growthStage;
    float expectedYield;
    Weather *weatherForecast;  
} Crop;

typedef struct {
    char equipmentName[50];
    float operationalStatus;  )
    float fuelLevel;          
    char schedule[100];       
} Equipment;

// Structure for Sensors
typedef struct {
    float soilNutrients;
    float pHLevel;
    int pestActivity;  
} Sensor;

// Structure for Field Information
typedef struct {
    float gpsLatitude;
    float gpsLongitude;
    float soilHealth;
    float moistureLevel;
    Crop *crops;         
    int numCrops;
    Equipment *equipment; 
    int numEquipment;
    Sensor *sensors;    
    int numSensors;
} Field;

// Structure for Regional Hub 
typedef struct {
    Field *fields; 
    int numFields;
    float aggregateYield;
    char emergencyPlan[200]; 
} RegionalHub;

// Function to create a field with crops, equipment, and sensors
Field* createField(int numCrops, int numEquipment, int numSensors) {
    Field *field = (Field*)malloc(sizeof(Field));
    field->gpsLatitude = 37.7749;  // Example coordinates (San Francisco)
    field->gpsLongitude = -122.4194;
    field->soilHealth = 85.0;      // Example soil health
    field->moistureLevel = 60.0;   // Example moisture level
    field->numCrops = numCrops;
    field->numEquipment = numEquipment;
    field->numSensors = numSensors;

    // Dynamically allocate memory for crops, equipment, and sensors
    field->crops = (Crop*)malloc(numCrops * sizeof(Crop));
    field->equipment = (Equipment*)malloc(numEquipment * sizeof(Equipment));
    field->sensors = (Sensor*)malloc(numSensors * sizeof(Sensor));

    // Initialize crops, equipment, and sensors
    for (int i = 0; i < numCrops; i++) {
        strcpy(field->crops[i].cropType, "Wheat");
        field->crops[i].growthStage = 2;  // Example growth stage
        field->crops[i].expectedYield = 1000.0; // Example yield (kg)
        field->crops[i].weatherForecast = (Weather*)malloc(sizeof(Weather));
        field->crops[i].weatherForecast->temperature = 25.0;
        field->crops[i].weatherForecast->rainfall = 50.0;
        field->crops[i].weatherForecast->windSpeed = 5.0;
    }

    for (int i = 0; i < numEquipment; i++) {
        strcpy(field->equipment[i].equipmentName, "Tractor");
        field->equipment[i].operationalStatus = 90.0; // 90% operational
        field->equipment[i].fuelLevel = 80.0;         // 80% fuel
        strcpy(field->equipment[i].schedule, "Daily at 6 AM");
    }

    for (int i = 0; i < numSensors; i++) {
        field->sensors[i].soilNutrients = 60.0;
        field->sensors[i].pHLevel = 6.5;
        field->sensors[i].pestActivity = 0;
    }

    return field;
}

// Function to create a regional hub with fields
RegionalHub* createRegionalHub(int numFields) {
    RegionalHub *hub = (RegionalHub*)malloc(sizeof(RegionalHub));
    hub->numFields = numFields;
    hub->fields = (Field*)malloc(numFields * sizeof(Field));
    
    // Initialize fields in the hub
    for (int i = 0; i < numFields; i++) {
        hub->fields[i] = *createField(3, 2, 2);  // Example with 3 crops, 2 equipment, and 2 sensors
    }

    hub->aggregateYield = 0.0;
    strcpy(hub->emergencyPlan, "Flooding: Evacuate crops to high ground.");

    return hub;
}

// Function to display the field details
void displayFieldDetails(Field *field) {
    printf("Field Coordinates: (%.2f, %.2f)\n", field->gpsLatitude, field->gpsLongitude);
    printf("Soil Health: %.2f, Moisture Level: %.2f\n", field->soilHealth, field->moistureLevel);
    for (int i = 0; i < field->numCrops; i++) {
        printf("Crop Type: %s, Growth Stage: %d, Expected Yield: %.2f kg\n", field->crops[i].cropType, field->crops[i].growthStage, field->crops[i].expectedYield);
        printf("Weather: Temperature: %.2f°C, Rainfall: %.2fmm, Wind Speed: %.2f m/s\n", field->crops[i].weatherForecast->temperature, field->crops[i].weatherForecast->rainfall, field->crops[i].weatherForecast->windSpeed);
    }
    for (int i = 0; i < field->numEquipment; i++) {
        printf("Equipment: %s, Operational Status: %.2f%%, Fuel Level: %.2f%%\n", field->equipment[i].equipmentName, field->equipment[i].operationalStatus, field->equipment[i].fuelLevel);
    }
    for (int i = 0; i < field->numSensors; i++) {
        printf("Sensor: Soil Nutrients: %.2f, pH Level: %.2f, Pest Activity: %d\n", field->sensors[i].soilNutrients, field->sensors[i].pHLevel, field->sensors[i].pestActivity);
    }
}

// Function to calculate the total yield for a regional hub
void calculateAggregateYield(RegionalHub *hub) {
    hub->aggregateYield = 0.0;
    for (int i = 0; i < hub->numFields; i++) {
        for (int j = 0; j < hub->fields[i].numCrops; j++) {
            hub->aggregateYield += hub->fields[i].crops[j].expectedYield;
        }
    }
}

int main() {
    RegionalHub *hub = createRegionalHub(2);  // Example with 2 fields

    // Display field details for the first field
    displayFieldDetails(&hub->fields[0]);

    // Calculate and display the aggregate yield for the regional hub
    calculateAggregateYield(hub);
    printf("Aggregate Yield for Regional Hub: %.2f kg\n", hub->aggregateYield);

    // Clean up allocated memory
    for (int i = 0; i < hub->numFields; i++) {
        for (int j = 0; j < hub->fields[i].numCrops; j++) {
            free(hub->fields[i].crops[j].weatherForecast);
        }
        free(hub->fields[i].crops);
        free(hub->fields[i].equipment);
        free(hub->fields[i].sensors);
    }
    free(hub->fields);
    free(hub);

    return 0;
}
