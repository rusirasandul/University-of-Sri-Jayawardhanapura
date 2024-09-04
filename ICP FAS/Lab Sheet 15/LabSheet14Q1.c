#include <stdio.h>

double footToMeter(double foot) {
    return 0.305 * foot;
}

double meterToFoot(double meter) {
    return 3.279 * meter;
}

int main() {
    printf("Feet to Meters and Meters to Feet Conversion Table:\n");
    printf("Feet\tMeters\t|\tMeters\tFeet\n");
    for (double feet = 1.0, meters = 20.0; feet <= 10.0; feet++, meters += 5) {
        printf("%.1f\t%.3f\t|\t%.1f\t%.3f\n", feet, footToMeter(feet), meters, meterToFoot(meters));
    }
    return 0;
}
