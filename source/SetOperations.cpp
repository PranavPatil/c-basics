/***************************************************************************/
/*		 PROGRAM TO PERFORM OPERATIONS ON SETS                     */
/***************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()                    /*  START OF MAIN FUNCTION */
{
  int i,j,m,n,a[10],b[10];    /* DECLARING FUNCTION VARIABLES */
  char c;
do{                    /* START OF DO-WHILE LOOP */
  clrscr();
  flushall();
  printf("   *************************************************************");
  printf("\n\n\n\n        PROGRAM TO PERFORM OPERATIONS ON SETS");
  printf("\n\n\n\n");
  printf("   *************************************************************");
  printf("\n\n\n\t ENTER THE ELEMENTS OF TWO SETS AS FOLLOWS !!");
  printf("\n\n\n\t ENTER THE NO OF ELEMENTS IN SET 1:");
  scanf("%d",&m);
  printf("\n\n\n\t ENTER THE NO OF ELEMENTS IN SET 2 :");
  scanf("%d",&n);
  printf("\n\n\n\t ENTER THE ELEMENTS OF SET 1 ::");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);                  /*  ACCEPTING SET 1 */
  }
  printf("\n\n\n\n\n\t SET 1={");
  for(i=0;i<m;i++)
  {
    printf("%d ",a[i]);                 /* DISPLAYING SET 1 */
  }
  printf("\b}");
  printf("\n\n\n\n\n\t ENTER THE ELEMENTS OF SET 2 ::");
  for(j=0;j<n;j++)
  {
    scanf("%d",&b[j]);                  /*  ACCEPTING SET 2 */
  }
  printf("\n\n\n\n\n\t SET 2={");
  for(j=0;j<n;j++)
  {
    printf("%d ",b[j]);                 /* DISPLAYING SET 2 */
  }
  printf("\b}");
  getch();
  clrscr();
  printf("\n\n\n\n\t");
  int no;
  int an;
  /*------------------------------------------------------------------------*/
  /*              **** DISPLAYING THE MENU ****                             */
  /*------------------------------------------------------------------------*/
  printf("                ****   MENU   ****                      \n\n");
  printf("\n\n\t        1:INTERSECTION               ");
  printf("\n\n\t        2:UNION                      ");
  printf("\n\n\t        3:DIFFERENCE                 ");
  printf("\n\n\t        4:SYMMETRIC DIFFERENCE       ");
  printf("\n\n\t        5:EXIT                       ");
  printf("\n\n\t   ENTER YOUR CHOICE :  ");
  scanf("%d",&no);
  /*------------------------------------------------------------------------*/
  /*              **** START OF SWITCH CASE ****                            */
  /*------------------------------------------------------------------------*/
  switch(no)
  {
    case 1:
	    clrscr();
	    printf("\n========================================================");
	    printf("\n\n\t INTERSECTION OF SETS !! \n");
	    printf("\n========================================================");
	    printf("\n\n\n\n\n\t SET 1={");
	    for(i=0;i<m;i++)
	    {
	      printf("%d ",a[i]);                 /* DISPLAYING SET 1 */
	    }
	    printf("\b}");
	    printf("\n\n\n\n\n\t SET 2={");
	    for(j=0;j<n;j++)
	    {
	      printf("%d ",b[j]);                 /* DISPLAYING SET 2 */
	    }
	    printf("\b}");
	    printf("\n\n\n\n\tINTERSECTION OF SET 1 AND SET 2 IS = {");
	    int flag4;
	    for(j=0;j<n;j++)
	    {
	      flag4=0;
	      for(i=0;i<m;i++)
	      {
	       if(a[i]==b[j])    /* CHECKING FOR COMMON ELEMENTS */
	       {
		 flag4=1;
	       }
	      }

	      if(flag4==1)
	      {
		 printf("%d ",b[j]);  /* DISPLAYING INTERSECTION SET */
	      }
	      if(flag4==0)
	      {
		 printf("\t");
	      }
	    }
	    printf("\b\b\b}");
	    break;
    case 2:
	    clrscr();
	    printf("\n========================================================");
	    printf("\n\n\t UNION OF SETS !! \n");
	    printf("\n========================================================");
	    printf("\n\n\n\n\n\t SET 1={");
	    for(i=0;i<m;i++)
	    {
	      printf("%d ",a[i]);                 /* DISPLAYING SET 1 */
	    }
	    printf("\b}");
	    printf("\n\n\n\n\n\t SET 2={");
	    for(j=0;j<n;j++)
	    {
	      printf("%d ",b[j]);                 /* DISPLAYING SET 2 */
	    }
	    printf("\b}");
	    printf("\n\n\tUNION OF SET 1 AND SET 2 IS ={");
	    int flag;
	    for(i=0;i<m;i++)
	    {
	      printf("%d ",a[i]);    /* DISPLAYING  SET 1 */
	    }
	    for(j=0;j<n;j++)
	    {
	      flag=0;
	      for(i=0;i<m;i++)
	      {
		if(a[i]==b[j])     /* CHECKING FOR COMMON ELEMENTS */
		flag=1;
	      }
	      if(flag==0)
	      printf("%d ",b[j]); /* DISPLAYING UNCOMMMON ELEMENTS OF SET 2*/
	    }
	    printf("\b}");
	    break;
    case 3:
	    clrscr();
	    printf("\n========================================================");
	    printf("\n\n\t DIFFERENCE OPERATION ON SETS !! \n");
	    printf("\n========================================================");
	    printf("\n\n\n\n\tWHICH OPERATION DO YOU WANT TO PERFORM ??\n\n");
	    /*-------------------------------------------------------*/
	    /*       DISPLAYING MENU FOR DIFFERENCE OPERATION        */
	    /*-------------------------------------------------------*/
	    printf("\t         **  MENU  **              \n\n");
	    printf("\n\n\t  1: (SET 1) - (SET 2)    ");
	    printf("\n\n\t  2: (SET 2) - (SET 1)    ");
	    printf(" \n\n\n\tENTER YOUR CHOICE :");
	    scanf("%d",&an);
	    switch(an)            /* SWITCH CASE FOR DIFFERENCE OPERATION */
	    {
	      case 1:
		      int flag1;
		      printf("\n\n\n\n\n\t SET 1={");
		      for(i=0;i<m;i++)
		      {
			printf("%d ",a[i]);         /* DISPLAYING SET 1 */
		      }
		      printf("\b}");
		      printf("\n\n\n\n\n\t SET 2={");
		      for(j=0;j<n;j++)
		      {
			printf("%d ",b[j]);                 /* DISPLAYING SET 2 */
		      }
		      printf("\b}");
		      printf("\n\n\n\t(SET 1) - (SET 2) = {");
		      for(i=0;i<m;i++)
		       {
			flag1=0;
			for(j=0;j<n;j++)
			{
			 if(a[i]==b[j])  /* CHECKING FOR COMMON ELEMENTS */
			 flag1=1;
			}
			if(flag1==0)
			printf("%d ",a[i]);
		       }
		       printf("\b}"); /* DISPLAYING UNCOMMMON ELEMENTS OF SET 1*/
		       break;
	      case 2:
		      int flag2;
		      printf("\n\n\n\n\n\t SET 1={");
		      for(i=0;i<m;i++)
		      {
			printf("%d ",a[i]);         /* DISPLAYING SET 1 */
		      }
		      printf("\b}");
		      printf("\n\n\n\n\n\t SET 2={");
		      for(j=0;j<n;j++)
		      {
			printf("%d ",b[j]);          /* DISPLAYING SET 2 */
		      }
		      printf("\b}");
		      printf("\n\n\n\t(SET 2) - (SET 1) = {");
		      for(j=0;j<n;j++)
		      {
		       flag2=0;
		       for(i=0;i<m;i++)
		       {
			if(b[j]==a[i])    /* CHECKING FOR COMMON ELEMENTS */
			flag2=1;
		       }
		       if(flag2==0)
		       printf("%d ",b[j]);/* DISPLAYING UNCOMMMON ELEMENTS OF SET 1*/
		      }
		      printf("\b}");
		      break;
	    }
	    break;
    case 4:
	    clrscr();
	    printf("\n========================================================");
	    printf("\n\n\t SYMMETRIC DIFFERENCE OPERATION !! \n");
	    printf("\n========================================================");
	    printf("\n\n\n\n\n\t SET 1={");
	    for(i=0;i<m;i++)
	    {
	       printf("%d ",a[i]);         /* DISPLAYING SET 1 */
	    }
	    printf("\b}");
	    printf("\n\n\n\n\n\t SET 2={");
	    for(j=0;j<n;j++)
	    {
	       printf("%d ",b[j]);                 /* DISPLAYING SET 2 */
	    }
	    printf("\b}");
	    printf("\n\n\tSYMMETRIC DIFFERENCE BETWEEN SET 1 AND SET 2 IS ={");
	    for(i=0;i<m;i++)
	    {
	      flag=0;
	      for(j=0;j<n;j++)
	      {
		if(a[i]==b[j])     /* CHECKING FOR COMMON ELEMENTS */
		flag=1;
	      }
	      if(flag==0)
	      printf("%d ",a[i]);  /* DISPLAYING UNCOMMMON ELEMENTS OF SET 1*/
	    }
	    for(j=0;j<n;j++)
	    {
	      flag=0;
	      for(i=0;i<m;i++)
	      {
		if(a[i]==b[j])       /* CHECKING FOR COMMON ELEMENTS */
		flag=1;
	      }
	      if(flag==0)
	      printf("%d ",b[j]);  /* DISPLAYING UNCOMMMON ELEMENTS OF SET 2*/
	    }
	    printf("\b}");
	    break;
    case 5:
	    printf("\n\n\n\t\t EXIT FROM THE LOOP !!!");
	    break;
   default:
	    printf("\n\n\n\t\tERROR IN THE INPUT !!!");
	    break;
  }
  printf(" \n\n\n\n\n\t\tDO YOU WANT TO CONTINUE ? ");
  printf(" \n\n\n\tTYPE Y FOR YES OR N FOR NO :");
  scanf("%s",&c);
  }while( c=='y' ||  c=='Y' );
  printf("\n\n\n\n\n\n\t\t*********** END OF THE PROGRAM !! **************");
  getch();
  /* ------------------------------------------------------------------*/
  /*             ****  END OF MAIN FUNCTION  ****                      */
  /*-------------------------------------------------------------------*/
}
