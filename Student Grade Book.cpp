// StudentGradeBook.c
#include <stdio.h>

#define MAX_STUDENTS 50

float calculateAverage(int grades[], int numStudents) {
    float sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
    }
    return sum / numStudents;
}

int findHighest(int grades[], int numStudents) {
    int highest = grades[0];
     for (int i=1; i < numStudents; i++) {
         if (grades[i] > highest) {
            highest = grades[i];
            }
    }
    return highest;
}   

int findLowest(int grades[], int numStudents) {
      int lowest = grades[0];
        for (int i=1; i < numStudents; i++) {
            if (grades[i] < lowest) {
                lowest = grades[i];
            }
        }
        return lowest;
}

int main() {
    int grades[MAX_STUDENTS];
    int numStudents = 0;
    int choice;
    
    printf("Student Grade Book System\n");
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Error: Number of students exceeds maximum limit of %d.\n", MAX_STUDENTS);
        return 1;                                                   
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }   

    while (1) {
        printf("1. Calculate Average\n");
        printf("2. Find Highest Grade\n");
        printf("3. Find Lowest Grade\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Average grade: %2f\n", calculateAverage(grades, numStudents));
                break;
            case 2:
                printf("Highest grade: %d\n", findHighest(grades, numStudents));
                break;
            case 3:
                printf("Lowest grade: %d\n", findLowest(grade, numStudents));
                break;
            case 4:
                printf("Exiting the Student Grade book system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");  
            
        }
    }
    return 0;

}   