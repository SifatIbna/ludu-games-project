



# include "iGraphics.h"
#include<stdlib.h>
int x=0,y=120,a=70,b=60,j=5,k=255;
int flag=0;
/* This flag controls the situation of the game ,
as in,is it in playing mood or not?*/

int d=0,e=0;
/* storing the initial point  gets by random function*/
int count=-1;
/* controlling player mood*/
int p1=0,p2=0;
/* storing players'  points*/
int i=0;

int count1=1;
/*controlling 'chokka' */

int m_f=0;
/* controlling home page and back page */

texture smurfTexture0;
texture smurfTexture;


void iTextureInit()
{
    smurfTexture0.Create("home.bmp");
    smurfTexture.Create("snakeludu.bmp");

}
/* texturing two picture:
home.bmp for home page photo and
snakeludu.bmp for 'ludu board;*/

void iDraw()
{
    iClear();
    if(m_f==0)
    {
        iSetColor(255,255,255);
        drawTexture(0,0,smurfTexture0);
        /* adding home page picture*/

        iSetColor(255,87,51);
        iFilledRectangle(418,202,282,62);
        iSetColor(0,0,0);
        iText(440,225,"SNAKES & LADDERS!",GLUT_BITMAP_TIMES_ROMAN_24);
        // for heading

        iSetColor(255,87,51);
        iFilledRectangle(460,125,240,60);
        iSetColor(0,0,0);
        iText(500,145,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);
        // to enter the game

        iSetColor(255,87,51);
        iFilledRectangle(500,45,200,60);
        iSetColor(0,0,0);
        iText(540,65,"QUIT",GLUT_BITMAP_TIMES_ROMAN_24);
        //to quit the game



    }
    if(m_f==1)
    {
        iClear();

        iSetColor(255,255,255);
        iFilledRectangle(0,0,700,700);
        //making background white
        iSetColor(255,255,255);
        drawTexture(0,100,smurfTexture); // adding ludu board


        //for two 'ludu ghuti'
        iSetColor(255,0,0);
        iFilledCircle(170,70,15);
        iCircle(170,20,15);
        iSetColor(12,8,115);
        iFilledCircle(170,20,15);
        iCircle(170,70,15);
        iSetColor(255,255,255);

        iText(165,62,"1",GLUT_BITMAP_HELVETICA_18);
        iText(165,12,"2",GLUT_BITMAP_HELVETICA_18);
        /* initializing players' 'ghuti*/

        if(count1==-1)
        {
            /*when count1=-1 the 'chokka' will out of the box*/

            //for the chokka
            iSetColor(0,255,0);
            iFilledRectangle(120,35,20,20);
            double t1[4]= {110,110,120,120};
            double t2[4]= {25,45,55,35};
            iFilledPolygon(t1,t2,4);
            double t3[4]= {110,120,140,130};
            double t4[4]= {25,35,35,25};
            iFilledPolygon(t3,t4,4);
            iSetColor(0,0,0);
            iLine(120,35,140,35);
            iLine(120,35,120,55);
            iLine(120,55,140,55);
            iLine(140,55,140,35);
            iLine(110,25,120,35);
            iLine(110,25,130,25);
            iLine(130,25,140,35);
            iLine(110,25,120,35);
            iLine(110,25,110,45);
            iLine(110,45,120,55);

        }
        else if(count1==1)
        {
            /*when count1=1 the 'chokka' will inside  the box*/
            //for the chokka

            iSetColor(0,255,0);
            iFilledRectangle(50,35,20,20);
            double t1[4]= {40,40,50,50};
            double t2[4]= {25,45,55,35}; //uses  for chokka
            iFilledPolygon(t1,t2,4);
            double t3[4]= {40,50,70,60};
            double t4[4]= {25,35,35,25}; //uses  for chokka
            iFilledPolygon(t3,t4,4);
            iSetColor(0,0,0);
            iLine(50,35,70,35);
            iLine(50,35,50,55);
            iLine(50,55,70,55);
            iLine(70,55,70,35);
            iLine(40,25,50,35);
            iLine(40,25,60,25);
            iLine(60,25,70,35);
            iLine(40,25,50,35);
            iLine(40,25,40,45);
            iLine(40,45,50,55);
            // count1=-1;
            if(count==-1)
            {
                //if count =-1,now time for player 1

                iSetColor(255,0,0);
                iText(110,62,"N0W",GLUT_BITMAP_HELVETICA_18);

            }
            if(count==1)
            {
                //if count =1,now time for player 2


                iSetColor(12,8,115);
                iText(110,12,"N0W",GLUT_BITMAP_HELVETICA_18);

            }



        }
        //for the box where the'chokka'  will remain if count1=1
        iSetColor(0,0,0);
        iFilledEllipse(60,70, 40,10);
        iSetColor(0,0,0);
        iFilledEllipse(60, 10, 40,10);
        iSetColor(0,0,255);
        iLine(100,10,100,70);
        iLine(20,10,20,70);

        if(flag==0)
        {
            // flag=0 indicates that the game is not started yet,just need a click

            iText(260,40,"CLICK THE BOX TO START THE GAME!!!",GLUT_BITMAP_HELVETICA_18);
            iSetColor(100,100,100);
            iText(280,15,"Press 'q' to Exit or Press 'b' to Go Menu");
            iSetColor(0,255,255);

            iFilledRectangle(205,0,5,100);
        }
        if(flag==1||count1==2)
            /*count1 becomes when any playerpoints become 100
            to show the final points of two players*/
        {
            if(flag==1)
            {
                iSetColor(100,100,100);
                iText(320,15,"Press 'q' to Exit or Press 'b' to Go Menu");




                iSetColor(0,0,255);
                iText(190,80,"POSITION",GLUT_BITMAP_HELVETICA_18);
                iSetColor(0,255,0);
                iText(400,80,"GAME IS ON!",GLUT_BITMAP_HELVETICA_18);
                iText(300,60,"CLICK THE BOX TO CONTINUE THE GAME!!!",GLUT_BITMAP_HELVETICA_18);
                iSetColor(0,255,255);

                iFilledRectangle(285,0,5,100);
                if(count==1&&count1==-1)
                {
                    iSetColor(255,0,0);
                }
                if(count==-1&&count1==-1)
                {
                    iSetColor(12,8,115);
                }
                //changing color based on players


                if(count1==-1)
                {
                    /*
                    showing in the box
                    and writing in the console
                     how many points get a player
                    it has been got by random calling
                    */

                    if(i==1)
                    {
                        iFilledCircle(130,45,1);
                        iText(510,40,"1",GLUT_BITMAP_HELVETICA_18);

                    }
                    else if(i==2)
                    {
                        iFilledCircle(125,45,1);
                        iFilledCircle(135,45,1);
                        iText(510,40,"2",GLUT_BITMAP_HELVETICA_18);

                    }
                    else if(i==3)
                    {
                        iFilledCircle(128,45,1);
                        iFilledCircle(135,45,1);
                        iFilledCircle(133,40,1);
                        iText(510,40,"3",GLUT_BITMAP_HELVETICA_18);

                    }
                    else if(i==4)
                    {
                        iFilledCircle(125,45,1);
                        iFilledCircle(132,45,1);
                        iFilledCircle(132,40,1);
                        iFilledCircle(125,40,1);
                        iText(510,40,"4",GLUT_BITMAP_HELVETICA_18);


                    }
                    else if(i==5)
                    {
                        iFilledCircle(133,45,1);
                        iFilledCircle(127,45,1);
                        iFilledCircle(133,40,1);
                        iFilledCircle(130,43.5,1);
                        iFilledCircle(127,40,1);
                        iText(510,40,"5",GLUT_BITMAP_HELVETICA_18);

                    }
                    else
                    {
                        iFilledCircle(127,45,1);
                        iFilledCircle(127,40,1);
                        iFilledCircle(130,40,1);
                        iFilledCircle(130,45,1);
                        iFilledCircle(133,40,1);
                        iFilledCircle(133,45,1);
                        iText(510,40,"6",GLUT_BITMAP_HELVETICA_18);

                    }

                }


                if(count==1&&count1==-1)
                {
                    iSetColor(255,0,0);
                    iText(390,40,"Player 1 gets",GLUT_BITMAP_HELVETICA_18);
                }
                if(count==-1&&count1==-1)
                {
                    iSetColor(12,8,115);
                    iText(390,40,"Player 2 gets",GLUT_BITMAP_HELVETICA_18);


                }
            }
            if(count1==-1||count1==2||count1==1)
            {
                /*
                count1= -1 and 1 control showing position in the board
                count1 =2 controls  showing final position
                */
                /*  when a player gets ladder ,just changing the value;
                   but when caught by a snake,not only changing the value;
                   also drawing the circles again!
                   because when players get a ladder the new point should be
                    below the old points so no need to draw the 'ghuti' again.
                    but when caught by a snake;if we draw the 'ghuti' then */
                if(p1==0)
                {
                    iSetColor(255,0,0);

                    iText(230,62,"0",GLUT_BITMAP_HELVETICA_18);


                }


                if(p1==1)
                {
                    iSetColor(255,0,0);
                    iFilledCircle(30,130,15);
                    iText(230,62,"1",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,255,0);
                    iCircle(30,130,15);

                }

                if(p1==2)
                {
                    iSetColor(255,0,0);
                    iFilledCircle(100,130,15);
                    iText(230,62,"2",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,130,15);

                }
                if(p1==3)
                {
                    p1=21;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);
                    //gets a ladder


                }
                if(p1==4)
                {
                    iSetColor(255,0,0);
                    iFilledCircle(240,130,15);
                    iText(230,62,"4",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,130,15);

                }
                if(p1==5)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,130,15);
                    iText(230,62,"5",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,130,15);

                }
                if(p1==6)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,130,15);
                    iText(230,62,"6",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,130,15);

                }
                if(p1==7)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,130,15);
                    iText(230,62,"7",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,130,15);

                }
                if(p1==8)
                {
                    p1=30;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder


                }
                if(p1==9)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,130,15);
                    iText(230,62,"9",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,130,15);

                }
                if(p1==10)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,130,15);
                    iText(230,62,"10",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,130,15);

                }
                if(p1==11)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,190,15);
                    iText(230,62,"11",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,190,15);

                }
                if(p1==12)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,190,15);
                    iText(230,62,"12",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,190,15);

                }
                if(p1==13)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,190,15);
                    iText(230,62,"13",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,190,15);

                }
                if(p1==14)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,190,15);
                    iText(230,62,"14",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,190,15);

                }
                if(p1==15)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,190,15);
                    iText(230,62,"15",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,190,15);

                }
                if(p1==16)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,190,15);
                    iText(230,62,"16",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,190,15);

                }
                if(p1==17)
                {
                    p1=13;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(255,0,0);
                    iFilledCircle(520,190,15);
                    iText(230,62,"13",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,190,15);


                }
                if(p1==18)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,190,15);
                    iText(230,62,"18",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,190,15);

                }
                if(p1==19)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,190,15);
                    iText(230,62,"19",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,190,15);

                }
                if(p1==20)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,190,15);
                    iText(230,62,"20",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,190,15);

                }
                if(p1==21)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,250,15);
                    iText(230,62,"21",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,250,15);

                }
                if(p1==22)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,250,15);
                    iText(230,62,"22",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,250,15);

                }
                if(p1==23)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,250,15);
                    iText(230,62,"23",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,250,15);

                }
                if(p1==24)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,250,15);
                    iText(230,62,"24",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,250,15);

                }
                if(p1==25)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,250,15);
                    iText(230,62,"25",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,250,15);

                }
                if(p1==26)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,250,15);
                    iText(230,62,"26",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,250,15);

                }
                if(p1==27)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,250,15);
                    iText(230,62,"27",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,250,15);

                }
                if(p1==28)
                {
                    p1=84;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p1==29)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,250,15);
                    iText(230,62,"29",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,250,15);

                }
                if(p1==30)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,250,15);
                    iText(230,62,"30",GLUT_BITMAP_HELVETICA_18);


                    iSetColor(255,255,0);
                    iCircle(660,250,15);

                }
                if(p1==31)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,310,15);
                    iText(230,62,"31",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,310,15);
                }
                if(p1==32)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,310,15);
                    iText(230,62,"32",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,310,15);
                }
                if(p1==33)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,310,15);
                    iText(230,62,"33",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,310,15);
                }
                if(p1==34)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,310,15);
                    iText(230,62,"34",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,310,15);
                }
                if(p1==35)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,310,15);
                    iText(230,62,"35",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,310,15);
                }
                if(p1==36)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,310,15);
                    iText(230,62,"36",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,310,15);
                }
                if(p1==37)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,310,15);
                    iText(230,62,"37",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,310,15);
                }
                if(p1==38)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,310,15);
                    iText(230,62,"38",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,310,15);
                }
                if(p1==39)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,310,15);
                    iText(230,62,"39",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,310,15);
                }
                if(p1==40)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,310,15);
                    iText(230,62,"40",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,310,15);
                }
                if(p1==41)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,370,15);
                    iText(230,62,"41",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,370,15);
                }
                if(p1==42)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,370,15);
                    iText(230,62,"42",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,370,15);
                }
                if(p1==43)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,370,15);
                    iText(230,62,"43",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,370,15);
                }
                if(p1==44)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,370,15);
                    iText(230,62,"44",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,370,15);
                }
                if(p1==45)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,370,15);
                    iText(230,62,"45",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,370,15);
                }
                if(p1==46)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,370,15);
                    iText(230,62,"46",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,370,15);
                }
                if(p1==47)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,370,15);
                    iText(230,62,"47",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,370,15);
                }
                if(p1==48)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,370,15);
                    iText(230,62,"48",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,370,15);
                }
                if(p1==49)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,370,15);
                    iText(230,62,"49",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,370,15);
                }
                if(p1==50)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,370,15);
                    iText(230,62,"50",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,370,15);
                }
                if(p1==51)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,430,15);
                    iText(230,62,"51",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,430,15);

                }
                if(p1==52)
                {

                    p1=29;
                    //caught by a snake
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    iSetColor(255,0,0);
                    iFilledCircle(590,250,15);
                    iText(230,62,"29",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,250,15);


                }
                if(p1==53)
                {
                    iSetColor(255,0,0);
                    iFilledCircle(520,430,15);
                    iText(230,62,"53",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,430,15);
                }
                if(p1==54)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,430,15);
                    iText(230,62,"54",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,430,15);
                }
                if(p1==55)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,430,15);
                    iText(230,62,"55",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,430,15);
                }
                if(p1==56)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,430,15);
                    iText(230,62,"56",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,430,15);
                }
                if(p1==57)
                {

                    p1=40;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(255,0,0);
                    iFilledCircle(30,310,15);
                    iText(230,62,"40",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,310,15);

                }
                if(p1==58)
                {
                    p1=77;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder


                }
                if(p1==59)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,430,15);
                    iText(230,62,"59",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,430,15);
                }
                if(p1==60)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,430,15);
                    iText(230,62,"60",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,430,15);
                }
                if(p1==61)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,490,15);
                    iText(230,62,"61",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,490,15);
                }
                if(p1==62)
                {
                    p1=22;
                    //caught by a snake

                    iSetColor(255,0,0);
                    iFilledCircle(100,250,15);
                    iText(230,62,"22",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,250,15);

                }
                if(p1==63)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,490,15);
                    iText(230,62,"63",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,490,15);
                }
                if(p1==64)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,490,15);
                    iText(230,62,"64",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,490,15);
                }
                if(p1==65)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,490,15);
                    iText(230,62,"65",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,490,15);
                }
                if(p1==66)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(380,490,15);
                    iText(230,62,"66",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(380,490,15);
                }
                if(p1==67)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,490,15);
                    iText(230,62,"67",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,490,15);
                }
                if(p1==68)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,490,15);
                    iText(230,62,"68",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,490,15);
                }
                if(p1==69)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,490,15);
                    iText(230,62,"69",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,490,15);
                }
                if(p1==70)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,490,15);
                    iText(230,62,"70",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,490,15);
                }
                if(p1==71)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,550,15);
                    iText(230,62,"71",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,550,15);
                }
                if(p1==72)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,550,15);
                    iText(230,62,"72",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,550,15);
                }
                if(p1==73)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,550,15);
                    iText(230,62,"73",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,550,15);
                }
                if(p1==74)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,550,15);
                    iText(230,62,"74",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,550,15);
                }
                if(p1==75)
                {

                    p1=86;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p1==76)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,550,15);
                    iText(230,62,"76",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,550,15);
                }
                if(p1==77)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,550,15);
                    iText(230,62,"77",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,550,15);
                }
                if(p1==78)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,550,15);
                    iText(230,62,"78",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,550,15);
                }
                if(p1==79)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,550,15);
                    iText(230,62,"79",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,550,15);
                }
                if(p1==80)
                {
                    p1=100;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p1==81)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(30,610,15);
                    iText(230,62,"81",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,610,15);
                }
                if(p1==82)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,610,15);
                    iText(230,62,"82",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,610,15);
                }
                if(p1==83)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,610,15);
                    iText(230,62,"83",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,610,15);
                }
                if(p1==84)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(240,610,15);
                    iText(230,62,"84",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(240,610,15);
                }
                if(p1==85)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,610,15);
                    iText(230,62,"85",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(310,610,15);
                }
                if(p1==86)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(390,610,15);
                    iText(230,62,"86",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(390,610,15);
                }
                if(p1==87)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,610,15);
                    iText(230,62,"87",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,610,15);
                }
                if(p1==88)
                {
                    p1=18;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(255,0,0);
                    iFilledCircle(170,190,15);
                    iText(230,62,"18",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,190,15);



                }
                if(p1==89)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,610,15);
                    iText(230,62,"89",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,610,15);
                }
                if(p1==90)
                {
                    p1=91;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder


                }
                if(p1==91)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(660,670,15);
                    iText(230,62,"91",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,670,15);
                }
                if(p1==92)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(590,670,15);
                    iText(230,62,"92",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(590,670,15);
                }
                if(p1==93)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(520,670,15);
                    iText(230,62,"93",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(520,670,15);
                }
                if(p1==94)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(450,670,15);
                    iText(230,62,"94",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(450,670,15);
                }
                if(p1==95)
                {
                    p1=51;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(255,0,0);
                    iFilledCircle(660,430,15);
                    iText(230,62,"51",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(660,430,15);
                }
                if(p1==96)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(310,670,15);
                    iText(230,62,"96",GLUT_BITMAP_HELVETICA_18);


                    iSetColor(255,255,0);
                    iCircle(310,670,15);
                }
                if(p1==97)
                {
                    p1=79;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(255,0,0);
                    iFilledCircle(100,550,15);
                    iText(230,62,"79",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,550,15);


                }
                if(p1==98)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(170,670,15);
                    iText(230,62,"98",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(170,670,15);
                }
                if(p1==99)
                {

                    iSetColor(255,0,0);
                    iFilledCircle(100,670,15);
                    iText(230,62,"99",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(100,670,15);
                }
                if(p1==100)
                {
                    flag=2;

                    iSetColor(255,0,0);
                    iFilledCircle(30,670,15);
                    iText(230,62,"100",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,255,0);
                    iCircle(30,670,15);
                    count1=2;
                    p1=100;
                }

                if(p2==0)
                {
                    iSetColor(12,8,115);
                    iText(230,12,"0",GLUT_BITMAP_HELVETICA_18);


                }

                if(p2==1)
                {
                    iSetColor(12,8,115);
                    iFilledCircle(30,130,15);
                    iText(230,12,"1",GLUT_BITMAP_HELVETICA_18);


                    iSetColor(255,0,0);
                    iCircle(30,130,15);

                }
                if(p2==2)
                {
                    iSetColor(12,8,115);
                    iFilledCircle(100,130,15);
                    iText(230,12,"2",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,0,0);
                    iCircle(100,130,15);

                }
                if(p2==3)
                {
                    p2=21;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder


                }
                if(p2==4)
                {
                    iSetColor(12,8,115);
                    iFilledCircle(240,130,15);
                    iText(230,12,"4",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,0,0);
                    iCircle(240,130,15);

                }
                if(p2==5)
                {
                    iSetColor(12,8,115);
                    iFilledCircle(310,130,15);
                    iText(230,12,"5",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,130,15);

                }
                if(p2==6)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,130,15);
                    iText(230,12,"6",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,130,15);

                }
                if(p2==7)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,130,15);
                    iText(230,12,"7",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,130,15);

                }
                if(p2==8)
                {
                    p2=30;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder



                }
                if(p2==9)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,130,15);
                    iText(230,12,"9",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,130,15);

                }
                if(p2==10)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,130,15);
                    iText(230,12,"10",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,130,15);

                }
                if(p2==11)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,190,15);
                    iText(230,12,"11",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,190,15);

                }
                if(p2==12)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,190,15);
                    iText(230,12,"12",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,190,15);

                }
                if(p2==13)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,190,15);
                    iText(230,12,"13",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,190,15);

                }
                if(p2==14)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,190,15);
                    iText(230,12,"14",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,190,15);

                }
                if(p2==15)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,190,15);
                    iText(230,12,"15",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,190,15);

                }
                if(p2==16)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,190,15);
                    iText(230,12,"16",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,190,15);

                }
                if(p2==17)
                {
                    p2=13;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake


                    iSetColor(12,8,115);
                    iFilledCircle(520,190,15);
                    iText(230,12,"13",GLUT_BITMAP_HELVETICA_18);

                    iSetColor(255,0,0);
                    iCircle(520,190,15);


                }
                if(p2==18)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,190,15);
                    iText(230,12,"18",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,190,15);

                }
                if(p2==19)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,190,15);
                    iText(230,12,"19",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,190,15);

                }
                if(p2==20)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,190,15);
                    iText(230,12,"20",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,190,15);

                }
                if(p2==21)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,250,15);
                    iText(230,12,"21",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,15);
                    iCircle(30,250,15);


                }
                if(p2==22)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,250,15);
                    iText(230,12,"22",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,250,15);

                }
                if(p2==23)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,250,15);
                    iText(230,12,"23",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,250,15);

                }
                if(p2==24)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,250,15);
                    iText(230,12,"24",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,250,15);

                }
                if(p2==25)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,250,15);
                    iText(230,12,"25",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,250,15);

                }
                if(p2==26)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,250,15);
                    iText(230,12,"26",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,250,15);

                }
                if(p2==27)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,250,15);
                    iText(230,12,"27",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,250,15);

                }
                if(p2==28)
                {
                    p2=84;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p2==29)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,250,15);
                    iText(230,12,"29",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,250,15);

                }
                if(p2==30)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,250,15);
                    iText(230,12,"30",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,250,15);

                }
                if(p2==31)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,310,15);
                    iText(230,12,"31",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,310,15);
                }
                if(p2==32)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,310,15);
                    iText(230,12,"32",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,310,15);
                }
                if(p2==33)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,310,15);
                    iText(230,12,"33",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,310,15);
                }
                if(p2==34)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,310,15);
                    iText(230,12,"34",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,310,15);
                }
                if(p2==35)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,310,15);
                    iText(230,12,"35",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,310,15);
                }
                if(p2==36)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,310,15);
                    iText(230,12,"36",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,310,15);
                }
                if(p2==37)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,310,15);
                    iText(230,12,"37",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,310,15);
                }
                if(p2==38)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,310,15);
                    iText(230,12,"38",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,310,15);
                }
                if(p2==39)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,310,15);
                    iText(230,12,"39",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,310,15);
                }
                if(p2==40)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,310,15);
                    iText(230,12,"40",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,310,15);
                }
                if(p2==41)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,370,15);
                    iText(230,12,"41",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,370,15);
                }
                if(p2==42)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,370,15);
                    iText(230,12,"42",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,370,15);
                }
                if(p2==43)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,370,15);
                    iText(230,12,"43",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,370,15);
                }
                if(p2==44)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,370,15);
                    iText(230,12,"44",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,370,15);
                }
                if(p2==45)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,370,15);
                    iText(230,12,"45",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,370,15);
                }
                if(p2==46)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,370,15);
                    iText(230,12,"46",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,370,15);
                }
                if(p2==47)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,370,15);
                    iText(230,12,"47",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,370,15);
                }
                if(p2==48)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,370,15);
                    iText(230,12,"48",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,370,15);
                }
                if(p2==49)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,370,15);
                    iText(230,12,"49",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,370,15);
                }
                if(p2==50)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,370,15);
                    iText(230,12,"50",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,370,15);
                }
                if(p2==51)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,430,15);
                    iText(230,12,"51",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,430,15);

                }
                if(p2==52)
                {
                    p2=29;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake

                    iSetColor(12,8,115);
                    iFilledCircle(590,250,15);
                    iText(230,12,"29",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,250,15);


                }
                if(p2==53)
                {
                    iSetColor(12,8,115);
                    iFilledCircle(520,430,15);
                    iText(230,12,"53",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,430,15);

                }
                if(p2==54)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,430,15);
                    iText(230,12,"54",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,430,15);
                }
                if(p2==55)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,430,15);
                    iText(230,12,"55",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,430,15);
                }
                if(p2==56)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,430,15);
                    iText(230,12,"56",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,430,15);
                }
                if(p2==57)
                {

                    p2=40;
                    //caught by a snake

                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    iSetColor(12,8,115);
                    iFilledCircle(30,310,15);
                    iText(230,12,"40",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,310,15);

                }
                if(p2==58)
                {
                    p2=77;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p2==59)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,430,15);
                    iText(230,12,"59",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,430,15);
                }
                if(p2==60)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,430,15);
                    iText(230,12,"60",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,430,15);
                }
                if(p2==61)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,490,15);
                    iText(230,12,"61",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,490,15);
                }
                if(p2==62)
                {
                    p2=22;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake

                    iSetColor(12,8,115);
                    iFilledCircle(100,250,15);
                    iText(230,12,"22",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,250,15);

                }
                if(p2==63)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,490,15);
                    iText(230,12,"63",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,490,15);
                }
                if(p2==64)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,490,15);
                    iText(230,12,"64",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,490,15);
                }
                if(p2==65)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,490,15);
                    iText(230,12,"65",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,490,15);
                }
                if(p2==66)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(380,490,15);
                    iText(230,12,"66",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(380,490,15);
                }
                if(p2==67)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,490,15);
                    iText(230,12,"67",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,490,15);
                }
                if(p2==68)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,490,15);
                    iText(230,12,"68",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,490,15);
                }
                if(p2==69)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,490,15);
                    iText(230,12,"69",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,490,15);
                }
                if(p2==70)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,490,15);
                    iText(230,12,"70",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,490,15);
                }
                if(p2==71)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,550,15);
                    iText(230,12,"71",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,550,15);
                }
                if(p2==72)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,550,15);
                    iText(230,12,"72",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,550,15);
                }
                if(p2==73)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,550,15);
                    iText(230,12,"73",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,550,15);
                }
                if(p2==74)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,550,15);
                    iText(230,12,"74",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,550,15);
                }
                if(p2==75)
                {

                    p2=86;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p2==76)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,550,15);
                    iText(230,12,"76",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,550,15);
                }
                if(p2==77)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,550,15);
                    iText(230,12,"77",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,550,15);
                }
                if(p2==78)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,550,15);
                    iText(230,12,"78",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,550,15);
                }
                if(p2==79)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,550,15);
                    iText(230,12,"79",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,550,15);
                }
                if(p2==80)
                {
                    p2=100;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder

                }
                if(p2==81)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(30,610,15);
                    iText(230,12,"81",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,610,15);
                }
                if(p2==82)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,610,15);
                    iText(230,12,"82",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,610,15);
                }
                if(p2==83)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,610,15);
                    iText(230,12,"83",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,610,15);
                }
                if(p2==84)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(240,610,15);
                    iText(230,12,"84",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(240,610,15);
                }
                if(p2==85)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,610,15);
                    iText(230,12,"85",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,610,15);
                }
                if(p2==86)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(390,610,15);
                    iText(230,12,"86",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(390,610,15);
                }
                if(p2==87)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,610,15);
                    iText(230,12,"87",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,610,15);
                }
                if(p2==88)
                {
                    p2=18;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);


                    //caught by a snake


                    iSetColor(12,8,115);
                    iFilledCircle(170,190,15);
                    iText(230,12,"18",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,190,15);
                }
                if(p2==89)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,610,15);
                    iText(230,12,"89",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,610,15);
                }
                if(p2==90)
                {
                    p2=91;
                    PlaySound("E:\snakeludu\162464_kastenfrosch_message.wav", NULL, SND_ASYNC);

                    //gets a ladder


                }
                if(p2==91)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(660,670,15);
                    iText(230,12,"91",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,670,15);
                }
                if(p2==92)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(590,670,15);
                    iText(230,12,"92",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(590,670,15);
                }
                if(p2==93)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(520,670,15);
                    iText(230,12,"93",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(520,670,15);
                }
                if(p2==94)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(450,670,15);
                    iText(230,12,"94",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(450,670,15);
                }
                if(p2==95)
                {
                    p2=51;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);
                    //caught by a snake


                    iSetColor(12,8,115);
                    iFilledCircle(660,430,15);
                    iText(230,12,"51",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(660,430,15);
                }
                if(p2==96)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(310,670,15);
                    iText(230,12,"96",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(310,670,15);
                }
                if(p2==97)
                {
                    p2=79;
                    PlaySound("E:\snakeludu\162460_kastenfrosch_flight.wav", NULL, SND_ASYNC);

                    //caught by a snake

                    iSetColor(12,8,115);
                    iFilledCircle(100,550,15);
                    iText(230,12,"79",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,550,15);


                }
                if(p2==98)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(170,670,15);
                    iText(230,12,"98",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(170,670,15);
                }
                if(p2==99)
                {

                    iSetColor(12,8,115);
                    iFilledCircle(100,670,15);
                    iText(230,12,"99",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(100,670,15);
                }
                if(p2==100)
                {


                    iSetColor(12,8,115);
                    iFilledCircle(30,670,15);
                    iText(230,12,"100",GLUT_BITMAP_HELVETICA_18);
                    iSetColor(255,0,0);
                    iCircle(30,670,15);
                    flag=2;
                    count1=2;
                    p2=100;
                }
            }


        }
        if(flag==2)
        {
            iSetColor(36,139,20);
            iText(410,60,"GAME OVER!",GLUT_BITMAP_HELVETICA_18);
            iText(380,40,"WINNER:",GLUT_BITMAP_HELVETICA_18);
            iSetColor(0,0,255);

            iText(190,80,"FINAL POSITION",GLUT_BITMAP_HELVETICA_18);
            iSetColor(100,100,100);
            iText(320,15,"Press 'q' to Exit or Press 'b' to Go Menu");
            //  iSetColor(0,255,255);

            //  iFilledRectangle(285,0,5,100);
            if(p1>p2)
            {
                // if winner is player one

                iSetColor(255,0,0);
                iText(470,40,"PLAYER 1",GLUT_BITMAP_HELVETICA_18);
            }
            else
            {
                // if winner is player one

                iSetColor(12,8,115);
                iText(470,40,"PLAYER 2",GLUT_BITMAP_HELVETICA_18);
            }


        }


    }

}
int random()
{

    i=rand();
    if(i<0)
        i=-i;
    i=i%6+1;
    //if i=i%6=0,we should not return this,cause we need 1-6
    return i;



}
void random_calling()
{
    rand();
    /*calling this again and again after 1ms
    so that it may becomes uncertain*/
}

void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
    //printing mouse co ordinate

}

void iMouse(int button, int state, int mx, int my)
{
    if(m_f==0&&(button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=700&&mx>=460&&my>=125&&my<=185)
    {
        m_f=1;
        //in home page ,if player click 'play'; providing 'ludu board'
    }

    else if(m_f==0&&(button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=700&&mx>=500&&my>=45&&my<=105)
    {
        //in home page ,if player click 'quit'; terminate the program

        exit(1);
    }

    if(count1==1)
    {

        if(m_f==1&&(button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN&&mx<=90&&mx>=30&&my>=30&&my<=90&&(flag==0||flag==1))
        {
            //continuing the game

            count=count*(-1);
            count1=-1;
            if(count==1)
            {
                d=random();
                p1+=d;
                if(p1>100)
                    p1=p1-d;
                /* if p1>100,re storing previous value
                cause no player can get points more than 100*/

            }
            else
            {
                e=random();
                p2+=e;
                if(p2>100)
                    p2=p2-e;

                /* if p2>100,re storing previous value
                cause no player can get points more than 100*/

            }

            flag=1;

        }
    }
    else  if(count1==-1)
    {
        //pausing the game

        if(m_f==1&&(button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON )&& state == GLUT_DOWN&&mx<=90&&mx>=30&&my>=30&&my<=90&&(flag==0||flag==1))
        {
            count1=1;
            flag=1;

        }
    }

}


void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
    if (key == 'b')
    {
        //stopping the game and restoring in initialize moment

        d=0,e=0;
        count=-1;
        p1=0,p2=0;
        i=0;
        flag=0;

        count1=1;

        m_f=0;

    }


}


void iSpecialKeyboard(unsigned char key)
{



}


int main()
{
    iSetTimer(1,random_calling);


    /*random calling function is called again and again after 1ms
    so that it may becomes uncertain*/

    iInitialize(700, 700, "SNAKES & LADDERS");
    return 0;
}
