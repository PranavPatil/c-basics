/***************************************************************************/
/*			 PROGRAM TO PERFORM STRING MANIPULATION            */
/***************************************************************************/
#include<stdio.h>
#include<conio.h>
 void main()
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
 {
	char a[80],b[80],an;         /* DECLARATION OF VARIABLES */

 /*-------------------  DECLARATION OF FUNCTIONS  -------------------------*/

	void length(char a[10],char b[10]);
	void reverse(char a[10],char b[10]);
	void copy(char a[10],char b[10]);
	void concatinate(char a[10],char b[10]);
	void compare(char a[10],char b[10]);
	void palindrome(char a[10],char b[10]);
	void substring(char a[10],char b[10]);
do{                                /* START OF DO-WHILE LOOP */
	clrscr();                        /* CLEARING THE SCREEN */
	flushall();
	printf("**********************************************************");
	printf("\n\n\n\n    PROGRAM TO PERFORM FILE HANDLING  !!");
	printf("\n\n\n\n");
	printf("**********************************************************");
	printf("\n\n");
	printf("\n\n\n\n   ENTER THE TWO STRINGS AS FOLLOWS !!");
	printf("\n\n\n\n   ENTER THE CHARACTERS FOR STRING 1 :");
	scanf("%s",a);                                   /* ACCEPTING STRING 1 */
	printf("\n\n\n\n   STRING 1 = \" ");
	printf("%s",a);
	printf(" \"");
	printf("\n\n\n\n   ENTER THE CHARACTERS FOR STRING 2 :");
	scanf("%s",b);                                  /* ACCEPTING STRING 2 */
	printf("\n\n\n\n   STRING 2 = \" ");
	printf("%s",b);
	printf(" \"");
	printf("\n\n\n\n\t");
	int no;
/*------------------------------------------------------------------------*/
/*                   **** DISPLAYING THE MENU ****                             */
/*------------------------------------------------------------------------*/
	printf("                ****   MENU   ****                      \n\n");
	printf("\n\n\t        1:LENGTH OF STRING               ");
	printf("\n\n\t        2:REVERSE THE STRING                      ");
	printf("\n\n\t        3:COPY STRINGS                      ");
	printf("\n\n\t        4:CONCATINATE BOTH STRINGS 	 ");
	printf("\n\n\t        5:COMPARE BOTH STRINGS  	 ");
	printf("\n\n\t        6:PALINDROME CHECK            ");
	printf("\n\n\t        7:DETECTION OF SUBSTRING          ");
	printf("\n\n\t        8:EXIT                       ");
	printf("\n\n\t        ENTER YOUR CHOICE :  ");
	scanf("%d",&no);
	/*------------------------------------------------------------------------*/
	/*              **** START OF SWITCH CASE ****                            */
	/*------------------------------------------------------------------------*/
	switch(no)
	{
		case 1:

			clrscr();
			length(a,b);               /* CALLING FUNCTION  length() */
			break;
		case 2:
			clrscr();
			reverse(a,b);              /* CALLING FUNCTION  reverse() */
			break;
		case 3:
			clrscr();
			copy(a,b);                 /* CALLING FUNCTION  copy() */
			break;
		case 4:
			clrscr();
			concatinate(a,b);          /* CALLING FUNCTION  concatinate() */
			break;
		case 5:
			clrscr();
			compare(a,b);              /* CALLING FUNCTION  compare() */
			break;
		case 6:
			clrscr();
			palindrome(a,b);           /* CALLING FUNCTION  palindrome() */
			break;
		case 7:
			clrscr();
			substring(a,b);            /* CALLING FUNCTION  substring() */
			break;
		case 8:
			printf("\n\n\n\t\tEXIT FROM THE LOOP !!!");
			break;
	 default:
			printf("\n\n\n\t\tERROR IN THE INPUT !!!");
			break;
	}
	printf("\n\n\n\n\t\t  DO YOU WANT TO CONTINUE !!");
	printf("\n\n\n\n\t\t  TYPE Y FOR YES OR N FOR NO :");
	scanf("%s",&an);
	}while( an=='Y' || an=='y');
	printf("\n\n\n\n\n\t\t  ******* END OF THE PROGRAM !! *******");
	getch();
/* ------------------------------------------------------------------------*/
/*                  ****  END OF MAIN FUNCTION  ****                       */
/*-------------------------------------------------------------------------*/
 }
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION length() ********                  */
 /*------------------------------------------------------------------------*/
 void length(char a[10],char b[10])
 {  int i,j;
    printf("\n====================================================");
    printf("\n\n\t  DETECTION LENGTH OF STRINGS !!");
    printf("\n\n====================================================");
    printf("\n\n\n  LENGTH OF STRING 1 :");
    for(i=0;a[i] !='\0';i++)
    {
       a[i];
    }
    a[i]='\0';
    printf("%d",i);
    printf("\n\n\n  LENGTH OF STRING 2 :");
    for(j=0;b[j] !='\0';j++)
    {
      b[j];
    }
    b[j]='\0';
    printf("%d",j);
 }
 /*========================END OF FUNCTION length()========================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION reverse() ********                  */
 /*------------------------------------------------------------------------*/
 void reverse(char a[10],char b[10])
 {
		int i,j;
		printf("\n====================================================");
		printf("\n\n\t  OPERATION TO REVERSE STRINGS !!");
		printf("\n\n====================================================");
		printf("\n\n\n  REVERSE OF STRING 1 :");
		int count;
		count=0;
		for(i=0;a[i]!='\0';i++)
		{
			count=count+1;
		}
		for(i=count-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
		printf("\n\n\n  REVERSE OF STRING 2 :");
		int count1;
		count1=0;
		for(j=0;b[j]!='\0';j++)
		{
			count1=count1+1;
		}
		for(j=count1-1;j>=0;j--)
		{
			printf("%c",b[j]);
		}
 }
 /*========================END OF FUNCTION reverse()=======================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION copy() ********              */
 /*------------------------------------------------------------------------*/
 void copy(char a[10],char b[10])
 {
	 int i,no;
	 printf("\n========================================================");
	 printf("\n\n\n\t\t ***  OPERATION TO COPY STRINGS !!  **");
	 printf("\n\n========================================================");
 /*------------------------------------------------------------------------*/
 /*            **** DISPLAYING THE MENU FOR COPY OPERATION ****                             */
 /*------------------------------------------------------------------------*/
	 printf("\n\n\n\t\t     ****  MENU  ****        ");
	 printf("\n\n\n\t     1:COPY OF STRING 1 TO STRING 2 ");
	 printf("\n\n\n\t     2:COPY OF STRING 2 TO STRING 1 ");
	 printf("\n\n\n\n\t\t     ENTER YOUR CHOICE :  ");
	 scanf("%d",&no);
 /*------------------------------------------------------------------------*/
 /*              **** START OF SWITCH CASE ****                            */
 /*------------------------------------------------------------------------*/
	 switch(no)
	 {
	 case 1:
		 printf("\n\n\n");
		 printf("\n\n\n\t\t  ORIGINAL STRING 1 :\" %s \"",a);
		 printf("\n\n\n\t\t  COPY OF STRING 1 TO STRING 2 IS :\" ");
		 for(i=0;a[i] !='\0';i++)
		 {
			 a[i]=b[i];
		 }
		 a[i]='\0';
		 printf("%s \"",a);
		 break;
	 case 2:
		 printf("\n\n\n");
		 printf("\n\n\n\t\t  ORIGINAL STRING 2 :\" %s \"",b);
		 printf("\n\n\n\t\t  COPY OF STRING 2 TO STRING 1 IS :\" ");
		 for(i=0;b[i] !='\0';i++)
		 {
			 b[i]=a[i];
		 }
		 b[i]='\0';
		 printf("%s \"",b);
		 break;
	 default:
		 printf("\n\n\n\t\tERROR IN THE INPUT !!!");
		 break;
	 }
 }
 /*========================END OF FUNCTION copy()==========================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION concatinate() ********       */
 /*------------------------------------------------------------------------*/
 void concatinate(char a[10],char b[10])
 {
	 int i,j;
	 char c[10];
	 printf("\n\n===========================================================");
	 printf("\n\n\t  OPERATION TO PERFORM CONCATINATION OF STRING !!");
	 printf("\n\n===========================================================");
	 printf("\n\n\n  CONCATINATION OF STRING 1 AND STRING 2 IS :");
	 for(i=0;a[i] !='\0';i++)
	 {
		 c[i]=a[i];
	 }
	 c[i]=' ';
	 for(j=0;b[j] !='\0';j++)
	 {
		 c[i+j+1]=b[j];
	 }
	 c[i+j+1]='\0';
	 printf("  %s\n",c);
	 getch();
 }
 /*========================END OF FUNCTION concatinate()===========================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION compare() ********           */
 /*------------------------------------------------------------------------*/
 void compare(char a[10],char b[10])
 {
	 int i,j;
	 printf("\n==================================================================");
	 printf("\n\n\n\t   COMRARISION BETWEEN STRING 1 AND STRING 2 IS !!");
	 printf("\n\n================================================================");
	 printf("\n\n\n\t   STRING 1 = \" ");
	 printf("%s",a);
	 printf(" \"");
	 printf("\n\n\n\t   STRING 2 = \" ");
	 printf("%s",b);
	 printf(" \"");
	 i=0;
	 j=0;
	 while(a[i]==b[j] && a[i]!='\0' && b[j]!='\0')
	 {
		 i++;
	 j++;
	 }
	 if(a[i]=='\0' && b[j]=='\0')
	 printf("\n\n\n\t\t*** STRINGS ARE EQUAL ***\n\n");
	 else
	 printf("\n\n\n\t\t*** STRINGS ARE NOT EQUAL ***\n\n");
 }
 /*========================END OF FUNCTION compare()=======================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION palindrome() ********        */
 /*------------------------------------------------------------------------*/
 void palindrome(char a[10],char b[10])
 {
	 int i,j,k,h;
	 printf("\n=======================================================");
	 printf("\n\n\n\t\t**** DETECTION OF PALINDROME !! ****");
	 printf("\n\n=======================================================");
	 int count3,flag;
	 count3=0;
	 for(i=0;a[i]!='\0';i++)
	 {
			 count3=count3+1;
	 }
	 for(k=0;k<count3;k++)
	 {
		 i--;
		 if(a[k]==a[i])
		 {
			 flag=1;
		 }
		 else
		 {
			 k=count3;
			 flag=0;
		 }
	 }
	 if(flag==1)
	 printf("\n\n\n\t\tSTRING 1= PALLINDROME");
	 if(flag==0)
	 printf("\n\n\n\t\tSTRING 1= NOT A PALLINDROME");
	 int count4,flag3;
	 count4=0;
	 for(j=0;b[j]!='\0';j++)
	 {
			 count4=count4+1;
	 }
	 for(h=0;h<count4;h++)
	 {
		 j--;
		 if(b[h]==b[j])
		 {
			 flag3=1;
		 }
		 else
		 {
			 h=count4;
			 flag3=0;
		 }
	 }
	 if(flag3==0)
	 printf("\n\n\n\t\tSTRING 2= NOT A PALLINDROME");
	 if(flag3==1)
	 printf("\n\n\n\t\tSTRING 2= PALLINDROME");
 }
 /*========================END OF FUNCTION palindrome()====================*/


 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION substring() ********         */
 /*------------------------------------------------------------------------*/
 void substring(char a[10],char b[10])
 {
	 int i,j,no;
	 clrscr();
	 printf("\n====================================================");
	 printf("\n\n\t  DETECTION OF SUBSTRING !!");
	 printf("\n\n====================================================");
	/*------------------------------------------------------------------------*/
	/*          **** DISPLAYING THE MENU FOR SUBSTRING OPERATION ****                             */
	/*------------------------------------------------------------------------*/
	 printf("\n\n\n\t   *** MENU ***           \n\n");
	 printf("\n\n\n  1:FIND SUBSTRING 2 IN STRING 1 ");
	 printf("\n\n\n  2:FIND SUBSTRING 1 IN STRING 2 ");
	 printf("\n\n\t        ENTER YOUR CHOICE :  ");
	 scanf("%d",&no);
	/*------------------------------------------------------------------------*/
	/*              **** START OF SWITCH CASE ****                            */
	/*------------------------------------------------------------------------*/
	 switch(no)
	 {
	   case 1:
		 int flag1;
		 flag1=0;
		 i=0;
		 j=0;
		 while(a[i]!='\0'&& b[j]!='\0')
		 {
		   if(b[j]==a[i])
			{
			  i++;
			  j++;
			  flag1=0;
			}
			else
			{
			  if(b[j]!=a[i])
			  {
				 i++;
				 flag1=1;
			  }
			}
		 }
		if(flag1==1)
		{
		 printf("\n\n\n\n\t\t#### SUBSTRING  ABSENT !! ####");
		}
		if(flag1==0)
		{
		 printf("\n\n\n\n\t\t#### SUBSTRING  PRESENT !! ####");
		}
		 break;
	   case 2:
		   	 int flag2;
			 flag2=0;
			 j=0;
			 i=0;
			 while(b[j]!='\0'&& a[i]!='\0')
			 {
			   if(a[i]==b[j])
			   {
				 i++;
				 j++;
				 flag2=0;
			   }
			   else
			   {
				 if(a[i]!=b[j])
				 {
				   i++;
				   flag2=1;
				 }
			   }
			 }
			 if(flag2==1)
			 {
			   printf("\n\t\tSUBSTRING  ABSENT !!");
			 }
			 else
			 {
			   printf("\n\t\tSUBSTRING  PRESENT !!");
			 }
			 break;
	 }
 }
 /*=====================END OF FUNCTION substring()========================*/
/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
