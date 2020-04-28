/*=========================================================================*/
/*   PROBLEM STATEMENT :: WRITE A 'C' PROGRAM TO PERFORM FILE HANDLING   */
/*=========================================================================*/

/*================== IMPORTING REQUIRED HEADER FILES ======================*/

#include<conio.h>
#include<string.h>
#include<ctype.h>
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
void main()
{
 FILE *f1;                            /* LOCAL VARIABLE DECLARATION */
 int a=0,b=1,c=0,d=0,wr=1,j=0,len,i=0;
 char ch,an,filename[20],search[20];
 do                                   /* START OF DO-WHILE LOOP */
 {
  clrscr();                           /* CLEARING THE SCREEN */
  flushall();
  printf("\t\b\b\b\b");
  printf("**********************************************************");
  printf("\n\n\n\n\t\tPROGRAM TO PERFORM FILE HANDLING  !!");
  printf("\n\n\n\n\t\b\b\b\b");
  printf("**********************************************************");
  printf("\n\n");
  printf("\n\n\t\t\b\b\bENTER THE NO OF FILES TO BE OPERATED !! \n\n\t");
  f1=fopen(filename,"w");             /* OPENING THE FILE IN w MODE */
  while((ch=getchar())!=EOF)          /* START OF WHILE LOOP */
  {

    putc(ch,f1);
    if(ch=='\t' || ch==' ')           /* CHECKING FOR NO OF WORDS */
      wr=wr+1;
    if(ch==' ')                       /* CHECKING FOR NO OF BLANKS */
      a++;
    else
    if(ch=='\n')                      /* CHECKING FOR NO OF LINES */
      b++;
    else
    if(ch=='\t')                      /* CHECKING FOR NO OF TABS */
      d++;
    else
    c++;                              /* GETTING THE NO OF CHARACTERS */

  }
  fclose(f1);                         /* CLOSING THE FILE */
  printf("\n\n\n\t\b\b\b\b");
  printf("==============================================================\n");
  printf("\n\t         ++++++++++ RESULTS ++++++++++        \n\n\t\b\b\b");
  printf("\b==============================================================");
  printf("\n\n\n\n\t  NUMBER OF CHARACTERS: %d",c);
  printf("\n\n\t  NUMBER OF LINES: %d",b);
  printf("\n\n\t  NUMBER OF BLANKS: %d",a);
  printf("\n\n\t  NUMBER OF TABS: %d",d);
  printf("\n\n\t  NUMBER OF WORDS: %d",wr);
  printf("\n\n\t\b\b\b\b");
  printf("==============================================================");
  printf("\n\n\n\t  ENTER THE WORD TO BE SEARCHED :");
  scanf("%s",search);
  printf("\n\n\n\t\b\b\b\b");
  printf("==============================================================");
  len=strlen(search);               /* FIND THE LENGTH OF THAT WORD */
  f1=fopen(filename,"r");
  while ((ch=getc(f1))!=EOF)  /* USING FOLLOWING CODE SEARCH THE WORD */
  {
    if(i==len)
    break;
    printf("\n\n%c",ch);
    if(ch!=search[i])
     i=0;
    if(ch==search[i])              /* COMPARING THE CHARACTARS */
    { i++;
    }
    j++;
  }
  if(i==0)
  {
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n\t\tSEARCH UNSUCCESSFUL.!!!");
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
  }
  else
  {
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n\t\tSEARCH SUCCESSFUL !!.\n\n");
    printf("\t\tITS POSITION IS ::%d",ftell(f1)-1);
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
  }
  fclose(f1);                          /* CLOSING THE FILE */
  printf("\n\n\n\n\n\t DO YOU WANT TO CONTINUE !!");
  printf("\n\n\n\n\t TYPE Y FOR YES OR N FOR NO :");
  scanf("%s",&an);
 }while(an=='y' || an=='Y');         /* END OF DO-WHILE LOOP */
 getch();
}
/* -----------------------------------------------------------------------*/
/*                  ****  END OF MAIN FUNCTION  ****                      */
/*------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
