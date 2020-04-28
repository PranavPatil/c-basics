/***************************************************************************/
/*	     PROGRAM:-TO DRAW THE OBJECTS USING INBUILT FUNCTIONS.         */
/***************************************************************************/

#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
void main()
{
      int gd=VGA,gm=1;            /* INITIALISE REQUIRED VARIABLES */
      int ch,x1,y1,x2,y2,rx,ry;
      initgraph(&gd,&gm,"c:\\tc\\bgi"); /* CALLING INITGRAPH FUNCTION */
      cleardevice();
      setbkcolor(BLACK);          /* SET BACKGROUND COLOUR AS BLACK */
      setcolor(15);
      do                         /* START OF DO-WHILE LOOP */
      {
	do                       /* START OF DO-WHILE LOOP */
	{
	cleardevice();
	printf("**********************************************************");
	printf("\n\n    PROGRAM TO PERFORM GRAPHICS OPERATION   !!");
	printf("\n\n");
	printf("**********************************************************");
	printf("\n\t1.\tCREATE A LINE.");
	printf("\n\t2.\tCREATE A CIRCLE.");
	printf("\n\t3.\tCREATE A RECTANGLE.");
	printf("\n\t4.\tCREATE A POLYGON.");
	printf("\n\t5.\tCREATE A ELLIPSE.");
	printf("\n\t6.\tEXIT.");
	printf("\n\n\tENTER YOUR CHOICE: ");/* ENTER THE CHOICE (FOR DRAWING) */
	scanf("%d",&ch);
	}while(ch<1 || ch>6);            /* START OF DO-WHILE LOOP */
	switch(ch)                       /* START OF SWITCH CASE */
	{
	  case 1:       /* [CASE 1] FOR DRAWING AN LINE */
		  cleardevice();
		  printf("******TO CREATE A LINE******");
		  printf("\n\nENTER THE STARTING POINTS: ");
		  scanf("%d %d",&x1,&y1);
		  printf("ENTER THE END POINTS: ");
		  scanf("%d %d",&x2,&y2);
		  cleardevice();
		  line(x1,y1,x2,y2); /* INBUILT FUNCTION TO DRAW AN RECTANGLE */
		  break;

	  case 2:
			/* [CASE 2] FOR DRAWING AN CIRCLE */
		  cleardevice();
		  printf("******TO CREATE A CIRCLE******");
		  printf("\n\nENTER THE CO-ORDINATES OF CENTER: ");
		  scanf("%d %d",&x1,&y1);
		  printf("ENTER THE RADIUS: ");
		  scanf("%d",&rx);
		  cleardevice();
		  circle(x1,y1,rx); /* INBUILT FUNCTION TO DRAW AN RECTANGLE */
		  break;

	  case 3:
			/* [CASE 3] FOR DRAWING AN RECTANGLE */
		  cleardevice();
		  printf("******TO CREATE A SQUARE******");
		  printf("\n\nENTER CO-ORDINATES X1 & Y1 : ");
		  scanf("%d %d",&x1,&y1);
		  printf("ENTER CO-ORDINATES X2 & Y2 : ");
		  scanf("%d %d",&x2,&y2);
		  cleardevice();
		  rectangle(x1,y1,x2,y2);/* INBUILT FUNCTION TO DRAW AN RECTANGLE */
		  break;

	  case 4:
			 /* [CASE 4] FOR DRAWING AN POLYGON */
		  cleardevice();
		  int v,s[80],i;
		  printf("******TO CREATE A POLYGON******");
		  printf("\n\nENTER THE NO OF SIDES FOR POLYGON :");
		  scanf("%d",&v);
		  printf("\n\nENTER THE CO-ORDINATE POINTS : ");
		  for(i=0;i<2*v;i++)
		  {
		    scanf("%d",&s[i]);
		  }
		  cleardevice();

		  drawpoly(v,s);/* INBUILT FUNCTION TO DRAW POLYGON */
		  break;

	  case 5:
			 /* [CASE 5] FOR DRAWING AN ELLIPSE */
		  x2=0;
		  y2=360;
		  cleardevice();
		  printf("******TO CREATE A ELLIPSE******");
		  printf("\n\nENTER THE CO-ORINATES X & Y: ");
		  scanf("%d %d",&x1,&y1);
		  printf("ENTER RADIUS X & Y:");
		  scanf("%d %d",&rx,&ry);
		  cleardevice();
		  ellipse(x1,y1,x2,y2,rx,ry);/* INBUILT FUNCTION TO DRAW AN ELLIPSE */
		  break;

	  case 6:
			 /* [CASE 6] FOR EXIT FROM THE PROGRAM */
		  cleardevice();
		  printf("\n\n\tTHANK YOU !!.");
		  printf("\n\n\tITS A PRODUCT BY ABC SOFTWARE CO-OPERATION PVT LTD..");
		  printf("\n\n\tALL RIGHTS RESERVED BY ABC.NEWYORK (U.S.A)..");
		  getch();
		  exit(0);
	}
	getch();
      }while(ch<6 || ch>6);         /* END OF DO-WHILE LOOP */
	closegraph();               /* CLOSE GRAPHICS MODE */
/* -----------------------------------------------------------------------*/
/*                  ****  END OF MAIN FUNCTION  ****                      */
/*------------------------------------------------------------------------*/
}
