/*=========================================================================*/
/*   PROBLEM STATEMENT :: WRITE A 'C' PROGRAM TO PERFORM FILE HANDLING   */
/*=========================================================================*/

/*================== IMPORTING REQUIRED HEADER FILES ======================*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

/*------------------------ DECLARING A STRUCTURE ---------------------------*/
struct stud
{
 char nm[20];
 int score1,score2,score3,rol;
}s;
/*---------------  DECLARATION OF USERDEFINED FUNCTIONS  ------------------*/
void addrec(FILE *);
void disprec(FILE *);
void searchrec(FILE *);
void delrec(FILE *);
void modrec(FILE *);
void merge();
void line();
int us;
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
void main()
{
  FILE *fp;               /* DECLARATION OF LOCAL VARIABLES */
  int ch;
  clrscr();               /* CLEARING THE SCREEN */

  fp=fopen("stud.dat","rb+");        /*  OPENING FILE IN rb+ MODE */

  if(fp==NULL)
  {
    fp=fopen("stud.dat","wb+");       /*  OPENING FILE IN wb+ MODE */
    if(fp==NULL)
    {
      printf("\n CANNOT OPEN FILE");
      exit(0);
    }
  }
  while(1)
  {
   do                                  /* START OF DO WHILE LOOP */
   {
    clrscr();                          /* CLEARING THE SCREEN */

		       /* DISPLAYING THE MENU */
    printf("\n\n\t\b\b\b\b");
    printf("**************************************************************");
    printf("\n\n\n          PROGRAM ON FILE HANDLING !!");
    printf("\n\n\n\t\b\b\b\b");
    printf("**************************************************************");
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n             ++++++++++ MENU ++++++++++     \n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n\n\t1 : ADD RECORDS                     [CHOICE 1]      ");
    printf("\n\n\t2 : DISPLAY THE RECORDS             [CHOICE 2]      ");
    printf("\n\n\t3 : SEARCH FOR RECORDS              [CHOICE 3]      ");
    printf("\n\n\t4 : DELETE THE RECORDS              [CHOICE 4]      ");
    printf("\n\n\t5 : MODIFY THE RECORDS              [CHOICE 5]      ");
    printf("\n\n\t6 : MERGE TWO FILES                 [CHOICE 6]      ");
    printf("\n\n\t7 : EXIT                            [CHOICE 7]      ");
    printf("\n\n\n\n\t  ENTER YOUR CHOICE : ");
    scanf("%d",&ch);
   }while(ch<1 || ch>7);              /* END OF DO WHILE LOOP */
    clrscr();
    switch(ch)                       /* START OF SWITCH CASE */
    {
    case 1:
	     addrec(fp);              /* CALL FUNCTION addrec() */
	     break;
    case 2:
	     disprec(fp);             /* CALL FUNCTION disprec() */
	     break;
    case 3:
	     searchrec(fp);           /* CALL FUNCTION searchrec() */
	     break;
    case 4:
	     delrec(fp);               /* CALL FUNCTION delrec() */
	     break;
    case 5:
	     modrec(fp);               /* CALL FUNCTION modrec() */
	     break;
    case 6:
	     merge();                  /* CALL FUNCTION mergerec() */
	     break;
    case 7:
	     printf("\n\n\tTHANK YOU !!.");
	     printf("\n\n\tITS A PRODUCT BY ABC SOFTWARE CO-OPERATION PVT LTD..");
	     printf("\n\n\t@  ALL RIGHTS RESERVED BY ABC.NEWYORK (U.S.A)..");
	     getch();
	     fclose(fp);
	     exit(0);                  /* EXIT FROM THE PROGRAM */
    }
    getch();
  }
}
/* -----------------------------------------------------------------------*/
 /*                  ****  END OF MAIN FUNCTION  ****                      */
 /*------------------------------------------------------------------------*/
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION addrec() ********               */
/*------------------------------------------------------------------------*/
  void addrec(FILE *fp)
  {
     int cnt=0;                     /* DECLARATION OF LOCAL VARIABLES */
     char ans;
     fseek(fp,0,SEEK_END);
     do                             /* START OF DO-WHILE LOOP */
     {
      clrscr();                     /* CLEARING THE SCREEN */
      cnt++;
      printf("\n========================================================");
      printf("\n\n\t ADDITION OF RECORDS !! \n");
      printf("\n========================================================\n\n");
      printf("\n\n");
      printf("--------------------------------------------------------------\n\n");
      printf("********** ENTER THE MARKS FOR STUDENT %d ***********\n\n",cnt);
      printf("--------------------------------------------------------------\n\n");
      printf("\n\n  ####### RECORD OF STUDENTS MARKS IN THE EXAMINATION #######\n\n\n");
  /*--------------- ACCEPTING VALUES OF STRUCTURE ELEMENTS ----------------- */
      printf("ENTER THE NAME OF THE STUDENT : ");
      scanf("%s",s.nm);
      printf("\n\nENTER THE ROLL NO OF THE STUDENT : ");
      scanf("%d",&s.rol);
      printf("\n\nMARKS IN MATHEMATICS -3 = ");
      fflush(stdin);
      scanf("%2d",&s.score1);
      printf("\n\nMARKS IN PHYSICS = ");
      fflush(stdin);
      scanf("%2d",&s.score2);
      printf("\n\nMARKS IN CHEMISTRY = ");
      fflush(stdin);
      scanf("%2d",&s.score3);
      printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
      printf("\n\n\n");
      fwrite(&s,sizeof(s),1,fp);
      printf("\n\n DO YOU WANT TO INSERT ANOTHER RECORD (Y/N)....");
      fflush(stdin);
      ans=getche();
      us++;
     }while(ans=='y'|| ans=='Y');     /* END OF DO-WHILE LOOP */
  }
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION disprec() ********           */
/*------------------------------------------------------------------------*/

  void disprec(FILE *fp)
  {
	int tot;                   /* DECLARATION OF LOCAL VARIABLES */
	float avg;
	clrscr();
	rewind(fp);

	while(fread(&s,sizeof(s),1,fp)==1)  /* START OF WHILE LOOP */
	{
	 clrscr();
	 printf("\n\n\n\t\b\b\b\b");
	 printf("=====================================================\n\n");
	 printf("\t\b\b\b### RECORD OF STUDENTS MARKS IN THE EXAMINATION ###");
	 printf("\n\n\n\t\b\b\b\b");
	 printf("-----------------------------------------------------");
	 printf("\n\t\tNAME       ROLL NO        ");
	 printf("\n\t\b\b\b\b");
	 printf("-----------------------------------------------------\n\n");
	 printf("\t        %s           %d  \n\n\n\t\b\b\b\b",s.nm,s.rol);
	 printf("=====================================================\n\n");
	 printf("\n                MARKS OBTAINED\n\n\t\b\b\b\b");
	 printf("=====================================================\n");
	 printf("\n\n\n\tSUBJECT 1 = %d ",s.score1);
	 printf("\n\n\tSUBJECT 2  = %d ",s.score2);
	 printf("\n\n\tSUBJECT 3  = %d \n\n\n\t\b",s.score3);
	 printf("\b\b\b=====================================================");
	 tot=0;
	 tot=s.score1+s.score2+s.score3;
	 printf("\n\n\tTOTAL :: %d",tot);
	 printf("\n");
	 avg=0;
	 avg=tot/3.0;
	 printf("\n\n\tPERCENTAGE :: %f",avg);
	 printf("\n\n\n\t");
	 if(avg>=66)
		printf("RESULT :: FIRST CLASS WITH DISTINCTION ");
	 if(avg<66&&avg>=60)
		printf("RESULT :: FIRST CLASS ");
	 if(avg<60&&avg>=55)
		printf("RESULT :: HIGHER SECOND CLASS ");
	 if(avg<55&&avg>=50)
		printf("RESULT :: SECOND CLASS ");
	 if(avg<50&&avg>=40)
		printf("RESULT :: PASS CLASS ");
	 if(avg<40)
		printf("RESULT :: FAIL ");
	 printf("\n\n\t\b");
	 printf("\b\b\b=====================================================");
	 printf("\n\n\n\n\n\t PRESS ANY KEY TO CONTINUE......");
	 getch();
	}
  }
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION searchrec() ********               */
/*------------------------------------------------------------------------*/
  void searchrec(FILE *fp)
  {
	int tot,no,flag=0;                /* DECLARATION OF LOCAL VARIABLES */
	float avg;
	clrscr();
	printf("\n\t========================================================");
	printf("\n\n\t          SEARCHING OPERATION !! \n");
	printf("\n\t========================================================\n");
	printf("\n\n\t\t ENTER THE ROLL NO TO SEARCH :: ");
	fflush(stdin);
	scanf("%d",&no);
	rewind(fp);
	while(fread(&s,sizeof(s),1,fp)==1)     /* START OF WHILE LOOP */
	{
	 if(no==s.rol)
	 {
	   clrscr();
	   flag=1;
	   printf("\n\n\n\t\b\b\b\b");
	   printf("-----------------------------------------------------");
	   printf("\n\t\tNAME       ROLL NO        ");
	   printf("\n\t\b\b\b\b");
	   printf("-----------------------------------------------------\n\n");
	   printf("\t        %s           %d  \n\n\n\t\b\b\b\b",s.nm,s.rol);
	   printf("=====================================================\n\n");
	   printf("\n                MARKS OBTAINED\n\n\t\b\b\b\b");
	   printf("=====================================================\n");
	   printf("\n\n\n\tSUBJECT 1 = %d ",s.score1);
	   printf("\n\n\tSUBJECT 2  = %d ",s.score2);
	   printf("\n\n\tSUBJECT 3  = %d \n\n\n\t\b",s.score3);
	   printf("\b\b\b=====================================================");
	   tot=0;
	   tot=s.score1+s.score2+s.score3;
	   printf("\n\n\tTOTAL :: %d",tot);
	   printf("\n");
	   avg=0;
	   avg=tot/3.0;
	   printf("\n\n\tPERCENTAGE :: %f",avg);
	   printf("\n\n\n\t");
	   if(avg>=66)
		printf("RESULT :: FIRST CLASS WITH DISTINCTION ");
	   if(avg<66&&avg>=60)
		printf("RESULT :: FIRST CLASS ");
	   if(avg<60&&avg>=55)
		printf("RESULT :: HIGHER SECOND CLASS ");
	   if(avg<55&&avg>=50)
		printf("RESULT :: SECOND CLASS ");
	   if(avg<50&&avg>=40)
		printf("RESULT :: PASS CLASS ");
	   if(avg<40)
		printf("RESULT :: FAIL ");
	   printf("\n\n\t\b");
	   printf("\b\b\b=====================================================");
	   printf("\n\n\n\n\n\t PRESS ANY KEY TO CONTINUE......");
	   getch();
	 }
	 else
	 {
	   flag=1;
	 }
	}
	if(flag==0)
	{
	  printf("\n\n\n\t");
	  printf("=====================================================");
	  printf("\n\n\t\t     FILE NOT FOUND !!! ");
	  printf("\n\n\n\t");
	  printf("=====================================================");
	}
  }
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION delrec() ********         */
/*------------------------------------------------------------------------*/
  void delrec(FILE *fp)
  {
    int no,flag=0;                     /* DECLARATION OF LOCAL VARIABLES */
    char ans;
    FILE *ft=NULL;
    do                          /* START OF DO-WHILE LOOP */
    {
	clrscr();
	rewind(fp);             /* INITIALISING FILE POINTER */
	printf("\n\t========================================================");
	printf("\n\n\t          OPERATION TO DELETE THE FILE !! \n");
	printf("\n\t========================================================\n");
	printf("\n\n\t\t");
	printf("ENTER THE ROLL NO OF STUDENT");
	printf("\n\n\n\t\tWHOSE RECORD YOU WANT TO DELETE :: ");
	scanf("%d",&no);

	ft=fopen("temp.dat","wb+");      /*  OPENING FILE IN wb+ MODE */

	 while(fread(&s,sizeof(s),1,fp)==1)      /* START OF WHILE LOOP */
	 {
	   if(s.rol==no)
	   {
	      fseek(ft,-(long)sizeof(s),1);
	      fwrite(&s,sizeof(s),1,ft);
	      flag=1;
	      break;
	   }
	 }
	 fclose(ft);       /* CLOSE FILE */
	 fclose(fp);       /* CLOSE FILE */
	 if(flag==0)
	 printf("\n\n\t\tRECORDS DOES NOT EXIST !!!!!!");
	 else
	 printf("\n\n\t\tTHE RECORDS DELETED SUCCESSFULLY !!!!");
	 remove("stud.dat");
	 rename("temp.dat","stud.dat");
	 remove("temp.dat");
	 fp=fopen("stud.dat","rb+");   /*  OPENING FILE IN rb+ MODE */
	 printf("\n\n\n\t\tDO WANT TO DELETE ANOTHER RECORD (Y/N) :: ");
	 fflush(stdin);
	 ans=getche();
    }while(ans=='y'|| ans=='Y');
  }
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION modrec() ********            */
/*------------------------------------------------------------------------*/
  void modrec(FILE *fp)
  {
    FILE *ft=NULL;                 /* DECLARATION OF LOCAL VARIABLES */
    int no;
    char ans;
    do
    {
       clrscr();
       rewind(fp);
       printf("\n\t\b\b\b\b");
       printf("========================================================");
       printf("\n\n\t          OPERATION TO MODIFY THE FILE !! \n\n\t\b");
       printf("\b\b\b========================================================");
       printf("\n\n\n\n\t\b\b\b");
       printf("ENTER THE ROLL NO WHOSE RECORD IS TO BE MODIFIED :: ");
       scanf("%d",&no);
       fp=fopen("stud.dat","rb+");          /*  OPENING FILE IN rb+ MODE */
       if(fp==NULL)
       {
	  printf("\n\n\n\t\tALLOCATION FAILED !!!");
	  getch();
	  exit(0);
       }
       fclose(fp);
       fp=fopen("stud.dat","wb+");          /*  OPENING FILE IN wb+ MODE */
       if(s.rol!=no)
       {
	   printf("\n\n\n\t\tROLL NO DOES NOT EXIST !!!!");
       }
       fclose(fp);
       ft=fopen("stud.dat","ab+");          /*  OPENING FILE IN wb+ MODE */
       if(s.rol==no)
       {
	   printf("\n\n\n\t\tENTER THE RECORD  !!!");
	   fflush(stdin);
	   printf("\n\n\n\t\tENTER THE NAME OF STUDENT > ");
	   scanf("%s",s.nm);
	   printf("\n\n\t\tENTER THE ROLL NO OF THE STUDENT > ");
	   scanf("%d",&s.rol);
	   printf("\n\n\t\tENTER THE MARKS IN SUBJECT 1 > ");
	   scanf("%d",&s.score1);
	   printf("\n\n\t\tENTER THE MARKS IN SUBJECT 2 > ");
	   scanf("%d",&s.score2);
	   printf("\n\n\t\tENTER THE MARKS IN SUBJECT 3 > ");
	   scanf("%d",&s.score3);
	   fseek(ft,-(long)sizeof(s),us);
	   fwrite(&s,sizeof(s),1,ft);
	   printf("\n\n\n\t\tRECORDS SUCCESSFULLY ADDED !!!!");
       }
       fclose(ft);
       fclose(fp);
       printf("\n\n\n");
       printf("\t\b\b\b\b WANT TO MODIFY ANOTHER RECORD (Y/N) :: ");
       fflush(stdin);
       ans=getche();
    }while(ans=='y' || ans=='Y');
  }
/*-------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION merge() ********              */
/*-------------------------------------------------------------------------*/
  void merge()
  {
    FILE *fp1,*fp2,*fp3;             /* DECLARATION OF LOCAL VARIABLES */
    char nm1[10],nm2[10],nm3[10];
    char ch1,ch2;
    int len1,len2,f=0,g=0;
    printf("\n\t\b\b\b\b");
    printf("========================================================");
    printf("\n\n\t      OPERATION TO MERGE TWO FILES !! \n\n\t\b");
    printf("\b\b\b========================================================");
    printf("\n\n\n\n\t");
    printf("ENTER FIRST FILE'S NAME =>" );
    fflush(stdin);
    gets(nm1);
    printf("\n\n\n\tENTER SECOND FILE'S NAME => ");
    fflush(stdin);
    gets(nm2);
    printf("\n\n\n\tENTER THIRD FILE'S NAME => ");
    fflush(stdin);
    gets(nm3);

    fp1=fopen(nm1,"r");                /*  OPENING FILE IN r MODE */
    if(fp1==NULL)
    {
	printf("\n\n\n\t## CAN NOT OPEN FILE ##");
	getch();
	exit(0);
    }
    fp2=fopen(nm2,"r");                /*  OPENING FILE IN r MODE */
    if(fp2==NULL)
    {
	printf("\n\n\n\t## CAN NOT OPEN FILE ##");
	getch();
	exit(0);
    }
    fp3=fopen(nm3,"a+");               /*  OPENING FILE IN a+ MODE */
    if(fp3==NULL)
    {
	printf("\n\n\n\t## CAN NOT OPEN FILE ##");
	getch();
	exit(0);
    }
    fcloseall();                       /* CLOSING ALL FILES */

    len1=strlen(nm1);
    printf("%d",len1);
    fp1=fopen(nm1,"r");                        /*  OPENING FILE IN r MODE */
    fp3=fopen(nm3,"a+");            	       /*  OPENING FILE IN a+ MODE */
    while(f<len1 && (ch1=getc(fp1))!=EOF)        /* START OF WHILE LOOP */
    {
	 fputc(ch1,fp3);
	 f++;
    }
    if(f!=0)
    printf("\n\n\n\tFIRST FILE IS COPIED");
    len2=strlen(nm2);
    fp2=fopen(nm2,"r");                /*  OPENING FILE IN r MODE */
    while(g<len2 && (ch2=getc(fp2))!=EOF)        /* START OF WHILE LOOP */
    {
	 fputc(ch2,fp3);
	 g++;
    }
    if(g!=0)
    {
	 printf("\n\n\n\tSECOND FILE IS COPIED");
	 printf("\n\n\n\tCHECK THIRD FILE ");
    }
    fcloseall();                       /* CLOSING ALL FILES */
  }
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION line() ********               */
/*------------------------------------------------------------------------*/
  void line()
  {
    int i;                            /* DECLARATION OF LOCAL VARIABLES */
    printf("\n");
    for(i=0;i<20;i++)
    {
      printf("-");
    }
  }
/*======================= END OF FUNCTION line() ==========================*/

/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
