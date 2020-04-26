/*
	author: Prof. Ashikur rahman
	last modified: April 29, 2017
	*/
#define _CRT_SECURE_NO_WARNINGS
# include "iGraphics.h"
int flag=0;
int c=0,d;
int p11=0,p12=0,p13=0,p14=0;
int p21=0,p22=0,p23=0,p24=0;
int p31=0,p32=0,p33=0,p34=0;
int p41=0,p42=0,p43=0,p44=0;
int point1=0 , point2=0 , point3=0 , point4=0 ;



void iDraw()
{
    iClear();

    int i;
    iClear();
    iSetColor(64,128,128);
    iFilledRectangle(0,0,1350,690);    /*BACKGROUND BANANO*/
    iSetColor(255,255,255);
    iFilledRectangle(200,10,675,675);
    iSetColor(0,0,0);
    for(i=245; i<=200+630; i=i+45)     /*LINE BANANO*/
    {
        iLine(i,10,i,685);
    }
    //iLine(245+45,100,245+45,685);
    iFilledCircle(250,385,10);
    // iSetColor(64,0,0);
    iFilledCircle(245,580,20);
    for(i=55; i<=200+630; i=i+45)
    {
        iLine(200,i,875,i);
    }
    iFilledRectangle(200,10,270,270);
    iSetColor(0,0,255);
    iFilledRectangle(210,20,250,250);/*BLUE PART ER GHOR(boro box,jeitay gutigula surute thake) BANANO*/
    iSetColor(0,0,0);
    iFilledRectangle(605,10,270,270);
    iSetColor(255,0,0);
    iFilledRectangle(615,20,250,250);/*RED PART ER GHOR BANANO(boro box,jeitay gutigula surute thake)*/
    iSetColor(0,0,0);
    iFilledRectangle(200,415,270,270);
    iSetColor(0,255,0);
    iFilledRectangle(210,425,250,250);/*GREEN PART ER GHOR BANANO(boro box,jeitay gutigula surute thake)*/
    iSetColor(0,0,0);
    iFilledRectangle(605,415,270,270);
    iSetColor(255,255,0);
    iFilledRectangle(615,425,250,250);/*YELLOW PART ER GHOR BANANO(boro box,jeitay gutigula surute thake)*/
    iSetColor(128,255,255);
    iFilledCircle(250,385,10);/*    iFilledRectangle(470,281,134,134);/*"HOME" ER COLOUR*/
    iSetColor(255,255,255);
    iFilledCircle(312.5,122.5,20);
    iFilledCircle(357.5,122.5,20);
    iFilledCircle(312.5,167.5,20);
    iFilledCircle(357.5,167.5,20);
    iFilledCircle(312.5,572.5,20);
    iFilledCircle(357.5,572.5,20);
    iFilledCircle(312.5,527.5,20);
    iFilledCircle(357.5,527.5,20);
    iFilledCircle(717.5,122.5,20);
    iFilledCircle(762.5,122.5,20);
    iFilledCircle(717.5,167.5,20);
    iFilledCircle(762.5,167.7,20);
    iFilledCircle(717.5,572.5,20);
    iFilledCircle(762.5,572.5,20);
    iFilledCircle(717.5,527.5,20);
    iFilledCircle(762.5,527.5,20);
    iSetColor(0,0,64);             /*blue guti*/
    iFilledCircle(312.5,122.5,15);
    iFilledCircle(357.5,122.5,15);
    iFilledCircle(312.5,167.5,15);
    iFilledCircle(357.5,167.5,15);
    iSetColor(0,64,0);             /*green guti*/
    iFilledCircle(312.5,572.5,15);// guti 1
    iFilledCircle(357.5,572.5,15);// guti 2
    iFilledCircle(312.5,527.5,15);// guti 3
    iFilledCircle(357.5,527.5,15);// guti 4
    /*iText(312.5,572.5,"1",GLUT_BITMAP_HELVETICA_18);
    iText(357.5,572.5,"2",GLUT_BITMAP_HELVETICA_18);
    iText(1050,275,"RESULT",GLUT_BITMAP_HELVETICA_18);
    iText(1050,275,"RESULT",GLUT_BITMAP_HELVETICA_18);*/
    iSetColor(64,0,0);             /*red guti*/
    iFilledCircle(717.5,122.5,15);
    iFilledCircle(762.5,122.5,15);
    iFilledCircle(717.5,167.5,15);
    iFilledCircle(762.5,167.5,15);
    iSetColor(160,160,0);          /*yellow guti*/
    iFilledCircle(717.5,572.5,15);
    iFilledCircle(762.5,572.5,15);
    iFilledCircle(717.5,527.5,15);
    iFilledCircle(762.5,527.5,15);
    iSetColor(0,0,64);
    iFilledRectangle(470,56,44,44);/*blue box starts here*/
    for(i=56; i<=236; i=i+45)
    {
        iFilledRectangle(515,i,44,44);/*blue er nijer ghor(blue printed)*/
    }
    iSetColor(64,64,0);
    iFilledRectangle(560,596,44,44);/*yellow box starts here*/
    for(i=596; i>=416; i=i-45)
    {
        iFilledRectangle(515,i,44,44);/*yellow er nijer ghor(yellow printed)*/
    }
    iSetColor(0,64,0);
    iFilledRectangle(245,371,44,44);/*green box starts here*/
    for(i=245; i<=425; i=i+45)
    {
        iFilledRectangle(i,326,44,44);/*green er nijer ghor(green printed)*/
    }
    iSetColor(64,0,0);
    for(i=605; i<=785; i=i+45)
    {
        iFilledRectangle(i,326,44,44);/*red er nijer ghor(red printed)*/
    }
    iFilledRectangle(785,281,44,44);/*red box starts here*/
    iSetColor(0,0,0);
    iText(500,342,"HOME",GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(0,0,0);
    iFilledRectangle(950,350,300,300);
    iSetColor(255,255,255);
    iText(1055,630,"DICE",GLUT_BITMAP_HELVETICA_18);
    iRectangle(1055,450,100,100);
    iSetColor(0,0,0);
    iFilledRectangle(950,150,300,150);
    iSetColor(255,255,255);
    iText(1050,275,"RESULT",GLUT_BITMAP_HELVETICA_18);
    /*iSetColor(0,0,255);
    iFilledCircle(485,30,15);*/
    if(flag==0){
    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }


    //if(c==0)
    //

        if(p11!=56 && p12==0 && p13==0 && p14==0)
        {
            if(p11==1)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,120,15);
            }
            if(p11==2)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,165,15);
            }
            if(p11==3)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,210,15);
            }
            if(p11==4)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,255,15);
            }
            if(p11==5)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(440,300,15);
            }
            if(p11==6)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(395,300,15);
            }
            if(p11==7)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(350,300,15);
            }

            if(p11==8)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(305,300,15);
            }
            if(p11==9)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(260,300,15);
            }
            if(p11==10)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(215,300,15);
            }
            if(p11==11)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(215,345,15);
            }
            if(p11==12)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(215,390,15);
            }
            if(p11==13)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(260,390,15);
            }
            if(p11==14)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(305,390,15);
            }
            if(p11==15)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(330,390,15);
            }
            if(p11==16)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(395,390,15);
            }
            if(p11==17)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(440,390,15);
            }
            if(p11==18)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,455,15);
            }
            if(p11==19)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,480,15);
            }
            if(p11==20)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,525,15);
            }
            if(p11==21)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,570,15);
            }
            if(p11==22)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,615,15);
            }
            if(p11==23)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(485,660,15);
            }
            if(p11==24)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,660,15);
            }
            if(p11==25)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,660,15);
            }
            if(p11==26)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,615,15);
            }
            if(p11==27)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,570,15);
            }
            if(p11==28)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,525,15);
            }
            if(p11==29)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,480,15);
            }
            if(p11==30)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,435,15);
            }
            if(p11==31)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(620,390,15);
            }
            if(p11==32)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(665,390,15);
            }
            if(p11==33)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(710,390,15);
            }
            if(p11==34)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(755,390,15);
            }
            if(p11==35)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(800,390,15);
            }
            if(p11==36)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(845,390,15);
            }
            if(p11==37)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(845,345,15);
            }
            if(p11==38)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(845,300,15);
            }
            if(p11==39)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(800,300,15);
            }
            if(p11==40)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(755,300,15);
            }
            if(p11==41)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(710,300,15);
            }
            if(p11==42)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(665,300,15);
            }
            if(p11==43)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(620,300,15);
            }
            if(p11==44)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,255,15);
            }
            if(p11==45)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,210,15);
            }
            if(p11==46)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,165,15);
            }
            if(p11==47)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,120,15);
            }
            if(p11==48)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,75,15);
            }
            if(p11==49)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(575,30,15);
            }
            if(p11==50)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,30,15);
            }
            if(p11==51)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,75,15);
            }
            if(p11==52)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,120,15);
            }
            if(p11==53)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,165,15);
            }
            if(p11==54)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,210,15);
            }
            if(p11==55)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,255,15);
            }
            if(p11==56)
            {if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
            }
        }

        if(p11==56 && p12!=56 && p13==0 && p14==0)
        {

            if(p12==1)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,120,15);
            }
            if(p12==2)
            {
                if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,165,15);
            }
            if(p12==3)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,210,15);
            }
            if(p12==4)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,255,15);
            }
            if(p12==5)
            {
            if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,300,15);
            }
            if(p12==6)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,300,15);
            }
            if(p12==7)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(350,300,15);
            }

            if(p12==8)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,300,15);
            }
            if(p12==9)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,300,15);
            }
            if(p12==10)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,300,15);
            }
            if(p12==11)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,345,15);
            }
            if(p12==12)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,390,15);
            }
            if(p12==13)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,390,15);
            }
            if(p12==14)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,390,15);
            }
            if(p12==15)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(330,390,15);
            }
            if(p12==16)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,390,15);
            }
            if(p12==17)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,390,15);
            }
            if(p12==18)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,455,15);
            }
            if(p12==19)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,480,15);
            }
            if(p12==20)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,525,15);
            }
            if(p12==21)
            {

        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,570,15);
            }
            if(p12==22)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,615,15);
            }
            if(p12==23)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,660,15);
            }
            if(p12==24)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,660,15);
            }
            if(p12==25)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,660,15);
            }
            if(p12==26)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,615,15);
            }
            if(p12==27)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,570,15);
            }
            if(p11==28)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,525,15);
            }
            if(p12==29)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,480,15);
            }
            if(p12==30)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,435,15);
            }
            if(p12==31)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,390,15);
            }
            if(p12==32)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,390,15);
            }
            if(p12==33)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,390,15);
            }
            if(p12==34)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,390,15);
            }
            if(p12==35)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,390,15);
            }
            if(p12==36)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,390,15);
            }
            if(p12==37)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,345,15);
            }
            if(p12==38)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,300,15);
            }
            if(p12==39)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,300,15);
            }
            if(p12==40)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,300,15);
            }
            if(p12==41)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,300,15);
            }
            if(p12==42)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,300,15);
            }
            if(p12==43)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,300,15);
            }
            if(p12==44)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,255,15);
            }
            if(p12==45)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,210,15);
            }
            if(p12==46)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,165,15);
            }
            if(p12==47)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,120,15);
            }
            if(p12==48)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,75,15);
            }
            if(p12==49)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,30,15);
            }
            if(p12==50)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,30,15);
            }
            if(p12==51)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,75,15);
            }
            if(p12==52)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,120,15);
            }
            if(p12==53)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,165,15);
            }
            if(p12==54)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,210,15);
            }
            if(p12==55)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,255,15);
            }
            if(p12==56)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
            }
        }
        if(p11==56 && p12==56 && p13!=56 && p14==0)
        {   /*iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);*/

            if(p13==1)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,120,15);
            }
            if(p13==2)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,165,15);
            }
            if(p13==3)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,210,15);
            }
            if(p13==4)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,255,15);
            }
            if(p13==5)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,300,15);
            }

            if(p13==6)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,300,15);


            }
            if(p13==7)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,300,15);
            }


            if(p13==8)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,300,15);
            }
            if(p13==9)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,300,15);
            }
            if(p13==10)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,300,15);
            }
            if(p13==11)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,345,15);
            }
            if(p13==12)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,390,15);
            }
            if(p13==13)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,390,15);
            }
            if(p13==14)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,390,15);
            }
            if(p13==15)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(330,390,15);
            }
            if(p13==16)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,390,15);
            }
            if(p13==17)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,390,15);
            }
            if(p13==18)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,455,15);
            }
            if(p13==19)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,480,15);
            }
            if(p13==20)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,525,15);
            }
            if(p13==21)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,570,15);
            }
            if(p13==22)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,615,15);
            }
            if(p13==23)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,660,15);
            }
            if(p13==24)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,660,15);
            }
            if(p13==25)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,660,15);
            }
            if(p13==26)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,615,15);
            }
            if(p13==27)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,570,15);
            }
            if(p13==28)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,525,15);
            }
            if(p13==29)
            {
        if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,480,15);
            }
            if(p13==30)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,435,15);
            }
            if(p13==31)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,390,15);
            }
            if(p13==32)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,390,15);
            }
            if(p13==33)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,390,15);
            }
            if(p13==34)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,390,15);
            }
            if(p13==35)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,390,15);
            }
            if(p13==36)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,390,15);
            }
            if(p13==37)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,345,15);
            }
            if(p13==38)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,300,15);
            }
            if(p13==39)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,300,15);
            }
            if(p13==40)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,300,15);
            }
            if(p13==41)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,300,15);
            }
            if(p13==42)
             {  if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,300,15);
            }
            if(p13==43)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,300,15);
            }
            if(p13==44)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,255,15);
            }
            if(p13==45)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,210,15);
            }
            if(p13==46)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,165,15);
            }
            if(p13==47)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,120,15);
            }
            if(p13==48)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,75,15);
            }
            if(p13==49)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,30,15);
            }
            if(p13==50)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,30,15);
            }
            if(p13==51)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,75,15);
            }
            if(p13==52)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,120,15);
            }
            if(p13==53)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,165,15);
            }
            if(p13==54)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,210,15);
            }
            if(p13==55)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,255,15);
            }
            if(p13==56)
            {   if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
            }
        }
        if(p11==56 && p12==56 && p13==56 && p14!=56)
        {
            if(p14==1)
            {     if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,120,15);
            }
            if(p14==2)
            {     if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,165,15);
            }
            if(p14==3)
            {     if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,210,15);
            }
            if(p14==4)
            {     if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,255,15);
            }
            if(p14==5)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,300,15);
            }
            if(p14==6)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,300,15);
            }
            if(p14==7)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(350,300,15);
            }

            if(p14==8)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,300,15);
            }
            if(p14==9)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,300,15);
            }
            if(p14==10)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,300,15);
            }
            if(p14==11)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,345,15);
            }
            if(p14==12)
            {     if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(215,390,15);
            }
            if(p14==13)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                 iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(260,390,15);
            }
            if(p14==14)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(305,390,15);
            }
            if(p14==15)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(330,390,15);
            }
            if(p14==16)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(395,390,15);
            }
            if(p14==17)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(440,390,15);
            }
            if(p14==18)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,455,15);
            }
            if(p14==19)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,480,15);
            }
            if(p14==20)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,525,15);
            }
            if(p14==21)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,570,15);
            }
            if(p14==22)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,615,15);
            }
            if(p14==23)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(485,660,15);
            }
            if(p14==24)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,660,15);
            }
            if(p14==25)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,660,15);
            }
            if(p14==26)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,615,15);
            }
            if(p14==27)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,570,15);
            }
            if(p14==28)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,525,15);
            }
            if(p14==29)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,480,15);
            }
            if(p14==30)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,435,15);
            }
            if(p14==31)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,390,15);
            }
            if(p14==32)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,390,15);
            }
            if(p14==33)
            {  if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,390,15);
            }
            if(p14==34)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,390,15);
            }
            if(p14==35)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,390,15);
            }
            if(p14==36)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,390,15);
            }
            if(p14==37)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,345,15);
            }
            if(p14==38)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(845,300,15);
            }
            if(p14==39)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(800,300,15);
            }
            if(p14==40)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(755,300,15);
            }
            if(p14==41)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(710,300,15);
            }
            if(p14==42)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(665,300,15);
            }
            if(p14==43)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(620,300,15);
            }
            if(p14==44)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,255,15);
            }
            if(p14==45)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,210,15);
            }
            if(p14==46)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,165,15);
            }
            if(p14==47)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,120,15);
            }
            if(p14==48)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,75,15);
            }
            if(p14==49)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(575,30,15);
            }
            if(p14==50)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,30,15);
            }
            if(p14==51)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,75,15);
            }
            if(p14==52)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,120,15);
            }
            if(p14==53)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,165,15);
            }
            if(p14==54)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,210,15);
            }
            if(p14==55)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,255,15);
            }
            if(p14==56)
            {    if(d==1){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);

    }
   else if(d==2){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
    }
     else if(d==3){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);

    }
  else   if(d==4){
        iSetColor(255,0,0);
        iFilledCircle(1120,520,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1100,520,5);
    }
    else if(d==5){
        iSetColor(255,0,0);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,480,5);
        iFilledCircle(1120,520,5);
        iFilledCircle(1080,480,5);
        iFilledCircle(1080,520,5);
    }
    else if(d==6){
        iSetColor(255,0,0);
        iFilledCircle(1080,500,5);
        iFilledCircle(1100,500,5);
        iFilledCircle(1120,500,5);
        iFilledCircle(1080,520,5);
        iFilledCircle(1100,520,5);
        iFilledCircle(1120,520,5);
    }
                iSetColor(0,0,255);
                iFilledCircle(530,315,15);
                iSetColor(0,0,255);
                iFilledCircle(530,330,15);
                iSetColor(0,0,255);
                iFilledCircle(530,300,15);
                iSetColor(0,0,255);
                iFilledCircle(530,360,15);
            }
        }




        if(p21!=56 && p22==0 && p23==0 && p24==0)
        {

            if(p21==1)
            {
                iSetColor(0,255,0);
                iFilledCircle(305,390,15);
            }
            if(p21==2)
            {
                iSetColor(0,255,0);
                iFilledCircle(330,390,15);
            }
            if(p21==3)
            {
                iSetColor(0,255,0);
                iFilledCircle(395,390,15);
            }
            if(p21==4)
            {
                iSetColor(0,255,0);
                iFilledCircle(440,255,15);
            }
            if(p21==5)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,455,15);
            }
            if(p21==6)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,480,15);
            }
            if(p21==7)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,525,15);
            }

            if(p21==8)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,570,15);
            }
            if(p21==9)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,615,15);
            }
            if(p21==10)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,660,15);
            }
            if(p21==11)
            {
                iSetColor(0,255,0);
                iFilledCircle(530,660,15);
            }
            if(p21==12)
            {
                iSetColor(0,255,255);
                iFilledCircle(575,660,15);
            }
            if(p21==13)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,615,15);
            }
            if(p21==14)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,570,15);
            }
            if(p21==15)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,525,15);
            }
            if(p21==16)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,480,15);
            }
            if(p21==17)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,435,15);
            }
            if(p21==18)
            {
                iSetColor(0,255,0);
                iFilledCircle(620,390,15);
            }
            if(p21==19)
            {
                iSetColor(0,255,0);
                iFilledCircle(665,390,15);
            }
            if(p21==20)
            {
                iSetColor(0,255,0);
                iFilledCircle(710,390,15);
            }
            if(p21==21)
            {
                iSetColor(0,255,0);
                iFilledCircle(755,390,15);
            }
            if(p21==22)
            {
                iSetColor(0,255,0);
                iFilledCircle(800,390,15);
            }
            if(p21==23)
            {
                iSetColor(0,255,0);
                iFilledCircle(845,390,15);
            }
            if(p21==24)
            {
                iSetColor(0,255,0);
                iFilledCircle(845,345,15);
            }
            if(p21==25)
            {
                iSetColor(0,255,0);
                iFilledCircle(845,300,15);
            }
            if(p21==26)
            {
                iSetColor(0,255,0);
                iFilledCircle(800,300,15);
            }
            if(p21==27)
            {
                iSetColor(0,255,0);
                iFilledCircle(755,300,15);
            }
            if(p21==28)
            {
                iSetColor(0,255,0);
                iFilledCircle(710,300,15);
            }
            if(p21==29)
            {
                iSetColor(0,255,0);
                iFilledCircle(665,300,15);
            }
            if(p21==30)
            {
                iSetColor(0,255,0);
                iFilledCircle(620,300,15);
            }
            if(p21==31)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,255,15);
            }
            if(p21==32)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,210,15);
            }
            if(p21==33)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,165,15);
            }
            if(p21==34)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,120,15);
            }
            if(p21==35)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,75,15);
            }
            if(p21==36)
            {
                iSetColor(0,255,0);
                iFilledCircle(575,30,15);
            }
            if(p21==37)
            {
                iSetColor(0,255,0);
                iFilledCircle(530,30,15);
            }
            if(p21==38)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,30,15);
            }
            if(p21==39)
            {
                iSetColor(0,255,0);
                iFilledCircle(484,75,15);
            }
            if(p21==40)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,120,15);
            }
            if(p21==41)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,165,15);
            }
            if(p21==42)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,210,15);
            }
            if(p21==43)
            {
                iSetColor(0,255,0);
                iFilledCircle(485,255,15);
            }
            if(p21==44)
            {
                iSetColor(0,255,0);
                iFilledCircle(440,300,15);
            }
            if(p21==45)
            {
                iSetColor(0,255,0);
                iFilledCircle(395,300,15);
            }
            if(p21==46)
            {
                iSetColor(0,255,0);
                iFilledCircle(350,300,15);
            }
            if(p21==47)
            {
                iSetColor(0,255,0);
                iFilledCircle(305,300,15);
            }
            if(p21==48)
            {
                iSetColor(0,255,0);
                iFilledCircle(260,300,15);
            }
            if(p21==49)
            {
                iSetColor(0,255,0);
                iFilledCircle(215,300,15);
            }
            if(p21==50)
            {
                iSetColor(0,255,0);
                iFilledCircle(215,345,15);
            }
            if(p21==51)
            {
                iSetColor(0,255,0);
                iFilledCircle(260,345,15);
            }
            if(p21==52)
            {
                iSetColor(0,255,0);
                iFilledCircle(305,345,15);
            }
            if(p21==53)
            {
                iSetColor(0,255,0);
                iFilledCircle(350,345,15);
            }
            if(p21==54)
            {
                iSetColor(0,255,0);
                iFilledCircle(395,345,15);
            }
            if(p21==55)
            {
                iSetColor(0,255,0);
                iFilledCircle(440,345,15);
            }
            if(p21==56)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
            }
        }

        if(p21==56 && p22!=56 && p23==0 && p24==0)
        {
            if(p22==1)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(305,390,15);
            }
            if(p22==2)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(330,390,15);
            }
            if(p22==3)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(395,390,15);
            }
            if(p22==4)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(440,255,15);
            }
            if(p22==5)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,455,15);
            }
            if(p22==6)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,480,15);
            }
            if(p22==7)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,525,15);
            }

            if(p22==8)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,570,15);
            }
            if(p22==9)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,615,15);
            }
            if(p22==10)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,660,15);
            }
            if(p22==11)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(530,660,15);
            }
            if(p22==12)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,255);
                iFilledCircle(575,660,15);
            }
            if(p22==13)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,615,15);
            }
            if(p22==14)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,570,15);
            }
            if(p22==15)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,525,15);
            }
            if(p22==16)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,480,15);
            }
            if(p22==17)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,435,15);
            }
            if(p22==18)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(620,390,15);
            }
            if(p22==19)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(665,390,15);
            }
            if(p22==20)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(710,390,15);
            }
            if(p22==21)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(755,390,15);
            }
            if(p22==22)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(800,390,15);
            }
            if(p22==23)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(845,390,15);
            }
            if(p22==24)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(845,345,15);
            }
            if(p22==25)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(845,300,15);
            }
            if(p22==26)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(800,300,15);
            }
            if(p22==27)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(755,300,15);
            }
            if(p22==28)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(710,300,15);
            }
            if(p22==29)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(665,300,15);
            }
            if(p22==30)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(620,300,15);
            }
            if(p22==31)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,255,15);
            }
            if(p22==32)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,210,15);
            }
            if(p22==33)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,165,15);
            }
            if(p22==34)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,120,15);
            }
            if(p22==35)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,75,15);
            }
            if(p22==36)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(575,30,15);
            }
            if(p22==37)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(530,30,15);
            }
            if(p22==38)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,30,15);
            }
            if(p22==39)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(484,75,15);
            }
            if(p22==40)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,120,15);
            }
            if(p22==41)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,165,15);
            }
            if(p22==42)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,210,15);
            }
            if(p22==43)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(485,255,15);
            }
            if(p22==44)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(440,300,15);
            }
            if(p22==45)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(395,300,15);
            }
            if(p22==46)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(350,300,15);
            }
            if(p22==47)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(305,300,15);
            }
            if(p22==48)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(260,300,15);
            }
            if(p22==49)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(215,300,15);
            }
            if(p22==50)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(215,345,15);
            }
            if(p22==51)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(260,345,15);
            }
            if(p22==52)
            {

                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(305,345,15);
            }
            if(p22==53)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(350,345,15);
            }
            if(p22==54)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(395,345,15);
            }
            if(p22==55)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(440,345,15);
            }
            if(p22==56)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
            }
        }
        if(p21==56 && p22==56 && p23!=56 && p24==0)
        {
            if(p23==1)
            {
                iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(305,390,15);
            }
            if(p23==2)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(330,390,15);
            }
            if(p23==3)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(395,390,15);
            }
            if(p23==4)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(440,255,15);
            }
            if(p23==5)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,455,15);
            }
            if(p23==6)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,480,15);
            }
            if(p23==7)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,525,15);
            }

            if(p23==8)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,570,15);
            }
            if(p23==9)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,615,15);
            }
            if(p23==10)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,660,15);
            }
            if(p23==11)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(530,660,15);
            }
            if(p23==12)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,255);
                iFilledCircle(575,660,15);
            }
            if(p23==13)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,615,15);
            }
            if(p23==14)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,570,15);
            }
            if(p23==15)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,525,15);
            }
            if(p23==16)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,480,15);
            }
            if(p23==17)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,435,15);
            }
            if(p23==18)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(620,390,15);
            }
            if(p23==19)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(665,390,15);
            }
            if(p23==20)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(710,390,15);
            }
            if(p23==21)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(755,390,15);
            }
            if(p23==22)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(800,390,15);
            }
            if(p23==23)
            {iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(845,390,15);
            }
            if(p23==24)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(845,345,15);
            }
            if(p23==25)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(845,300,15);
            }
            if(p23==26)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(800,300,15);
            }
            if(p23==27)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(755,300,15);
            }
            if(p23==28)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(710,300,15);
            }
            if(p23==29)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(665,300,15);
            }
            if(p23==30)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(620,300,15);
            }
            if(p23==31)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,255,15);
            }
            if(p23==32)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,210,15);
            }
            if(p23==33)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,165,15);
            }
            if(p23==34)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,120,15);
            }
            if(p23==35)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,75,15);
            }
            if(p23==36)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(575,30,15);
            }
            if(p23==37)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(530,30,15);
            }
            if(p23==38)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,30,15);
            }
            if(p23==39)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(484,75,15);
            }
            if(p23==40)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,120,15);
            }
            if(p23==41)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,165,15);
            }
            if(p23==42)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,210,15);
            }
            if(p23==43)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(485,255,15);
            }
            if(p23==44)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(440,300,15);
            }
            if(p23==45)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(395,300,15);
            }
            if(p23==46)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(350,300,15);
            }
            if(p23==47)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(305,300,15);
            }
            if(p23==48)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(260,300,15);
            }
            if(p23==49)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(215,300,15);
            }
            if(p23==50)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(215,345,15);
            }
            if(p23==51)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(260,345,15);
            }
            if(p23==52)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(305,345,15);
            }
            if(p23==53)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(350,345,15);
            }
            if(p23==54)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(395,345,15);
            }
            if(p23==55)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(440,345,15);
            }
            if(p23==56)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
            }
        }
        if(p21==56 && p22==56 && p23==56 && p24!=56)
        {
            if(p24==1)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(305,390,15);
            }
            if(p24==2)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(330,390,15);
            }
            if(p24==3)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(395,390,15);
            }
            if(p24==4)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(440,255,15);
            }
            if(p24==5)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,455,15);
            }
            if(p24==6)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,480,15);
            }
            if(p24==7)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,525,15);
            }

            if(p24==8)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,570,15);
            }
            if(p24==9)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,615,15);
            }
            if(p24==10)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,660,15);
            }
            if(p24==11)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(530,660,15);
            }
            if(p24==12)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,255);
                iFilledCircle(575,660,15);
            }
            if(p24==13)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,615,15);
            }
            if(p24==14)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,570,15);
            }
            if(p24==15)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,525,15);
            }
            if(p24==16)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,480,15);
            }
            if(p24==17)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,435,15);
            }
            if(p24==18)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(620,390,15);
            }
            if(p24==19)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(665,390,15);
            }
            if(p24==20)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(710,390,15);
            }
            if(p24==21)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(755,390,15);
            }
            if(p24==22)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(800,390,15);
            }
            if(p24==23)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(845,390,15);
            }
            if(p24==24)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(845,345,15);
            }
            if(p24==25)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(845,300,15);
            }
            if(p24==26)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(800,300,15);
            }
            if(p24==27)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(755,300,15);
            }
            if(p24==28)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(710,300,15);
            }
            if(p24==29)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(665,300,15);
            }
            if(p24==30)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(620,300,15);
            }
            if(p24==31)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,255,15);
            }
            if(p24==32)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,210,15);
            }
            if(p24==33)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,165,15);
            }
            if(p24==34)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,120,15);
            }
            if(p24==35)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,75,15);
            }
            if(p24==36)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(575,30,15);
            }
            if(p24==37)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(530,30,15);
            }
            if(p24==38)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,30,15);
            }
            if(p24==39)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(484,75,15);
            }
            if(p24==40)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,120,15);
            }
            if(p24==41)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,165,15);
            }
            if(p24==42)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,210,15);
            }
            if(p24==43)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(485,255,15);
            }
            if(p24==44)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(440,300,15);
            }
            if(p24==45)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(395,300,15);
            }
            if(p24==46)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(350,300,15);
            }
            if(p24==47)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(305,300,15);
            }
            if(p24==48)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(260,300,15);
            }
            if(p24==49)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(215,300,15);
            }
            if(p24==50)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(215,345,15);
            }
            if(p24==51)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(260,345,15);
            }
            if(p24==52)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(305,345,15);
            }
            if(p24==53)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(350,345,15);
            }
            if(p24==54)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(395,345,15);
            }
            if(p24==55)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(440,345,15);
            }
            if(p24==56)
            {   iSetColor(0,255,0);
                iFilledCircle(495,345,15);
                iSetColor(0,255,0);
                iFilledCircle(495,360,15);
                iSetColor(0,255,0);
                iFilledCircle(495,380,15);
                iSetColor(0,255,0);
                iFilledCircle(495,370,15);
            }
        }
        if(p31!=56 && p32==0 && p33==0 && p34==0)
        {
            if(p31==1)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,570,15);
            }
            if(p31==2)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,525,15);
            }
            if(p31==3)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,480,15);
            }
            if(p31==4)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,435,15);
            }
            if(p31==5)
            {
                iSetColor(255,255,0);
                iFilledCircle(620,390,15);
            }
            if(p31==6)
            {
                iSetColor(255,255,0);
                iFilledCircle(665,390,15);
            }
            if(p31==7)
            {
                iSetColor(255,255,0);
                iFilledCircle(710,390,15);
            }

            if(p31==8)
            {
                iSetColor(255,255,0);
                iFilledCircle(755,390,15);
            }
            if(p31==9)
            {
                iSetColor(255,255,0);
                iFilledCircle(800,390,15);
            }
            if(p31==10)
            {
                iSetColor(255,255,0);
                iFilledCircle(845,390,15);
            }
            if(p31==11)
            {
                iSetColor(255,255,0);
                iFilledCircle(845,345,15);
            }
            if(p31==12)
            {
                iSetColor(255,255,0);
                iFilledCircle(845,300,15);
            }
            if(p31==13)
            {
                iSetColor(255,255,0);
                iFilledCircle(800,300,15);
            }
            if(p31==14)
            {
                iSetColor(255,255,0);
                iFilledCircle(755,300,15);
            }
            if(p31==15)
            {
                iSetColor(255,255,0);
                iFilledCircle(710,300,15);
            }
            if(p31==16)
            {
                iSetColor(255,255,0);
                iFilledCircle(665,300,15);
            }
            if(p31==17)
            {
                iSetColor(255,255,0);
                iFilledCircle(620,300,15);
            }
            if(p31==18)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,255,15);
            }
            if(p31==19)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,210,15);
            }
            if(p31==20)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,165,15);
            }
            if(p31==21)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,120,15);
            }
            if(p31==22)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,75,15);
            }
            if(p31==23)
            {
                iSetColor(255,255,0);
                iFilledCircle(575,30,15);
            }
            if(p31==24)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,30,15);
            }
            if(p31==25)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,30,15);
            }
            if(p31==26)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,75,15);
            }
            if(p31==27)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,120,15);
            }
            if(p31==28)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,165,15);
            }
            if(p31==29)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,210,15);
            }
            if(p31==30)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,255,15);
            }
            if(p31==31)
            {
                iSetColor(255,255,0);
                iFilledCircle(440,300,15);
            }
            if(p31==32)
            {
                iSetColor(255,255,0);
                iFilledCircle(395,300,15);
            }
            if(p31==33)
            {
                iSetColor(255,255,0);
                iFilledCircle(350,300,15);
            }
            if(p31==34)
            {
                iSetColor(255,255,0);
                iFilledCircle(305,300,15);
            }
            if(p31==35)
            {
                iSetColor(255,255,0);
                iFilledCircle(260,300,15);
            }
            if(p31==36)
            {
                iSetColor(255,255,0);
                iFilledCircle(215,300,15);
            }
            if(p31==37)
            {
                iSetColor(255,255,0);
                iFilledCircle(215,345,15);
            }
            if(p31==38)
            {
                iSetColor(255,255,0);
                iFilledCircle(215,390,15);
            }
            if(p31==39)
            {
                iSetColor(255,255,0);
                iFilledCircle(260,390,15);
            }
            if(p31==40)
            {
                iSetColor(255,255,0);
                iFilledCircle(305,390,15);
            }
            if(p31==41)
            {
                iSetColor(255,255,0);
                iFilledCircle(350,390,15);
            }
            if(p31==42)
            {
                iSetColor(255,255,0);
                iFilledCircle(395,390,15);
            }
            if(p31==43)
            {
                iSetColor(255,255,0);
                iFilledCircle(440,390,15);
            }
            if(p31==44)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,455,15);
            }
            if(p31==45)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,480,15);
            }
            if(p31==46)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,525,15);
            }
            if(p31==47)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,570,15);
            }
            if(p31==48)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,615,15);
            }
            if(p31==49)
            {
                iSetColor(255,255,0);
                iFilledCircle(485,660,15);
            }
            if(p31==50)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,660,15);
            }
            if(p31==51)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,615,15);
            }
            if(p31==52)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,570,15);
            }
            if(p31==53)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,525,15);
            }
            if(p31==54)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,480,15);
            }
            if(p31==55)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,435,15);
            }
            if(p31==56)
            {
                iSetColor(255,255,0);
                iFilledCircle(530,390,15);
            }
        }
         if(p31==56 && p32!=56 && p33==0 && p34==0)
        {
            if(p32==1)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,570,15);
            }
            if(p32==2)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,525,15);
            }
            if(p32==3)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,480,15);
            }
            if(p32==4)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,435,15);
            }
            if(p32==5)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(620,390,15);
            }
            if(p32==6)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(665,390,15);
            }
            if(p32==7)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(710,390,15);
            }

            if(p32==8)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(755,390,15);
            }
            if(p32==9)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(800,390,15);
            }
            if(p32==10)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(845,390,15);
            }
            if(p32==11)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(845,345,15);
            }
            if(p32==12)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(845,300,15);
            }
            if(p32==13)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(800,300,15);
            }
            if(p32==14)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(755,300,15);
            }
            if(p32==15)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(710,300,15);
            }
            if(p32==16)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(665,300,15);
            }
            if(p32==17)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(620,300,15);
            }
            if(p32==18)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,255,15);
            }
            if(p32==19)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,210,15);
            }
            if(p32==20)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,165,15);
            }
            if(p32==21)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,120,15);
            }
            if(p32==22)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,75,15);
            }
            if(p32==23)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(575,30,15);
            }
            if(p32==24)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,30,15);
            }
            if(p32==25)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,30,15);
            }
            if(p32==26)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,75,15);
            }
            if(p32==27)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,120,15);
            }
            if(p32==28)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,165,15);
            }
            if(p32==29)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,210,15);
            }
            if(p32==30)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,255,15);
            }
            if(p32==31)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(440,300,15);
            }
            if(p32==32)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(395,300,15);
            }
            if(p32==33)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(350,300,15);
            }
            if(p32==34)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(305,300,15);
            }
            if(p32==35)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(260,300,15);
            }
            if(p32==36)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(215,300,15);
            }
            if(p32==37)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(215,345,15);
            }
            if(p32==38)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(215,390,15);
            }
            if(p32==39)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(260,390,15);
            }
            if(p32==40)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(305,390,15);
            }
            if(p32==41)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(350,390,15);
            }
            if(p32==42)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(395,390,15);
            }
            if(p32==43)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(440,390,15);
            }
            if(p32==44)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,455,15);
            }
            if(p32==45)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,480,15);
            }
            if(p32==46)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,525,15);
            }
            if(p32==47)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,570,15);
            }
            if(p32==48)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,615,15);
            }
            if(p32==49)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(485,660,15);
            }
            if(p32==50)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,660,15);
            }
            if(p32==51)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,615,15);
            }
            if(p32==52)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,570,15);
            }
            if(p32==53)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,525,15);
            }
            if(p32==54)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,480,15);
            }
            if(p32==55)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,435,15);
            }
            if(p32==56)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
            }
        }
         if(p31==56 && p32==56 && p33!=56 && p34==0)
        {
            if(p33==1)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,570,15);
            }
            if(p33==2)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,525,15);
            }
            if(p33==3)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,480,15);
            }
            if(p33==4)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,435,15);
            }
            if(p33==5)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(620,390,15);
            }
            if(p33==6)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(665,390,15);
            }
            if(p33==7)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(710,390,15);
            }

            if(p33==8)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(755,390,15);
            }
            if(p33==9)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(800,390,15);
            }
            if(p33==10)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(845,390,15);
            }
            if(p33==11)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(845,345,15);
            }
            if(p33==12)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(845,300,15);
            }
            if(p33==13)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(800,300,15);
            }
            if(p33==14)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(755,300,15);
            }
            if(p33==15)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(710,300,15);
            }
            if(p33==16)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(665,300,15);
            }
            if(p33==17)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(620,300,15);
            }
            if(p33==18)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,255,15);
            }
            if(p33==19)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,210,15);
            }
            if(p33==20)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,165,15);
            }
            if(p33==21)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,120,15);
            }
            if(p33==22)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,75,15);
            }
            if(p33==23)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(575,30,15);
            }
            if(p33==24)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,30,15);
            }
            if(p33==25)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,30,15);
            }
            if(p33==26)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,75,15);
            }
            if(p33==27)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,120,15);
            }
            if(p33==28)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,165,15);
            }
            if(p33==29)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,210,15);
            }
            if(p33==30)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,255,15);
            }
            if(p33==31)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(440,300,15);
            }
            if(p33==32)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(395,300,15);
            }
            if(p33==33)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(350,300,15);
            }
            if(p33==34)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(305,300,15);
            }
            if(p33==35)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(260,300,15);
            }
            if(p33==36)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(215,300,15);
            }
            if(p33==37)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(215,345,15);
            }
            if(p33==38)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(215,390,15);
            }
            if(p33==39)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(260,390,15);
            }
            if(p33==40)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(305,390,15);
            }
            if(p33==41)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(350,390,15);
            }
            if(p33==42)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(395,390,15);
            }
            if(p33==43)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(440,390,15);
            }
            if(p33==44)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,455,15);
            }
            if(p33==45)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,480,15);
            }
            if(p33==46)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,525,15);
            }
            if(p33==47)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,570,15);
            }
            if(p33==48)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,615,15);
            }
            if(p33==49)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(485,660,15);
            }
            if(p33==50)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,660,15);
            }
            if(p33==51)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,615,15);
            }
            if(p33==52)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,570,15);
            }
            if(p33==53)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,525,15);
            }
            if(p33==54)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,480,15);
            }
            if(p33==55)
            {iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,435,15);
            }
            if(p33==56)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
            }
        }
         if(p31==56 && p32==56 && p33==56 && p34!=56)
        {
            if(p34==1)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,570,15);
            }
            if(p34==2)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,525,15);
            }
            if(p34==3)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,480,15);
            }
            if(p34==4)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,435,15);
            }
            if(p34==5)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(620,390,15);
            }
            if(p34==6)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(665,390,15);
            }
            if(p34==7)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(710,390,15);
            }

            if(p34==8)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(755,390,15);
            }
            if(p34==9)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(800,390,15);
            }
            if(p34==10)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(845,390,15);
            }
            if(p34==11)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(845,345,15);
            }
            if(p34==12)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(845,300,15);
            }
            if(p34==13)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(800,300,15);
            }
            if(p34==14)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(755,300,15);
            }
            if(p34==15)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(710,300,15);
            }
            if(p34==16)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(665,300,15);
            }
            if(p34==17)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(620,300,15);
            }
            if(p34==18)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,255,15);
            }
            if(p34==19)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,210,15);
            }
            if(p34==20)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,165,15);
            }
            if(p34==21)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,120,15);
            }
            if(p34==22)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,75,15);
            }
            if(p34==23)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(575,30,15);
            }
            if(p34==24)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,30,15);
            }
            if(p34==25)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,30,15);
            }
            if(p34==26)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,75,15);
            }
            if(p34==27)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,120,15);
            }
            if(p34==28)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,165,15);
            }
            if(p34==29)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,210,15);
            }
            if(p34==30)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,255,15);
            }
            if(p34==31)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(440,300,15);
            }
            if(p34==32)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(395,300,15);
            }
            if(p34==33)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(350,300,15);
            }
            if(p34==34)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(305,300,15);
            }
            if(p34==35)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(260,300,15);
            }
            if(p34==36)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(215,300,15);
            }
            if(p34==37)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(215,345,15);
            }
            if(p34==38)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(215,390,15);
            }
            if(p34==39)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(260,390,15);
            }
            if(p34==40)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(305,390,15);
            }
            if(p34==41)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(350,390,15);
            }
            if(p34==42)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(395,390,15);
            }
            if(p34==43)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(440,390,15);
            }
            if(p34==44)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,455,15);
            }
            if(p34==45)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,480,15);
            }
            if(p34==46)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,525,15);
            }
            if(p34==47)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,570,15);
            }
            if(p34==48)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,615,15);
            }
            if(p34==49)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(485,660,15);
            }
            if(p34==50)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,660,15);
            }
            if(p34==51)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,615,15);
            }
            if(p34==52)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,570,15);
            }
            if(p34==53)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,525,15);
            }
            if(p34==54)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,480,15);
            }
            if(p34==55)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,435,15);
            }
            if(p34==56)
            {   iSetColor(255,255,0);
                iFilledCircle(530,390,15);
                iSetColor(255,255,0);
                iFilledCircle(530,400,15);
                iSetColor(255,255,0);
                iFilledCircle(530,410,15);
                iSetColor(255,255,0);
                iFilledCircle(530,390,15);
            }
        }
         if(p41!=56 && p42==0 && p43==0 && p44==0)
        {
            if(p41==1)
            {
                iSetColor(255,0,0);
                iFilledCircle(755,300,15);
            }
            if(p41==2)
            {
                iSetColor(255,0,0);
                iFilledCircle(710,300,15);
            }
            if(p41==3)
            {
                iSetColor(255,0,0);
                iFilledCircle(665,300,15);
            }
            if(p41==4)
            {
                iSetColor(255,0,0);
                iFilledCircle(620,300,15);
            }
            if(p41==5)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,255,15);
            }
            if(p41==6)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,210,15);
            }
            if(p41==7)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,165,15);
            }

            if(p41==8)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,120,15);
            }
            if(p41==9)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,75,15);
            }
            if(p41==10)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,30,15);
            }
            if(p41==11)
            {
                iSetColor(255,0,0);
                iFilledCircle(530,30,15);
            }
            if(p41==12)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,30,15);
            }
            if(p41==13)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,75,15);
            }
            if(p41==14)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,120,15);
            }
            if(p41==15)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,165,15);
            }
            if(p41==16)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,210,15);
            }
            if(p41==17)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,255,15);
            }
            if(p41==18)
            {
                iSetColor(255,0,0);
                iFilledCircle(440,300,15);
            }
            if(p41==19)
            {
                iSetColor(255,0,0);
                iFilledCircle(395,300,15);
            }
            if(p41==20)
            {
                iSetColor(255,0,0);
                iFilledCircle(350,300,15);
            }
            if(p41==21)
            {
                iSetColor(255,0,0);
                iFilledCircle(305,300,15);
            }
            if(p41==22)
            {
                iSetColor(255,0,0);
                iFilledCircle(260,300,15);
            }
            if(p41==23)
            {
                iSetColor(255,0,0);
                iFilledCircle(215,300,15);
            }
            if(p41==24)
            {
                iSetColor(255,0,0);
                iFilledCircle(215,345,15);
            }
            if(p41==25)
            {
                iSetColor(255,0,0);
                iFilledCircle(215,390,15);
            }
            if(p41==26)
            {
                iSetColor(255,0,0);
                iFilledCircle(260,390,15);
            }
            if(p41==27)
            {
                iSetColor(255,0,0);
                iFilledCircle(305,390,15);
            }
            if(p41==28)
            {
                iSetColor(255,0,0);
                iFilledCircle(350,390,15);
            }
            if(p41==29)
            {
                iSetColor(255,0,0);
                iFilledCircle(395,390,15);
            }
            if(p41==30)
            {
                iSetColor(255,0,0);
                iFilledCircle(440,390,15);
            }
            if(p41==31)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,455,15);
            }
            if(p41==32)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,480,15);
            }
            if(p41==33)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,525,15);
            }
            if(p41==34)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,570,15);
            }
            if(p41==35)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,615,15);
            }
            if(p41==36)
            {
                iSetColor(255,0,0);
                iFilledCircle(485,660,15);
            }
            if(p41==37)
            {
                iSetColor(255,0,0);
                iFilledCircle(530,660,15);
            }
            if(p41==38)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,660,15);
            }
            if(p41==39)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,615,15);
            }
            if(p41==40)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,570,15);
            }
            if(p41==41)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,525,15);
            }
            if(p41==42)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,480,15);
            }
            if(p41==43)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,435,15);
            }
            if(p41==44)
            {
                iSetColor(255,0,0);
                iFilledCircle(620,390,15);
            }
            if(p41==45)
            {
                iSetColor(255,0,0);
                iFilledCircle(665,390,15);
            }
            if(p41==46)
            {
                iSetColor(255,0,0);
                iFilledCircle(710,390,15);
            }
            if(p41==47)
            {
                iSetColor(255,0,0);
                iFilledCircle(755,390,15);
            }
            if(p41==48)
            {
                iSetColor(255,0,0);
                iFilledCircle(800,390,15);
            }
            if(p41==49)
            {
                iSetColor(255,0,0);
                iFilledCircle(845,390,15);
            }
            if(p41==50)
            {
                iSetColor(255,0,0);
                iFilledCircle(845,345,15);
            }
            if(p41==51)
            {
                iSetColor(255,0,0);
                iFilledCircle(800,300,15);
            }
            if(p41==52)
            {
                iSetColor(255,0,0);
                iFilledCircle(755,345,15);
            }
            if(p41==53)
            {
                iSetColor(255,0,0);
                iFilledCircle(710,345,15);
            }
            if(p41==54)
            {
                iSetColor(255,0,0);
                iFilledCircle(665,345,15);
            }
            if(p41==55)
            {
                iSetColor(255,0,0);
                iFilledCircle(620,345,15);
            }
            if(p41==56)
            {
                iSetColor(255,0,0);
                iFilledCircle(575,390,15);
            }
        }
        if(p41==56 && p42!=56 && p43==0 && p44==0)
        {
            if(p42==1)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(755,300,15);
            }
            if(p42==2)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(710,300,15);
            }
            if(p42==3)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(665,300,15);
            }
            if(p42==4)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(620,300,15);
            }
            if(p42==5)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,255,15);
            }
            if(p42==6)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,210,15);
            }
            if(p42==7)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,165,15);
            }

            if(p42==8)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,120,15);
            }
            if(p42==9)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,75,15);
            }
            if(p42==10)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,30,15);
            }
            if(p42==11)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(530,30,15);
            }
            if(p42==12)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,30,15);
            }
            if(p42==13)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,75,15);
            }
            if(p42==14)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,120,15);
            }
            if(p42==15)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,165,15);
            }
            if(p42==16)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,210,15);
            }
            if(p42==17)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,255,15);
            }
            if(p42==18)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(440,300,15);
            }
            if(p42==19)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(395,300,15);
            }
            if(p42==20)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(350,300,15);
            }
            if(p42==21)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(305,300,15);
            }
            if(p42==22)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(260,300,15);
            }
            if(p42==23)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(215,300,15);
            }
            if(p42==24)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(215,345,15);
            }
            if(p42==25)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(215,390,15);
            }
            if(p42==26)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(260,390,15);
            }
            if(p42==27)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(305,390,15);
            }
            if(p42==28)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(350,390,15);
            }
            if(p42==29)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(395,390,15);
            }
            if(p42==30)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(440,390,15);
            }
            if(p42==31)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,455,15);
            }
            if(p42==32)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,480,15);
            }
            if(p42==33)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,525,15);
            }
            if(p42==34)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,570,15);
            }
            if(p42==35)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,615,15);
            }
            if(p42==36)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(485,660,15);
            }
            if(p42==37)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(530,660,15);
            }
            if(p42==38)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,660,15);
            }
            if(p42==39)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,615,15);
            }
            if(p42==40)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,570,15);
            }
            if(p42==41)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,525,15);
            }
            if(p42==42)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,480,15);
            }
            if(p42==43)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,435,15);
            }
            if(p42==44)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(620,390,15);
            }
            if(p42==45)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(665,390,15);
            }
            if(p42==46)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(710,390,15);
            }
            if(p42==47)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(755,390,15);
            }
            if(p42==48)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(800,390,15);
            }
            if(p42==49)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(845,390,15);
            }
            if(p42==50)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(845,345,15);
            }
            if(p42==51)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(800,300,15);
            }
            if(p42==52)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(755,345,15);
            }
            if(p42==53)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(710,345,15);
            }
            if(p42==54)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(665,345,15);
            }
            if(p42==55)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(620,345,15);
            }
            if(p42==56)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
            }


        }
        if(p41==56 && p42==56 && p43!=56 && p44==0)
        {
            if(p43==1)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(755,300,15);
            }
            if(p43==2)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(710,300,15);
            }
            if(p43==3)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(665,300,15);
            }
            if(p43==4)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(620,300,15);
            }
            if(p43==5)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,255,15);
            }
            if(p43==6)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,210,15);
            }
            if(p43==7)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,165,15);
            }

            if(p43==8)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,120,15);
            }
            if(p43==9)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,75,15);
            }
            if(p43==10)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,30,15);
            }
            if(p43==11)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(530,30,15);
            }
            if(p43==12)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,30,15);
            }
            if(p43==13)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,75,15);
            }
            if(p43==14)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,120,15);
            }
            if(p43==15)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,165,15);
            }
            if(p43==16)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,210,15);
            }
            if(p43==17)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,255,15);
            }
            if(p43==18)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(440,300,15);
            }
            if(p43==19)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(395,300,15);
            }
            if(p43==20)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(350,300,15);
            }
            if(p43==21)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(305,300,15);
            }
            if(p43==22)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(260,300,15);
            }
            if(p43==23)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(215,300,15);
            }
            if(p43==24)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(215,345,15);
            }
            if(p43==25)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(215,390,15);
            }
            if(p43==26)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(260,390,15);
            }
            if(p43==27)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(305,390,15);
            }
            if(p43==28)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(350,390,15);
            }
            if(p43==29)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(395,390,15);
            }
            if(p43==30)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(440,390,15);
            }
            if(p43==31)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,455,15);
            }
            if(p43==32)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,480,15);
            }
            if(p43==33)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,525,15);
            }
            if(p43==34)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,570,15);
            }
            if(p43==35)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,615,15);
            }
            if(p43==36)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(485,660,15);
            }
            if(p43==37)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(530,660,15);
            }
            if(p43==38)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,660,15);
            }
            if(p43==39)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,615,15);
            }
            if(p43==40)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,570,15);
            }
            if(p43==41)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,525,15);
            }
            if(p43==42)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,480,15);
            }
            if(p43==43)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,435,15);
            }
            if(p43==44)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(620,390,15);
            }
            if(p43==45)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(665,390,15);
            }
            if(p43==46)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(710,390,15);
            }
            if(p43==47)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(755,390,15);
            }
            if(p43==48)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(800,390,15);
            }
            if(p43==49)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(845,390,15);
            }
            if(p43==50)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(845,345,15);
            }
            if(p43==51)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(800,300,15);
            }
            if(p43==52)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(755,345,15);
            }
            if(p43==53)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(710,345,15);
            }
            if(p43==54)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(665,345,15);
            }
            if(p43==55)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(620,345,15);
            }
            if(p43==56)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,370,15);
                iSetColor(255,0,0);
                iFilledCircle(575,360,15);
            }


        }
        if(p41==56 && p42==56 && p43==56 && p44!=56)
        {
            if(p44==1)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(755,300,15);
            }
            if(p44==2)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(710,300,15);
            }
            if(p44==3)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(665,300,15);
            }
            if(p44==4)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(620,300,15);
            }
            if(p44==5)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,255,15);
            }
            if(p44==6)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,210,15);
            }
            if(p44==7)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,165,15);
            }

            if(p44==8)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,120,15);
            }
            if(p44==9)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,75,15);
            }
            if(p44==10)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,30,15);
            }
            if(p44==11)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(530,30,15);
            }
            if(p44==12)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,30,15);
            }
            if(p44==13)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,75,15);
            }
            if(p44==14)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,120,15);
            }
            if(p44==15)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,165,15);
            }
            if(p44==16)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,210,15);
            }
            if(p44==17)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,255,15);
            }
            if(p44==18)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(440,300,15);
            }
            if(p44==19)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(395,300,15);
            }
            if(p44==20)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(350,300,15);
            }
            if(p44==21)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(305,300,15);
            }
            if(p44==22)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(260,300,15);
            }
            if(p44==23)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(215,300,15);
            }
            if(p44==24)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(215,345,15);
            }
            if(p44==25)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(215,390,15);
            }
            if(p44==26)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(260,390,15);
            }
            if(p44==27)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(305,390,15);
            }
            if(p44==28)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(350,390,15);
            }
            if(p44==29)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(395,390,15);
            }
            if(p44==30)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(440,390,15);
            }
            if(p44==31)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,455,15);
            }
            if(p44==32)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,480,15);
            }
            if(p44==33)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,525,15);
            }
            if(p44==34)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,570,15);
            }
            if(p44==35)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,615,15);
            }
            if(p44==36)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(485,660,15);
            }
            if(p44==37)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(530,660,15);
            }
            if(p44==38)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,660,15);
            }
            if(p44==39)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,615,15);
            }
            if(p44==40)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,570,15);
            }
            if(p44==41)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,525,15);
            }
            if(p44==42)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,480,15);
            }
            if(p44==43)
            {   iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(575,435,15);
            }
            if(p44==44)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(620,390,15);
            }
            if(p44==45)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(665,390,15);
            }
            if(p44==46)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(710,390,15);
            }
            if(p44==47)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(755,390,15);
            }
            if(p44==48)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(800,390,15);
            }
            if(p44==49)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(845,390,15);
            }
            if(p44==50)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(845,345,15);
            }
            if(p44==51)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(800,300,15);
            }
            if(p44==52)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(755,345,15);
            }
            if(p44==53)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(710,345,15);
            }
            if(p44==54)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(665,345,15);
            }
            if(p44==55)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,410,15);
                iSetColor(255,0,0);
                iFilledCircle(575,420,15);
                iSetColor(255,0,0);
                iFilledCircle(620,345,15);
            }
            if(p44==56)
            {iSetColor(255,0,0);
                iFilledCircle(575,390,15);
                iSetColor(255,0,0);
                iFilledCircle(575,370,15);
                iSetColor(255,0,0);
                iFilledCircle(575,360,15);
                iSetColor(255,0,0);
                iFilledCircle(575,345,15);
            }


        }
    if(flag==0){
    if(point1==4) {
        iText(1050,250,"Player 1 Wins",GLUT_BITMAP_HELVETICA_10);
        flag=1;

    }
    else if(point2==4) {
        iText(1050,250,"Player 2 Wins",GLUT_BITMAP_HELVETICA_10);
        flag=1;

    }
     else if(point3==4) {
        iText(1050,250,"Player 3 Wins",GLUT_BITMAP_HELVETICA_10);
        flag=1;

    }
      else if(point4==4){
        iText(1050,250,"Player 4 Wins",GLUT_BITMAP_HELVETICA_10);
        flag=1;
     }

    }

}
}

random()
{
    int j;
    j=(rand()%6)+1;
    return j;
}
void random_calling()
{
    rand();

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{

    //printf("%d %d\n",count1,count2);
if(flag==0 )
    {
    if(c==0)
    {


        if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=1250&&mx>=950&&my>=350&&my<=650)
        {
            c++;
            d=random();
            //printf("%d",d);
            if(p11!=56 && p12==0 && p13==0 && p14==0)
            {
                p11+=d;
                if(p11>56)
                {
                    p11-=d;
                }
            }
            if(p11==56 && p12!=56 && p13==0 && p14==0)
            {
                p12+=d;
                if(p12>56)
                {
                    p12-=d;
                }

            }
            else if(p11==56 && p12==56 && p13!=56 && p14==0)
            {
                p13+=d;
                if(p13>56)
                {
                    p13-=d;
                }
            }
            else if(p11==56 && p12==56 && p13==56 && p14!=56)
            {
                p14+=d;
                if(p14>56)
                {
                    p14-=d;
                }
            }


            if(p11==56 && p12==0 && p13==0 && p14==0) point1++;
            else if(p11==56 && p12==56 && p13==0 && p14==0) point1++;
            else if(p11==56 && p12==56 && p13==56 && p14==0) point1++;
            else if(p11==56 && p12==56 && p13==56 && p14==56) point1++;
        }
    }
    else if(c==1)
    {
        if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=1250&&mx>=950&&my>=350&&my<=650)
        {
            c++;
            d=random();
            //printf("P2: %d",d);
            if(p21!=56 && p22==0 && p23==0 && p24==0)
            {
                p21+=d;
                if(p21>56)
                {
                    p21-=d;
                }
            }
            else if(p21==56 && p22!=56 && p23==0 && p24==0)
            {
                p22+=d;
                if(p22>56)
                {
                    p22-=d;
                }

            }
            else if(p21==56 && p22==56 && p23!=56 && p24==0)
            {
                p23+=d;
                if(p23>56)
                {
                    p23-=d;
                }
            }
            else if(p21==56 && p22==56 && p23==56 && p24!=56)
            {
                p24+=d;
                if(p24>56)
                {
                    p24-=d;
                }
            }


            if(p21==56 && p22==0 && p23==0 && p24==0) point2++;
           else  if(p21==56 && p22==56 && p23==0 && p24==0) point2++;
          else if(p21==56 && p22==56 && p23==56 && p24==0) point2++;
          else if(p21==56 && p22==0 && p23==56 && p24==56) point2++;

        }
    }
    else if(c==2)
    {
        if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=1250&&mx>=950&&my>=350&&my<=650)
        { //printf("%d",d);
           c++;

            d=random();
            //printf("P3: %d",d);
            if(p31!=56 && p32==0 && p33==0 && p34==0)
            {
                p31+=d;
                if(p31>56)
                {
                    p31-=d;
                }
            }
            else if(p31==56 && p32!=56 && p33==0 && p34==0)
            {
                p32+=d;
                if(p32>56)
                {
                    p32-=d;
                }

            }
            else if(p31==56 && p32==56 && p33!=56 && p34==0)
            {
                p33+=d;
                if(p33>56)
                {
                    p33-=d;
                }
            }
            else if(p31==56 && p32==56 && p33==56 && p34!=56)
            {
                p34+=d;
                if(p34>56)
                {
                    p34-=d;
                }
            }


            if(p31==56 && p32==0 && p33==0 && p34==0) point3++;
            else if(p31==56 && p32==56 && p33==0 && p34==0) point3++;
           else if(p31==56 && p32==56 && p33==56 && p34==0) point3++;
           else if(p31==56 && p32==56 && p33==56 && p34==56) point3++;

        }
    }

    else if(c==3)
    {
    if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN && mx<=1250 && mx>=950 && my>=350 && my<=650)
        {
           c=0;

            d=random();
            //printf("P3: %d",d);
            if(p41!=56 && p42==0 && p43==0 && p44==0)
            {
                p41+=d;
                if(p41>56)
                {
                    p41-=d;
                }
            }
            else if(p41==56 && p42!=56 && p43==0 && p44==0)
            {
                p42+=d;
                if(p42>56)
                {
                    p42-=d;
                }

            }
            else if(p41==56 && p42==56 && p43!=56 && p44==0)
            {
                p43+=d;
                if(p43>56)
                {
                    p43-=d;
                }
            }
            else if(p41==56 && p42==56 && p43==56 && p44!=56){
                    p44+=d;
                    if(p44>d)
                        {
                            p44-=d;
                    }

            }


            if(p41==56 && p42==0 && p43==0 && p44==0) point4++;
            else if(p41==56 && p42==56 && p43==0 && p44==0) point4++;
            else if(p41==56 && p42==56 && p43==56 && p44==0) point4++;
            else if(p41==56 && p42==56 && p43==56 && p44==56) point4++;

        }


    }

}
if(flag==1){

}
}


void iKeyboard(unsigned char key)
{
    if (key == 'e')
    {
        //do something with 'x'
        exit(0);
    }
    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

    /*if (key == GLUT_KEY_END) {
    	exit(0);
    }
    if (key == GLUT_KEY_LEFT) {
    	pic_x--;
    }
    if (key == GLUT_KEY_RIGHT) {
    	pic_x++;
    }
    if (key == GLUT_KEY_UP) {
    	pic_y++;
    }
    if (key == GLUT_KEY_DOWN) {
    	pic_y--;
    }
    //place your codes for other keys here
    }*/
}
int main()
{
    //place your own initialization codes here.
    //pic_x = 30;
    //pic_y = 20;
    iInitialize(1350,690,"BOX LUDU!!");
     //printf("%d %d",count1,count2);
    //iSetTimer(1,random_calling);

    //iInitialize(900, 400, "Donald Trump");
    return 0;
}
