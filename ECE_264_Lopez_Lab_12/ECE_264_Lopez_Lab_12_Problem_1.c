#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char *firstname;
	char *lastname;
	char *id;
	char *gender;
	int age;
	double gpa;
};

void readStudentsInformation(struct student STUDENT[], int size); 
void outputStudents(struct student [], int size);
double averageAge(struct student [], int size);
double averageGpa(struct student [], int size); 
void sortByLastName(struct student [], int size);
void sortByID(struct student [], int size); void sortByAge(struct student [], int size);
void sortByGpa(struct student [], int size);
void freeStudents(struct student [], int size);


int main ()
{
	int num_students,i;
	struct student* STUDENT; 
	double average_gpa, average_age;
	printf("Please enter the number of students: ");
	scanf_s("%d",&num_students);
	printf("\n");
	
	STUDENT = (struct student*) malloc(num_students*sizeof(struct student)); 
	
	if(STUDENT == NULL) 
	{ 
	printf("Error Allocating Memory"); 
	exit(1); 
	}//end if		
		readStudentsInformation(STUDENT, num_students);
		printf("\n\n================================================================\n\n\n");
		outputStudents(STUDENT, num_students);
		printf("\n\n================================================================\n\n");

		average_age = averageAge(STUDENT, num_students);
		printf("The average age of all students is: %.03lf\n\n",average_age);

		average_gpa = averageGpa(STUDENT, num_students);
		printf("The average GPA of all students is: %.03lf",average_gpa);
		printf("\n\n================================================================");
		
		sortByLastName(STUDENT, num_students);
		printf("\n\n\t\tSorted by last name\n\n");
		outputStudents(STUDENT, num_students);
		printf("================================================================");

		sortByID(STUDENT, num_students);
		printf("\n\n\t\tSorted by id\n\n");
		outputStudents(STUDENT, num_students);
		printf("================================================================");

		sortByAge(STUDENT, num_students);
		printf("\n\n\t\tSorted by age (least to greatest)\n\n");
		outputStudents(STUDENT, num_students);
		printf("================================================================");

		sortByGpa(STUDENT, num_students);
		printf("\n\n\t\tSorted by gpa (least to greatest)\n\n");
		outputStudents(STUDENT, num_students);

		freeStudents(STUDENT, num_students);

	return 0;
}//end main

void readStudentsInformation(struct student STUDENT[], int size)
{
	int i,length;
	char temp_info[200];
	int age_temp;
	double gpa_temp;
	char *temp = NULL;//temporary string
		for(i = 0; i<size;i++)
	{
		printf("Student[%d]'s first name: ",i);	
		scanf(" %s",&temp_info);
		temp = temp_info;
		length = strlen(temp_info);
		STUDENT[i].firstname = (char*) malloc(length);
		strcpy(STUDENT[i].firstname,temp);
//---------------------------------------------------------------------------------------------------------		
		printf("Student[%d]'s last name (first letter must be unique): ",i);
		scanf(" %s",&temp_info);
		temp = temp_info;
		//temp = gets(temp_info);
		
		length = strlen(temp_info);
		STUDENT[i].lastname = (char*) malloc(length); 
		strcpy(STUDENT[i].lastname,temp);
//--------------------------------------------------------------------------------------------------------		
		printf("Student[%d]'s ID (10 digits long) (first number must be unique): ",i);	
		scanf(" %s",&temp_info);
		temp = temp_info;
		//temp = gets(temp_info);
		
		length = strlen(temp);
		STUDENT[i].id = (char*) malloc(length);
		strcpy(STUDENT[i].id,temp);
//-------------------------------------------------------------------------------------------------------	
		printf("Student[%d]'s gender (m or f): ",i);
		scanf(" %s",&temp_info);
		temp = temp_info;
		//temp = gets(temp_info);
		
		length = strlen(temp_info);
		STUDENT[i].gender = (char*) malloc(length); 
		strcpy(STUDENT[i].gender,temp);
//--------------------------------------------------------------------------------------------------------
		printf("Student[%d]'s age: ",i);
		scanf(" %d",&age_temp);
		
		length = sizeof(age_temp);
		
		STUDENT[i].age = age_temp;
//-------------------------------------------------------------------------------------------------------
		printf("Student[%d]'s gpa: ",i);
		scanf(" %lf",&gpa_temp);
		
		length = sizeof(gpa_temp);
		STUDENT[i].gpa = gpa_temp;

		printf("\n");
		}//end for
}//end funct def

void outputStudents(struct student STUDENT[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Student[%d]'s first name is:     %s\n", i,STUDENT[i].firstname);
		printf("Student[%d]'s last name is:      %s\n",i, STUDENT[i].lastname);
		printf("Student[%d]'s ID is:             %s\n",i, STUDENT[i].id);
		printf("Student[%d]'s gender is:         %s\n",i, STUDENT[i].gender);
		printf("Student[%d]'s age is:            %d\n",i, STUDENT[i].age);
		printf("Student[%d]'s GPA is:            %.03lf\n\n\n",i, STUDENT[i].gpa);
	}//end for
}//end funct def

double averageAge(struct student STUDENT[], int size)
{
	int i;
	double avg=0;
	for (i = 0; i < size; i++)
	{
		avg += STUDENT[i].age;
	}//end for
	avg /=size;
	return avg;
}

double averageGpa(struct student STUDENT[], int size)
{
	int i;
	double avg=0;
	for (i = 0; i < size; i++)
	{
		avg += STUDENT[i].gpa;
	}//end for
	avg /=size;
	return avg;
}

void sortByLastName(struct student STUDENT[], int size)
{
	int i,j;

	struct student temp_student;//temporary structure

	for(i = 0; i < (size - 1); i++)//bubble swapping method
	{
		for(j = 0;j <(size - i - 1);j++) 
		{
			if(STUDENT[j].lastname[0] >= STUDENT[j+1].lastname[0])
			{
					memcpy(&temp_student,&STUDENT[j],sizeof(struct student));
					memcpy(&STUDENT[j],&STUDENT[j + 1],sizeof(struct student));
					memcpy(&STUDENT[j + 1],&temp_student,sizeof(struct student));
			}//end if
		}//end for
	}//end for
}

void sortByID(struct student STUDENT[], int size)
{
	
	int i,j;

	struct student temp_student;//temporary structure

	for(i = 0; i < (size - 1); i++)//bubble swapping method
	{
		for(j = 0;j <(size - i - 1);j++) 
		{
			if(STUDENT[j].id[0] >= STUDENT[j+1].id[0])
			{
					memcpy(&temp_student,&STUDENT[j],sizeof(struct student));
					memcpy(&STUDENT[j],&STUDENT[j + 1],sizeof(struct student));
					memcpy(&STUDENT[j + 1],&temp_student,sizeof(struct student));
			}//end if
		}//end for
	}//end for


}

void sortByAge(struct student STUDENT[], int size)
{
	
	int i,j;

	struct student temp_student;//temporary structure

	for(i = 0; i < (size - 1); i++)//bubble swapping method
	{
		for(j = 0;j <(size - i - 1);j++) 
		{
			if(STUDENT[j].age > STUDENT[j+1].age)
			{
					memcpy(&temp_student,&STUDENT[j],sizeof(struct student));
					memcpy(&STUDENT[j],&STUDENT[j + 1],sizeof(struct student));
					memcpy(&STUDENT[j + 1],&temp_student,sizeof(struct student));
			}//end if
		}//end for
	}//end for


}

void sortByGpa(struct student STUDENT[], int size)
{
	int i,j;

	struct student temp_student;//temporary structure

	for(i = 0; i < (size - 1); i++)//bubble swapping method
	{
		for(j = 0;j <(size - i - 1);j++) 
		{
			if(STUDENT[j].gpa > STUDENT[j+1].gpa)
			{
					memcpy(&temp_student,&STUDENT[j],sizeof(struct student));
					memcpy(&STUDENT[j],&STUDENT[j + 1],sizeof(struct student));
					memcpy(&STUDENT[j + 1],&temp_student,sizeof(struct student));
			}//end if
		}//end for
	}//end for
}


void freeStudents(struct student STUDENT[], int size)
{
	free(STUDENT);

}//end funct def
