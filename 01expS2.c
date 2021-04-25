/*
	EXP# 01
	Written by : Viju Shankar
	Date : 17-01-2018
*/
#include<stdio.h>
main()
{
	char sname[25];
	long int reno;
	int semester;
	char branch[5];
	int m1, m2, m3, m4, m5;
	printf("Enter the name of student :");
	scanf("%s", sname);
	printf("Enter the register no of student :");
	scanf("%ld", &reno);
	printf("Enter the semester :");
	scanf("%d", &semester);
	printf("Enter the branch :");
	scanf("%s", branch);
	printf("Enter five marks :");
	scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

	printf("STDENT DETAILS :\n");
	printf("Name	:	%s\n", sname);
	printf("Reg. no	:	%ld\n", reno);
	printf("Semester:	%d\n", semester);
	printf("Branch	:	%s\n", branch);
	printf("Marks	:	%d\t%d\t%d\t%d\t%d\t\n",m1, m2, m3, m4, m5 );
	

}
