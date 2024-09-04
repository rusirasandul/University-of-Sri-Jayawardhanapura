#include <stdio.h>
int main(){
      float Grade1 , Grade2 , Grade3 , Credit1 , Credit2 , Credit3 , GPA , Total_Credits ,Total_Grades;

      // Input grades and credits for each subject
    printf("Enter the grade obtained for ICT 107: ");
    scanf("%f", &grade1);
    printf("Enter the credits for ICT 107: ");
    scanf("%f", &credits1);
    
    printf("Enter the grade obtained for ICT 105: ");
    scanf("%f", &grade2);
    printf("Enter the credits for ICT 105: ");
    scanf("%f", &credits2);
    
    printf("Enter the grade obtained for ICT 108: ");
    scanf("%f", &grade3);
    printf("Enter the credits for ICT 108: ");
    scanf("%f", &credits3);

    // Calculate total credits and total weighted grades
    total_credits = credits1 + credits2 + credits3;
    total_weighted_grades = (grade1 * credits1) + (grade2 * credits2) + (grade3 * credits3);
    
    // Calculate GPA
    GPA = total_weighted_grades / total_credits;
    
    // Print the total credits and GPA
    printf("Total credits obtained = %.2f\n", total_credits);
    printf("GPA = %.2f\n", GPA);
    
    // Determine the grade based on GPA
    if (GPA >= 3.7) {
        printf("Grade: A\n");
    } else if (GPA >= 3.0) {
        printf("Grade: B\n");
    } else if (GPA >= 2.0) {
        printf("Grade: C\n");
    } else if (GPA >= 1.0) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;    



}