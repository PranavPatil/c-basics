/***************************************************************************/
/*		  PROGRAM TO CREATE STUDENT DATABASE                   */
/***************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct marks                 /* GLOBAL DECLARATION OF ARRAY OF STRUCTURE */
{
  char name[10];             /* DECLARATION OF ELEMENTS OF STRUCTURE */
  char roll[10];
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int total;
  float aver;
}student[120];
int j,flag3;                   /* DECLARATION OF GLOBAL VARIABLES */
float av1,av2,av3,av4,av5;
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
void main()
{
  int no;                      /* DECLARATION OF LOCAL VARIABLES */

/*-------------------  DECLARATION OF FUNCTIONS  -------------------------*/
  void add();
  void display_record();
  void display_report();
  void search();
  do                           /* START OF DO-WHILE LOOP */
  {
   do                          /* START OF DO-WHILE LOOP */
   {
    clrscr();                  /* CLEARING THE SCREEN */
    printf("********************************************************************");
    printf("\n\n\n             PROGRAM TO CREATE STUDENTS DATABASE !!");
    printf("\n\n\n");
    printf("********************************************************************");
  /*------------------------------------------------------------------------*/
  /*              **** DISPLAYING THE MENU ****                             */
  /*------------------------------------------------------------------------*/
      printf("\n\n\n");
      printf("==============================================================\n");
      printf("\n             ++++++++++ MENU ++++++++++                     \n");
      printf("\n==============================================================");
      printf("\n\n\n  1 : ADD RECORDS                     [CHOICE 1]      ");
      printf("\n\n  2 : DISPLAY THE RECORDS             [CHOICE 2]      ");
      printf("\n\n  3 : DISPLAY THE REPORT              [CHOICE 3]      ");
      printf("\n\n  4 : SEARCH FOR MARKSHEET            [CHOICE 4]      ");
      printf("\n\n  5 : EXIT                            [CHOICE 5]      ");
      printf("\n\n\n\n    ENTER YOUR CHOICE : ");
      scanf("%d",&no);            /* ACCEPTING YOUR CHOICE */
   }while(no<1 || no>5);         /* END OF DO-WHILE LOOP */
  /*------------------------------------------------------------------------*/
  /*              **** START OF SWITCH CASE ****                            */
  /*------------------------------------------------------------------------*/
    switch(no)
    {
      case 1:
	      clrscr();            /* CLEARING THE SCREEN */
	      add();               /* CALLING FUNCTION  add() */
	      break;
      case 2:
	      clrscr();            /* CLEARING THE SCREEN */
	      display_record();    /* CALLING FUNCTION  display_record() */
	      break;
      case 3:
	      clrscr();            /* CLEARING THE SCREEN */
	      display_report();    /* CALLING FUNCTION  display_report() */
	      break;
      case 4:
	      clrscr();            /* CLEARING THE SCREEN */
	      search();            /* CALLING FUNCTION  search() */
	      break;
      case 5:

	      printf("\n\n\n\n\n*********************  END OF THE PROGRAM !!  ************************");
	      getch();
	      exit(0);
	      break;
    }
  }while(no<5 || no>5);             /* END OF DO-WHILE LOOP */
  getch();
 /* -----------------------------------------------------------------------*/
 /*                  ****  END OF MAIN FUNCTION  ****                      */
 /*------------------------------------------------------------------------*/
}
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION add() ********               */
 /*------------------------------------------------------------------------*/
  void add()
  {
     flag3=0;                      /* INITIALISING GLOBAL VARIABLES */
     j=0;
     int i;                        /* DECLARATION OF LOCAL VARIABLES */
     printf("\n========================================================");
     printf("\n\n\t ADDITION OF RECORDS !! \n");
     printf("\n========================================================\n\n");
     printf("\n\n\nENTER THE NO OF STUDENTS IN THE CLASS = ");
     scanf("%d",&j);               /* ACCEPTING STRENGTH OF STRUCT ARRAY */
     printf("\n\n");
    for(i=0;i<j;i++)
    {
      printf("--------------------------------------------------------------\n\n");
      printf("********** ENTER THE MARKS FOR STUDENT %d ***********\n\n",i+1);
      printf("--------------------------------------------------------------\n\n");
      printf("\n\n  ####### RECORD OF STUDENTS MARKS IN THE EXAMINATION #######\n\n\n");
  /*--------------- ACCEPTING VALUES OF STRUCTURE ELEMENTS ----------------- */
      printf("ENTER THE NAME OF THE STUDENT : ");
      scanf("%s",student[i].name);
      printf("\n\nENTER THE ROLL NO OF THE STUDENT : ");
      scanf("%s",student[i].roll);
      printf("\n\nMARKS IN MATHEMATICS = ");
      scanf("%d",&student[i].sub1);
      printf("\n\nMARKS IN PHYSICS = ");
      scanf("%d",&student[i].sub2);
      printf("\n\nMARKS IN CHEMISTRY = ");
      scanf("%d",&student[i].sub3);
      printf("\n\nMARKS IN BIOLOGY = ");
      scanf("%d",&student[i].sub4);
      printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
      printf("\n\n\n");
    }
    getch();
  }
 /*========================END OF FUNCTION add()===========================*/
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION display_record() ********               */
 /*------------------------------------------------------------------------*/
  void display_record()
  {
    int i;                       /* DECLARATION OF LOCAL VARIABLES */
    printf("\n========================================================");
    printf("\n\n\t DISPLAYING RECORDS !! \n");
    printf("\n========================================================\n\n");
    printf("\n\n  ####### RECORD OF STUDENTS MARKS IN THE EXAMINATION #######\n\n\n");
      for(i=0;i<j;i++)
      {
	printf("------------------------------------------\n");
	printf("\n      MARKS OF STUDENT %d     \n",i+1);
	printf("\n------------------------------------------\n");
 /*--------------- DISPLAYING VALUES OF STRUCTURE ELEMENTS ----------------- */
	printf("\n\n\tNAME :%s\n\n\tROLL NO :%s",student[i].name,student[i].roll);
	printf("\n\n\n\tMATHEMATICS=%d\n\n\n\tPHISICS=%d\n\n\n\tCHEMISTRY=%d\n\n\n\tBIOLOGY=%d\n\n\n",student[i].sub1,student[i].sub2,student[i].sub3,student[i].sub4);
	getch();
      }
      getch();
  }
  /*========================END OF FUNCTION display_record()===========================*/
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION display_report() ********               */
 /*------------------------------------------------------------------------*/
  void display_report()
  {
	int i;                       /* DECLARATION OF LOCAL VARIABLES */
	static struct marks total;   /* DECLARATION OF STATIC ELEMENTS OF STRUCT */
	static struct marks aver;
	printf("\n\t========================================================");
	printf("\n\n\t\t DISPLAYING REPORTS !! \n");
	printf("\n\t========================================================\n\n");
	if(flag3==0)                   /* CHECKING THE CONDITION */
	{
	  for(i=0;i<j;i++)
	  {
	   total.sub1 =  0;            /* INITIALISING STATIC STRUCT ELEMENTS */
	   total.sub2 =  0;
	   total.sub3 =  0;
	   total.sub4 =  0;
	   total.total=  0;
	   av1=0,av2=0,av3=0,av4=0,av5=0; /* INITIALISING GLOBAL VARIABLES */
	   student[i].total=student[i].sub1 + student[i].sub2 + student[i].sub3 + student[i].sub4;
	   total.sub1 = total.sub1 + student[i].sub1;
	   total.sub2 = total.sub2 + student[i].sub2;   /* CALCULATING TOTAL */
	   total.sub3 = total.sub3 + student[i].sub3;
	   total.sub4 = total.sub4 + student[i].sub4;
	   total.total=total.total+student[i].total;
	  }
	  av1 = total.sub1/j;     /* CALCULATING AVERAGE OF EACH SUB */
	  av2 = total.sub2/j;
	  av3 = total.sub3/j;
	  av4 = total.sub4/j;
	  av5 = total.total/j;
	  flag3=1;
	}
	for(i=0;i<j;i++)
	{
	   student[i].aver = student[i].total/4; /* CALCULATING AVERAGE FOR EACH STUDENT */
	}
/*--------------- DISPLAYING THE TOTALS AND AVERAGES CALCULATED----------------- */
	 printf("\n\n\n\t--------------------------------------------------------");
	 printf("\n\tSTUDENT       ROLL NO     TOTAL    AVERAGE");
	 printf("\n\t--------------------------------------------------------\n\n");
	 for(i=0;i<j;i++)
	 {
	      printf("\t   %s            %s        %d       %2.2f \n\n",student[i].name,student[i].roll,student[i].total,student[i].aver);
	 }
	printf("\n\t-------------------------------------------------------");
	printf("\n\tSUBJECT          TOTAL      AVERAGE");
	printf("\n\t-------------------------------------------------------\n");
	printf("\n");
	printf("\t%s    %d        %2.2f\n\n\n\t%s     %d        %2.2f\n\n\n\t%s     %d        %2.2f\n\n\n\t%s     %d        %2.2f\n\n",
		   "MATHEMATICS    ",total.sub1,av1,
		   "PHYSICS       ", total.sub2,av2,
		   "CHEMISTRY     ", total.sub3,av3,
		   "BIOLOGY       ", total.sub4,av4);
	printf("\t--------------------------------------------------------");
	printf("\n\n\tGRAND TOTAL = %d\n\n\n ",total.total);
	printf("\n\n\tGRAND AVERAGE = %2.3f\n\n ",av5);
	printf("\t--------------------------------------------------------");
	printf("\n\n\t********************************************************\n");
	getch();
  }
 /*========================END OF FUNCTION display_report()===========================*/
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION search() ********               */
 /*------------------------------------------------------------------------*/
  void search()
  {
   int i,j1,no;                /* DECLARATION OF LOCAL VARIABLES */
   char name1[10],roll1[10];
   printf("\n\t========================================================");
   printf("\n\n\t          SEARCHING OPERATION !! \n");
   printf("\n\t========================================================\n");
  /*------------------------------------------------------------------------*/
  /*              **** DISPLAYING THE MENU ****                             */
  /*------------------------------------------------------------------------*/
   printf("\n\n\t\t  +++++++= SEARCH BY =+++++++\n\n\n");
   printf("\t\t 1 : NAME\n\n");
   printf("\t\t 2 : ROLL NO\n\n");
   printf("\n\n\t\t ENTER YOUR CHOICE :");
   scanf("%d",&no);                 /* ACCEPTING YOUR CHOICE */
  /*------------------------------------------------------------------------*/
  /*              **** START OF SWITCH CASE ****                            */
  /*------------------------------------------------------------------------*/
   switch(no)
   {
    case 1:
	    int x,flag;
	    printf("\n\n\n\t=======================================================");
	    printf("\n\n\n\n\t\t ENTER THE NAME :"); /* ACCEPTING NAME */
	    scanf("%s",name1);
	    i=0;                       /* INITIALISING THE VARIABLES */
	    flag=0;
	    do
	    {
	      x=strcmp(student[i].name,name1); /* COMPARING STRUCT ELEMENT & NAME */
	      if(x==0)                  /* CHECKING THE CONDITION */
	      {
		       /* DISPLAYING THE RESULTS */
		printf("\n\n\t--------------------------------------------------------");
		printf("\n\t\t\t\b\bFILE FOUND !\n");
		printf("\t--------------------------------------------------------\n");
		printf("\n\n\t\t  NAME :%s\n\n\n\t\t  ROLL NO :%s",student[i].name,student[i].roll);
		printf("\n\n\n\t\t  MATHEMATICS=%d\n\n\n\t\t  PHISICS=%d\n\n\n\t\t  CHEMISTRY=%d\n\n\n\t\t  BIOLOGY=%d\n\n\n",student[i].sub1,student[i].sub2,student[i].sub3,student[i].sub4);
		flag=1;
	      }
	      else
	      i++;
	    }while(i<j && flag==0);
	    if(flag==0)                /* CHECKING THE CONDITION */
	    {
	      printf("\n\n\n\t--------------------------------------------------------");
	      printf("\n\t\t\t\b\bFILE NOT FOUND !\n");
	      printf("\t--------------------------------------------------------\n\n");
	    }
	    break;
    case 2:
	    int x1,flag1;
	    printf("\n\n\n\t=======================================================");
	    printf("\n\n\n\n\t\t ENTER THE ROLL NO :");
	    scanf("%s",roll1);          /* ACCEPTING ROLL NO */
	    j1=0;                       /* INITIALISING THE VARIABLES */
	    flag1=0;
	    do
	    {
	      x1=strcmp(student[j1].roll,roll1); /* COMPARING STRUCT ELEMENT & ROLL NO*/
	      if(x1==0)                 /* CHECKING THE CONDITION */
	      {
		     /* DISPLAYING THE RESULTS */
		printf("\n\n\t--------------------------------------------------------");
		printf("\n\t\t\t\b\bFILE FOUND !\n");
		printf("\t--------------------------------------------------------\n");
		printf("\n\n\t\t  NAME :%s\n\n\n\t\t  ROLL NO :%s",student[j1].name,student[j1].roll);
		printf("\n\n\n\t\t  MATHEMATICS=%d\n\n\n\t\t  PHISICS=%d\n\n\n\t\t  CHEMISTRY=%d\n\n\n\t\t  BIOLOGY=%d\n\n\n",student[j1].sub1,student[j1].sub2,student[j1].sub3,student[j1].sub4);
		flag1=1;
	      }
	      else
	      j1++;
	    }while(j1<j && flag1==0);
	    if(flag1==0)                 /* CHECKING THE CONDITION */
	    {
	      printf("\n\n\n\t--------------------------------------------------------");
	      printf("\n\t\t\t\b\bFILE NOT FOUND !\n");
	      printf("\t--------------------------------------------------------\n\n");
	    }
	    break;
   }                                     /* END OF SWITCH CASE */
   getch();
  }
  /*========================END OF FUNCTION search()===========================*/
/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
