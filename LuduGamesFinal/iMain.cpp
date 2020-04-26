#define _CRT_SECURE_NO_WARNINGS
# include "iGraphics.h"
#include<stdlib.h>
int game_choice=0;
FILE *fp = fopen("GameChoice.txt","w");

/*
	function iDraw() is called again and again by the system.

	*/
void iDraw() {
	//place your drawing codes here
	iClear();
	iSetColor(255,87,51);
        iFilledRectangle(418,202,282,62);
        iSetColor(0,0,0);
        iText(440,225,"SNAKES AND LADDERS",GLUT_BITMAP_TIMES_ROMAN_24);
        // for heading

        iSetColor(255,87,51);
        iFilledRectangle(460,125,240,60);
        iSetColor(0,0,0);
        iText(500,145,"BOX LUDU",GLUT_BITMAP_TIMES_ROMAN_24);

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	//	printf("x = %d, y= %d\n",mx,my);
	//place your codes he
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN && mx<=700 && mx>=418 && my>=202 && my<=264) {
		game_choice=1;
		fprintf(fp,"%d\n",game_choice);
		fclose(fp);

		printf("%d",game_choice);
		//getchar();
		exit(0);

	}
	else if((button == GLUT_LEFT_BUTTON||button == GLUT_RIGHT_BUTTON ) && state == GLUT_DOWN && mx<=700 && mx>=460 && my>=125 && my<=185) {
		//place your codes here
		game_choice=2;
		fprintf(fp,"%d\n",game_choice);
		fclose(fp);

		printf("%d",game_choice);
		//getchar();
		exit(0);
	}

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {


        //printf("%c\n",key);
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
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(700,700, "Ludu Games");
	return 0;
}
