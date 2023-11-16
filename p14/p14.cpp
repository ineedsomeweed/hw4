#include <stdio.h>
#include <stdlib.h>
#define students 3
#define exams 4

int mini(const int grades[][exams], int pupils, int tests);
int max(const int grades[][exams], int pupils, int tests);
double aver(const int setofgrades[], int tests);
void printarray(const int grades[][exams], int pupils, int tests);

int main(void) {

	int student;
	const int studentgrades[students][exams] =
	{ {77, 68, 86, 73},
		{96, 87, 89, 78},
		{70, 90, 86, 81} };


	printf("the array is: \n");
	printarray(studentgrades, students, exams);

	printf("\n\nlowest grade: %d\nhighest grade: %d \n",
		mini(studentgrades, students, exams),
		max(studentgrades, students, exams));

	for (student = 0; student < students; student++) {

		printf("the average grades for student %d is %.2f\n",
			student, aver(studentgrades[student], exams));

	}
}

void printarray(const int grades[][exams], int pupils, int tests) {


	printf("                 [0]  [1]  [2]  [3]");
	for (int i = 0; i < pupils; i++) {
	
		printf("\nstudentgrades[%d] ", i);
		for (int j = 0; j < tests; j++) printf("%-5d", grades[i][j]);
	
	}
}

	
int mini(const int grades[][exams], int pupils, int tests) {

	int low = 100;
	for(int i = 0; i < pupils; i++) {
	
		for (int j = 0; j < tests; j++) {
		
			if (grades[i][j] < low) low = grades[i][j];
		}
	}
	return low;
}


int max(const int grades[][exams], int pupils, int tests) {

	int high = 0;
	for (int i = 0; i < pupils; i++) {

		for (int j = 0; j < tests; j++) {

			if (grades[i][j] > high) high = grades[i][j];
		}
	}
	return high;
}

double aver(const int setofgrsdes[], int tests) {

	int t = 0;
	for (int i = 0; i < tests; i++) t += setofgrsdes[i];
	return(double)t / tests;

}

