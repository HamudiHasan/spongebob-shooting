/*

*/
#include "iGraphics.h"
#include<iostream>
#include<ctime>
/* 
	function iDraw() is called again and again by the system.
*/
int help=0, play=0, back=0,score=0,van=0,van2=0,van3=0,van1=0,level2=0,score1=0,score2=0,score3=0,score4=0,sl2=0,sl21=0,
sl22=0,sl23=0,sl24=0;

int ballX=-50;
int ballY=80;

int ballX1=0;
int ballY1=200;

int ballX2=0;
int ballY2=600;

int ballX3=900;
int ballY3=400;

int dy=10,sx=10;
void iDraw()
{
	
	//place your drawing codes here	
	if (play==0&&help!=1)
	{
		iShowBMP(0,0,"cover.bmp");

	}
	if(play==1)
	{
		iShowBMP(0,0,"l1.bmp");
		
       iSetColor(255, 255, 255);
	   iText(10, 10, "Press P for pause,R for resume, END for exit.Game Created By : Maliha , Supta and Sonet !!");
        if (van==0)
		{
			for(int i=1;i<3;i++)
		{
			//	iShowBMP(ballX,ballY,"5.bmp");
				//iShowBMP(ballX1,ballY1,"2.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
				
			}
		} 
if (van1==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				iShowBMP(ballX1,ballY1,"sup.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
				
			}
		} 
if (van2==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				//iShowBMP(ballX1,ballY1,"sup.bmp");
		//		iShowBMP(ballX2,ballY2,"3.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
				
			}
		} 
if (van3==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				//iShowBMP(ballX1,ballY1,"sup.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
		//		iShowBMP(ballX3,ballY3,"4.bmp");
				
			}
		} 

	}
	if(help==1)
	{
		iShowBMP(0,0,"help 1.bmp");
	}
	if(back==1)
	{
		iShowBMP(0,0,"cover.bmp");
		play=0;
		help=0;
		back=0;
	}
	if (score>=4)
	{
		iShowBMP(0,0,"l1c.bmp");
	}

	if(level2==1)
	{
		iShowBMP(0,0,"l2.bmp");
		
       iSetColor(0, 25, 255);
	   iText(10, 10, "Press P for pause,R for resume, END for exit.Game Created By : Maliha , Supta and Sonet !!");
        if (van==0)
		{
			for(int i=1;i<3;i++)
		{
				iShowBMP(ballX,ballY,"5.bmp");
				//iShowBMP(ballX1,ballY1,"2.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
			
			}
		} 
if (van1==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				iShowBMP(ballX1,ballY1,"sup.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
				
			}
		} 
if (van2==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				//iShowBMP(ballX1,ballY1,"sup.bmp");
				iShowBMP(ballX2,ballY2,"3.bmp");
				//iShowBMP(ballX3,ballY3,"2.bmp");
				
			}
		} 
if (van3==0)
		{
			for(int i=1;i<3;i++)
		{
				//iShowBMP(ballX,ballY,"2.bmp");
				//iShowBMP(ballX1,ballY1,"sup.bmp");
				//iShowBMP(ballX2,ballY2,"2.bmp");
				iShowBMP(ballX3,ballY3,"4.bmp");
			}
		} 
	if (sl2>=4)
	{
		iShowBMP(0,0,"nn.bmp");
	}
	}

}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
int dx=10;
void ballchange()
{



	ballX3=rand()%800;
	ballY3=rand()%600;


	ballX2=rand()%800;
	ballY2=rand()%600;

	if(ballY1>500)
	{
		dy=-10;
	}
	ballY1=ballY1+dy;
	ballX1=ballX1+sx;

	ballY=rand()%800;
	ballX=rand()%600;

	iClear();


} 
void iMouseMove(int mx, int my)
{
	//place your codes here
	//iShowBMP(60,50,"poi.bmp");

}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (play==0&&help==0&&back==0)
	{
//printf("%d %d\n",mx, my);
	if(mx>=100&&mx<=337&&my>=512&&my<=584)
	{
		play=1;
		help=0;
		back=0;
	}
	if(mx>=98&&mx<=338&&my>=418&&my<=491)
	{
		help=1;
		play=0;
		back=0;
	}
	if(mx>=0&&mx<=144&&my>=43&&my<=131)
	{
		back=1;
		help=0;
		play=0;
	}
	if(mx>=98&&mx<=338&&my>=321&&my<=394)
	{
		exit(0);
	}
	}
	if (help==1)
	{
		if(mx>=0&&mx<=144&&my>=43&&my<=131)
	{
		back=1;
	}
	}
	if (mx>=ballX && mx<= (ballX+68) && my>=ballY&&my<=ballY+88)
	{
		score1=1;
		van++;
		
		if(score>=4)
		{
			sl21=1;
		}
	}
	if (mx>=ballX1 && mx<= (ballX1+68) && my>=ballY1&&my<=ballY1+88)
	{
		score2=1;
    	van1++;
		if(score>=4)
		{
		sl22=1;
		}
	}
		if (mx>=ballX2 && mx<= (ballX2+68) && my>=ballY2&&my<=ballY2+88)
	{
		score3=1;
		van2++;
		if(score>=4)
		{
			sl23=1;
		}
	}
			if (mx>=ballX3 && mx<= (ballX3+68) && my>=ballY3&&my<=ballY3+88)
	{
		score4=1;
		van3++;
		if(score>=4)
		{
			sl24=1;
		}
	}
		score=score1+score2+score3+score4;
		sl2=sl21+sl22+sl23+sl24;
			if(score>=4 && sl2<=1)
			{
				if(mx>=0&&mx<=100 && my>=0 && my<=100)
				{
				level2=1;
				van=0;
				van1=0;
				van2=0;
				van3=0;
								}
			}

	printf("%d ",sl2);
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//if(mx==ballX&&mx==ballX1&&mx==ballX2&&mx==ballX3&&mx==ballX4&&mx==ballX5&&my==ballY&&my==ballY1&&my==ballY2&&my==ballY3&&my==ballY4&&my==ballY5)

		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		iPauseTimer(0);
	}
	if (key =='r')
		{
		iResumeTimer(0);
	}

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

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}
int main()
{
	
	iSetTimer(1000,ballchange);
	//place your own initialization codes here. 
	iInitialize(980, 700, "sss");

	return 0;
}