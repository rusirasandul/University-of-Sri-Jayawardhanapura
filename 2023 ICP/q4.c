/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**
#include <stdio.h>
int find2ndMax(int numbers[], int size) {
  int max = numbers[0];
  int secondMax = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] > max) {
      secondMax = max;
      max = numbers[i];
    } else if (numbers[i] > secondMax && numbers[i] != max) {
      secondMax = numbers[i];
    }
  }
  return secondMax;
}

int main() {
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  printf("The second largest number is %d\n", find2ndMax(numbers, size));
  return 0;
}
*/

#include <stdio.h>

const int Max_centers = 50;  // Maximum number of centers (උපරිම කේන්ද්‍ර ගණන)
const int Measures = 5;       // Number of measurements per center (එක් එක් කේන්ද්‍රයක මිනුම් ගණන)

// Function declarations (ශ්‍රිත ප්‍රකාශන)
void readData(int centers[][Measures], int *Max_centers);              
void displayData(int centers[][Measures], int Max_centers);             
void printSummeryWetherReport(int centers[][Measures], int Max_centers);  
int findMaxTemp(int centers[][Measures], int Max_centers);            
int findMinHumidity(int centers[][Measures], int Max_centers);         
int findMaxRainfall(int centers[][Measures], int Max_centers);          
int findMaxWindSpeed(int centers[][Measures], int Max_centers);        

// Function to read data from user (භාවිත කරන්නාගෙන් දත්ත කියවීම)
void readData(int centers[][Measures], int *Max_centers) {
    int i = 0;  // Center index (කේන්ද්‍ර දර්ශකය)
    char addMore = 'Y';  // User input to add more centers (තවත් කේන්ද්‍ර එක් කිරීමට භාවිතා කරන්නාගේ පිළිතුර)

    while (addMore == 'Y' || addMore == 'y') {  // Loop until user says 'N' (භාවිතා කරන්නා 'N' කියනතුරු ලූප් කරන්න)
        printf("Enter the center id: ");  // Prompt for center ID (කේන්ද්‍ර හැඳුනුම්පත ඇතුළත් කරන්න)
        scanf("%d", &centers[i][0]);  // Read center ID (කේන්ද්‍ර හැඳුනුම්පත කියවීම)

        printf("Enter the temperature for the center %d: ", centers[i][0]);  
        scanf("%d", &centers[i][1]);  // Read temperature (උෂ්ණත්වය කියවීම)

        printf("Enter the humidity for the center %d: ", centers[i][0]);
        scanf("%d", &centers[i][2]);  // Read humidity (ආර්ද්‍රතාවය කියවීම)

        printf("Enter the rainfall for the center %d: ", centers[i][0]);
        scanf("%d", &centers[i][3]);  // Read rainfall (වර්ෂාපතනය කියවීම)

        printf("Enter the wind speed for the center %d: ", centers[i][0]);
        scanf("%d", &centers[i][4]);  // Read wind speed (සුළං වේගය කියවීම)

        printf("Do you want to add more centers? (Y/N): ");  // Ask if user wants to continue (තවදුරටත් ඇතුළත් කිරීමට කැමතිද කියා විමසන්න)
        scanf(" %c", &addMore);  // Read user input (භාවිතා කරන්නාගේ පිළිතුර කියවීම)
        i++;  // Increment center index (කේන්ද්‍ර දර්ශකය වැඩි කිරීම)
    }
    *Max_centers = i;  // Store total number of centers entered (මුළු කේන්ද්‍ර ගණන ගබඩා කරන්න)
}

// Function to display the entered data (ඇතුළත් කළ දත්ත පෙන්වීම)
void displayData(int centers[][Measures], int Max_centers) {
    printf("\nDaily Weather Report\n");  // Header for the report (වාර්තා මූළේ)
    printf("Center ID\tTemperature\tHumidity\tRainfall\tWind Speed\n");  // Print column headers (තීරු නාම පෙන්වීම)

    for (int i = 0; i < Max_centers; i++) {  // Loop through each center (සෑම කේන්ද්‍රයක්ම සම්පූර්ණ කරන්න)
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               centers[i][0], centers[i][1], centers[i][2],
               centers[i][3], centers[i][4]);  // Print center data (කේන්ද්‍ර දත්ත පෙන්වීම)
    }
}

// Function to print weather report summary (කාලගුණ වාර්තාවේ සාරාංශය මුද්‍රණය කිරීම)
void printSummeryWetherReport(int centers[][Measures], int Max_centers) {
    int tempSum = 0, humiditySum = 0, rainfallSum = 0, windSpeedSum = 0;  // Initialize sums (එකතු කිරීම් ආරම්භ කිරීම)

    for (int i = 0; i < Max_centers; i++) {  // Loop through all centers (සෑම කේන්ද්‍රයකම සම්පූර්ණ කිරීම)
        tempSum += centers[i][1];  // Add temperature (උෂ්ණත්වය එකතු කරන්න)
        humiditySum += centers[i][2];  // Add humidity (ආර්ද්‍රතාවය එකතු කරන්න)
        rainfallSum += centers[i][3];  // Add rainfall (වර්ෂාපතනය එකතු කරන්න)
        windSpeedSum += centers[i][4];  // Add wind speed (සුළං වේගය එකතු කරන්න)
    }

    // Print averages (මධ්‍ය අගයන් මුද්‍රණය කරන්න)
    printf("\nWeather Report Summary\n");
    printf("Average Temperature: %.2f\n", (float)tempSum / Max_centers);
    printf("Average Humidity: %.2f\n", (float)humiditySum / Max_centers);
    printf("Average Rainfall: %.2f\n", (float)rainfallSum / Max_centers);
    printf("Average Wind Speed: %.2f\n", (float)windSpeedSum / Max_centers);

    // Find and print min/max values (අවම/උපරිම අගයන් සොයා මුද්‍රණය කරන්න)
    int maxTemp = findMaxTemp(centers, Max_centers);
    int minHumidity = findMinHumidity(centers, Max_centers);
    int maxRainfall = findMaxRainfall(centers, Max_centers);
    int maxWindSpeed = findMaxWindSpeed(centers, Max_centers);

    printf("Maximum Temperature: %d\n", maxTemp);
    printf("Minimum Humidity: %d\n", minHumidity);
    printf("Maximum Rainfall: %d\n", maxRainfall);
    printf("Maximum Wind Speed: %d\n", maxWindSpeed);
}

// Function to find the maximum temperature (උපරිම උෂ්ණත්වය සොයා ගැනීම)
int findMaxTemp(int centers[][Measures], int Max_centers) {
    int maxTemp = centers[0][1];  // Initialize with first temperature (පළමු උෂ්ණත්වයෙන් ආරම්භ කරන්න)
    for (int i = 1; i < Max_centers; i++) {  // Loop through all centers (සෑම කේන්ද්‍රයක්ම සම්පූර්ණ කරන්න)
        if (centers[i][1] > maxTemp) {
            maxTemp = centers[i][1];  // Update maxTemp if a higher value is found (නව උපරිම අගය සොයාගන්න)
        }
    }
    return maxTemp;  // Return the maximum temperature (උපරිම උෂ්ණත්වය ලබා දෙන්න)
}

// Function to find the minimum humidity (අවම ආර්ද්‍රතාවය සොයා ගැනීම)
int findMinHumidity(int centers[][Measures], int Max_centers) {
    int minHumidity = centers[0][2];  // Initialize with first humidity (පළමු ආර්ද්‍රතාවයෙන් ආරම්භ කරන්න)
    for (int i = 1; i < Max_centers; i++) {
        if (centers[i][2] < minHumidity) {
            minHumidity = centers[i][2];  // Update minHumidity if a lower value is found (අවම අගය යාවත්කාලීන කරන්න)
        }
    }
    return minHumidity;  // Return the minimum humidity (අවම ආර්ද්‍රතාවය ලබා දෙන්න)
}

// Function to find the maximum rainfall (උපරිම වර්ෂාපතනය සොයා ගැනීම)
int findMaxRainfall(int centers[][Measures], int Max_centers) {
    int maxRainfall = centers[0][3];  // Initialize with first rainfall (පළමු වර්ෂාපතනයෙන් ආරම්භ කරන්න)
    for (int i = 1; i < Max_centers; i++) {
        if (centers[i][3] > maxRainfall) {
            maxRainfall = centers[i][3];  // Update maxRainfall if a higher value is found (නව උපරිම අගය සොයාගන්න)
        }
    }
    return maxRainfall;  // Return the maximum rainfall (උපරිම වර්ෂාපතනය ලබා දෙන්න)
}

// Function to find the maximum wind speed (උපරිම සුළං වේගය සොයා ගැනීම)
int findMaxWindSpeed(int centers[][Measures], int Max_centers) {
    int maxWindSpeed = centers[0][4];  // Initialize with first wind speed (පළමු සුළං වේගයෙන් ආරම්භ කරන්න)
    for (int i = 1; i < Max_centers; i++) {
        if (centers[i][4] > maxWindSpeed) {
            maxWindSpeed = centers[i][4];  // Update maxWindSpeed if a higher value is found (නව උපරිම අගය සොයාගන්න)
        }
    }
    return maxWindSpeed;  // Return the maximum wind speed (උපරිම සුළං වේගය ලබා දෙන්න)
}

// Main function (ප්‍රධාන ශ්‍රිතය)
int main() {
    int centers[Max_centers][Measures];  // Array to store center data (කේන්ද්‍ර දත්ත ගබඩා කිරීම සඳහා අරෙ)
    int centerCount;  // Variable to store the number of centers (කේන්ද්‍ර ගණන)

    readData(centers, &centerCount);  // Read data from user (දත්ත කියවීම)
    displayData(centers, centerCount);  // Display the entered data (දත්ත පෙන්වීම)
    printSummeryWetherReport(centers, centerCount);  // Print the summary report (සාරාංශ වාර්තාව පෙන්වීම)

    return 0;  // Exit the program (පද්ධතියෙන් පිටවීම)
}
