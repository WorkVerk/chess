#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;



void cruzz(bool elej, char piezasn[10][10], char piezasb[10][10], char cruz[10][10], char borde[10][10], bool pen[8], bool peb[8], int yp, int xp);

bool jaqueb(bool elej, char piezasn[10][10], char piezasb[10][10], char borde[10][10], bool pen[8], bool peb[8], int h, int j);
bool jaquen(bool elej, char piezasn[10][10], char piezasb[10][10], char borde[10][10], bool pen[8], bool peb[8], int h, int j);
bool jaquen(bool elej, char piezasn[10][10], char piezasb[10][10], char borde[10][10], bool pen[8], bool peb[8], int h, int j)
{
	char crux[10][10];
	bool jaque=false;
	for(int x=0; x<=9; x++)for(int y=0; y<=9; y++)crux[x][y]=' ';
	for(int xp=0; xp<=9; xp++)
	{
		for(int yp=0; yp<=9; yp++)
		{
			if(piezasb[xp][yp]=='T')//lito
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y+1]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y-1]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasb[xp][yp]=='H')//lito
			{
				crux[xp-2][yp-1]='X';
				crux[xp+2][yp-1]='X';
				crux[xp-2][yp+1]='X';
				crux[xp+2][yp+1]='X';
				crux[xp-1][yp-2]='X';
				crux[xp+1][yp-2]='X';
				crux[xp-1][yp+2]='X';
				crux[xp+1][yp+2]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='B') //lito
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='K')
			{
				crux[xp+1][yp-1]='X';
				crux[xp+1][yp]='X';
				crux[xp+1][yp+1]='X';
				crux[xp-1][yp-1]='X';
				crux[xp-1][yp]='X';
				crux[xp-1][yp+1]='X';
				crux[xp][yp-1]='X';
				crux[xp][yp+1]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='Q')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y+1]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y-1]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='P')
			{
				crux[xp-1][yp+1]='X';
				crux[xp-1][yp-1]='X';
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X'&&crux[x][y]=='x')
						{
							if(piezasb[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
		}
	}
	
	if(crux[j][h]=='X')
	{
		jaque=true;
	}
	return jaque;
}


bool jaqueb(bool elej, char piezasn[10][10], char piezasb[10][10], char borde[10][10], bool pen[8], bool peb[8], int h, int j)
{
	char crux[10][10];
	bool jaque=false;
	for(int x=0; x<=9; x++)for(int y=0; y<=9; y++)crux[x][y]=' ';
	for(int yp=0; yp<=9; yp++)
	{
		for(int xp=0; xp<=9; xp++)
		{
			if(piezasn[xp][yp]=='T')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='H')
			{
				crux[xp-2][yp-1]='X';
				crux[xp+2][yp-1]='X';
				crux[xp-2][yp+1]='X';
				crux[xp+2][yp+1]='X';
				crux[xp-1][yp-2]='X';
				crux[xp+1][yp-2]='X';
				crux[xp-1][yp+2]='X';
				crux[xp+1][yp+2]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='B')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			else if(piezasn[xp][yp]=='K')
			{
				crux[xp+1][yp-1]='X';
				crux[xp+1][yp]='X';
				crux[xp+1][yp+1]='X';
				crux[xp-1][yp-1]='X';
				crux[xp-1][yp]='X';
				crux[xp-1][yp+1]='X';
				crux[xp][yp-1]='X';
				crux[xp][yp+1]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='Q')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					crux[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					crux[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			else if(piezasn[xp][yp]=='P')
			{
				crux[xp+1][yp+1]='X';
				crux[xp+1][yp-1]='X';
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(crux[x][y]=='X'&&crux[x][y]=='x')
						{
							if(piezasn[x][y]!=' ')
							{
								crux[x][y]=' ';
							}
						}
					}
				}
			}
			///////////////////////////////////////////////////////////////////////////////////////////
		}
	}
	if(crux[j][h]=='X')
	{
		jaque=true;
	}
	
	return jaque;
}


void cruzz(bool elej, char piezasn[10][10], char piezasb[10][10], char cruz[10][10], char borde[10][10], bool pen[8], bool peb[8], int yp, int xp)
{
	if(elej==false)
	{	
		///////////////////////////////////////////////////////////////////////////////////////////
		if(piezasn[xp][yp]!=' ')
		{
			if(piezasn[xp][yp]=='T')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='H')
			{
				cruz[xp-2][yp-1]='X';
				cruz[xp+2][yp-1]='X';
				cruz[xp-2][yp+1]='X';
				cruz[xp+2][yp+1]='X';
				cruz[xp-1][yp-2]='X';
				cruz[xp+1][yp-2]='X';
				cruz[xp-1][yp+2]='X';
				cruz[xp+1][yp+2]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='B')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			else if(piezasn[xp][yp]=='K')
			{
				
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp+1)==false)
				{
				
					cruz[xp+1][yp-1]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp, xp+1)==false)
				{
				
					cruz[xp+1][yp]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp+1)==false)
				{
				
					cruz[xp+1][yp+1]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp-1)==false)
				{
				
					cruz[xp-1][yp-1]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp, xp-1)==false)
				{
				
					cruz[xp-1][yp]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp-1)==false)
				{
				
					cruz[xp-1][yp+1]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp)==false)
				{
				
					cruz[xp][yp-1]='X';
				
				}
				if(jaquen(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp)==false)
				{
				
					cruz[xp][yp+1]='X';
				
				}
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasn[xp][yp]=='Q')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x+1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y+1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x-1][y]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y-1]==' '&&piezasb[x][y]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			else if(piezasn[xp][yp]=='P')
			{
				cruz[xp+1][yp+1]='x';
				cruz[xp+1][yp-1]='x';
				if(piezasb[xp+1][yp]==' ')
				{
					cruz[xp+1][yp]='X';
					if(pen[yp-1]==true&&piezasb[xp+2][yp]==' ')
					{
						cruz[xp+2][yp]='X';
					}
				}
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X'&&cruz[x][y]=='x')
						{
							if(piezasn[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////////
		else if(piezasb[xp][yp]!=' ')
		{
			if(piezasb[xp][yp]=='T')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y+1]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y-1]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			else if(piezasb[xp][yp]=='H')
			{
				cruz[xp-2][yp-1]='X';
				cruz[xp+2][yp-1]='X';
				cruz[xp-2][yp+1]='X';
				cruz[xp+2][yp+1]='X';
				cruz[xp-1][yp-2]='X';
				cruz[xp+1][yp-2]='X';
				cruz[xp-1][yp+2]='X';
				cruz[xp+1][yp+2]='X';
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='B') 
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='K')
			{
				
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp+1)==false)
				{
				
					cruz[xp+1][yp-1]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp, xp+1)==false)
				{
				
					cruz[xp+1][yp]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp+1)==false)
				{
				
					cruz[xp+1][yp+1]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp-1)==false)
				{
				
					cruz[xp-1][yp-1]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp, xp-1)==false)
				{
				
					cruz[xp-1][yp]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp-1)==false)
				{
				
					cruz[xp-1][yp+1]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp-1, xp)==false)
				{
				
					cruz[xp][yp-1]='X';
				
				}
				if(jaqueb(elej, piezasn, piezasb, borde, pen, peb, yp+1, xp)==false)
				{
				
					cruz[xp][yp+1]='X';
				
				}
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='Q')
			{
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y-1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y+1]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x+1][y]==' '&&borde[x][y]==' '); c++)
				{
					x++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y+1]==' '&&borde[x][y]==' '); c++)
				{
					y++;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x-1][y]==' '&&borde[x][y]==' '); c++)
				{
					x--;
					cruz[x][y]='X';
				}
				for(int x=xp, y=yp, c=0; c<10&&(piezasn[x][y]==' '&&piezasb[x][y-1]==' '&&borde[x][y]==' '); c++)
				{
					y--;
					cruz[x][y]='X';
				}
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
			
			
			
			
			
			else if(piezasb[xp][yp]=='P')
			{
				cruz[xp-1][yp+1]='x';
				cruz[xp-1][yp-1]='x';
				if(piezasn[xp-1][yp]==' ')
				{
					cruz[xp-1][yp]='X';
					if(peb[yp-1]==true&&piezasn[xp-2][yp]==' ')
					{
						cruz[xp-2][yp]='X';
					}
				}
				
				for(int x=0; x<=10; x++)
				{
					for(int y=0; y<=10; y++)
					{
						if(cruz[x][y]=='X'&&cruz[x][y]=='x')
						{
							if(piezasb[x][y]!=' ')
							{
								cruz[x][y]=' ';
							}
						}
					}
				}
			}
		}
	}
}

/*
-variables enteras:
movtot = movimientos totales
xp = posicion en x del cursor
yp = posicion en y del cursor
axp = posicion en x anterior del cursor
ayp = posicion en y anterior del cursor
elej = determina si elegiste una pieza
coor = coordenadas de la ficha seleccionada

-variables booleanas:
mtbc = movimientos torre blanca "corta" (cerca de el rey)
mtbl = movimientos torre blanca "larga" (lejos del rey)

mtnc = movimientos torre negra "corta" (cerca de el rey)
mtnl = movimientos torre negra "larga" (lejos del rey)

gop = "ganar o perder" es para determinar si alguien gano
bom = "blancas o negras" es para determinar quien gano
elej = es para determinar los turnos (true = blancas , false = negras)

ren = "Rey Negro" es para saber si el rey negro se a movido
reb = "Rey Blanco" es para saber si el rey blanco se a movido

torrb1 = "Torre Blanca 1" es para saber si la torre-rey blanca se a movido
torrb2 = "Torre Blanca 2" es para saber si la torre-reyna blanca se a movido 

torrn1 = "Torre Negra 1" es para saber si la torre-rey negra se a movido
torrn2 = "Torre Negra 2" es para saber si la torre-reyna negra se a movido 


-variables alfanumericas:
tabla = el dibujo del tablero + el borde
piezasb = el plano en el que estan las piezas blancas
piezasn = el plano en el que estan las piezas negras
jugador = el plano por el que se mueve el "curzor"
bordes = solamente contiene los bordes del mapa
mov = resive el movimiento 
p = la pieza seleccionada





-ascii anotaciones:
207 = cursor
176 = cuadrado balnco
178 = cuadrado negro



-caracteres para cada pieza:
+ - - - - - - - - +
| T H B K Q B H T |
| P P P P P P P P |
|                 |
|                 |
|                 |
|                 | 
| P P P P P P P P |
| T H B K Q B H T |
+ - - - - - - - - +

*/

int main()
{
	int xp=5, yp=5, axp=xp, ayp=yp, coor[2];
	bool mtbc=false, mtbl=false, mtnc=false, mtnl=false, gop=false, bon=false, elej=false, pen[8], peb[8], tur=true, ren=true, reb=true;
	char tabla[10][10], piezasn[10][10], piezasb[10][10], jugador[10][10], borde[10][10], cruz[10][10], mov, p;
	for(int x=0; x<=9; x++)
	{
		for(int y=0; y<=9; y++)
		{
			pen[y]=true;
			peb[y]=true;
			borde[x][y]=' ';
			piezasn[x][y]=' ';
			piezasb[x][y]=' ';
			jugador[x][y]=' ';
			cruz[x][y]=' ';
			if(pow(-1,y)==1)
			{
				if(pow(-1,x)==1)
				{
					tabla[x][y]=176;
				}
				else
				{
					tabla[x][y]=178;
				}
			}
			else
			{
				if(pow(-1,x)==1)
				{
					tabla[x][y]=178;
				}
				else
				{
					tabla[x][y]=176;
				}
			}
		}
	}
	for(int x=0; x<=9; x++)
	{
		for(int y=0; y<=9; y++)
		{
			if(x==0&&(y>0&&y<9))
			{
				tabla[x][y]=205;
				borde[x][y]=205;
			}
			else if(x==9&&(y>0&&y<9))
			{
				tabla[x][y]=205;
				borde[x][y]=205;
			}
			else if((x>0&&x<9)&&y==0)
			{
				tabla[x][y]=186;
				borde[x][y]=186;
			}
			else if((x>0&&x<9)&&y==9)
			{
				tabla[x][y]=186;
				borde[x][y]=186;
			}
		}
	}
	// esquinas decoracion
	tabla[0][0]=201;
	tabla[0][9]=187;
	tabla[9][0]=200;
	tabla[9][9]=188;
	
	borde[0][0]=201;
	borde[0][9]=187;
	borde[9][0]=200;
	borde[9][9]=188;
	
	//Piezas
	piezasn[1][1]='T';
	piezasn[1][2]='H';
	piezasn[1][3]='B';
	piezasn[1][4]='K';
	piezasn[1][5]='Q';
	piezasn[1][6]='B';
	piezasn[1][7]='H';
	piezasn[1][8]='T';
	
	piezasn[2][1]='P';
	piezasn[2][2]='P';
	piezasn[2][3]='P';
	piezasn[2][4]='P';
	piezasn[2][5]='P';
	piezasn[2][6]='P';
	piezasn[2][7]='P';
	piezasn[2][8]='P';
	
	piezasb[8][1]='T';
	piezasb[8][2]='H';
	piezasb[8][3]='B';
	piezasb[8][4]='K';
	piezasb[8][5]='Q';
	piezasb[8][6]='B';
	piezasb[8][7]='H';
	piezasb[8][8]='T';
	
	piezasb[7][1]='P';
	piezasb[7][2]='P';
	piezasb[7][3]='P';
	piezasb[7][4]='P';
	piezasb[7][5]='P';
	piezasb[7][6]='P';
	piezasb[7][7]='P';
	piezasb[7][8]='P';
	
	
	
	//experimental:
	/*
	piezasn[4][1]='P';
	piezasn[4][2]='P';
	piezasn[4][3]='P';
	piezasn[4][4]='P';
	piezasn[4][5]='P';
	piezasn[4][6]='P';
	piezasn[4][7]='P';
	piezasn[4][8]='P';
	piezasb[5][1]='P';
	piezasb[5][2]='P';
	piezasb[5][3]='P';
	piezasb[5][4]='P';
	piezasb[5][5]='P';
	piezasb[5][6]='P';
	piezasb[5][7]='P';
	piezasb[5][8]='P';
	*/
	
	while(gop==false)
	{
		axp=xp;
		ayp=yp;
		system("cls");
		cout<<"Mueve el 'cursor' con W,A,S y D , selecciona la pieza que deseas mover con espacio, luego de seleccionarlo, elije a donde quieres mover la pieza"<<endl;
		for(int x=0; x<=9; x++)
		{
			for(int y=0; y<=9; y++)
			{
				if(borde[x][y]!=' ')
				{
					cout<<borde[x][y]<<" ";
				}
				else if(jugador[x][y]!=' ')
				{
					cout<<jugador[x][y]<<" ";
				}
				else if(cruz[x][y]!=' ')
				{
					cout<<cruz[x][y]<<" ";
				}
				else if(piezasn[x][y]!=' ')
				{
					cout<<piezasn[x][y]<<"b";
				}
				else if(piezasb[x][y]!=' ')
				{
					cout<<piezasb[x][y]<<"w";
				}
				else
				{
					cout<<tabla[x][y]<<" ";
				}
			}
			cout<<endl;
		}
		
		cout<<"turno : ";
		if(tur==true) cout<<"blancas"<<endl;
		else cout<<"negras"<<endl;
		cout<<endl;
		
		if((reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 2, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 3, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][2]==' '&&piezasb[8][3]==' ')
		||(reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 6, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 5, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][5]==' '&&piezasb[8][6]==' '&&piezasb[8][7]==' '))
		{
			cout<<"¡esta desponible el enroque para las blancas! ('e' para usarlo)"<<endl;
		}
		if((ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 2, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 3, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][2]==' '&&piezasn[1][3]==' ')
		||(ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 6, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 5, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][5]==' '&&piezasn[1][6]==' '&&piezasn[1][7]==' '))
		{
			cout<<"¡esta desponible el enroque para las negras! ('e' para usarlo)"<<endl;
		}
		cout<<endl;
		
		mov=getch();
		jugador[xp][yp]=' ';
		switch(mov)
		{
			case'w':{
				xp--;
				break;
			}
			case'a':{
				yp--;
				break;
			}
			case's':{
				xp++;
				break;
			}
			case'd':{
				yp++;
				break;
			}
			case' ':{
				if(elej==false)
				{
					if(tur==true)
					{
						if(piezasb[xp][yp]!=' ')
						{
							p=piezasb[xp][yp];
							coor[0]=xp;
							coor[1]=yp;
							elej=true;
						}
					}
					else
					{
						if(piezasn[xp][yp]!=' ')
						{
							p=piezasn[xp][yp];
							coor[0]=xp;
							coor[1]=yp;
							elej=true;
						}
					}
				}
				else 
				{
					if(cruz[xp][yp]=='X')
					{
						if(tur==true)
						{
							if(p=='K')
							{
								reb=false;
							}
							if(p!='P')
							{
								piezasb[xp][yp]=p;
								piezasb[coor[0]][coor[1]]=' ';
								piezasn[xp][yp]=' ';
								tur=false;
							}
							else if(piezasb[xp][yp]==' ')
							{
								piezasb[xp][yp]=p;
								piezasb[coor[0]][coor[1]]=' ';
								tur=false;
								peb[coor[1]-1]=false;
							}
							elej=false;
						}
						else
						{
							if(p=='K')
							{
								ren=false;
							}
							if(p!='P')
							{
								piezasn[xp][yp]=p;
								piezasn[coor[0]][coor[1]]=' ';
								piezasb[xp][yp]=' ';
								tur=true;
							}
							else if(piezasb[xp][yp]==' ')
							{
								piezasn[xp][yp]=p;
								piezasn[coor[0]][coor[1]]=' ';
								tur=true;
								pen[coor[1]-1]=false;
							}
							elej=false;
						}
					}
					else if(cruz[xp][yp]=='x')
					{
						if(tur==true)
						{
							if(piezasn[xp][yp]!=' ')
							{
								piezasb[xp][yp]=p;
								piezasb[coor[0]][coor[1]]=' ';
								piezasn[xp][yp]=' ';
								tur=false;
								elej=false;
							}
							else
							{
								elej=false;
							}
						}
						else
						{
							if(piezasb[xp][yp]!=' ')
							{
								piezasn[xp][yp]=p;
								piezasn[coor[0]][coor[1]]=' ';
								piezasb[xp][yp]=' ';
								tur=false;
								elej=false;
							}
							else
							{
								elej=false;
							}
						}
					}
					else
					{
						elej=false;
					}
				}
				break;
			}
			case'e':{
				if(tur==true)
				{
					/*
					cout<<"reb = "<<reb<<endl;
					cout<<"jaqueb en 8 2 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 2, 8)<<endl;
					cout<<"jaqueb en 8 3 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 3, 8)<<endl;
					cout<<"jaqueb en 8 4 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)<<endl;
					cout<<"piezasb en 8 2 = "<<piezasb[8][2]<<endl;
					cout<<"piezasb en 8 3 = "<<piezasb[8][3]<<endl<<endl<<endl;
					
					cout<<"reb = "<<reb<<endl;
					cout<<"jaqueb en 8 6 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 6, 8)<<endl;
					cout<<"jaqueb en 8 5 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 5, 8)<<endl;
					cout<<"jaqueb en 8 4 = "<<jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)<<endl;
					cout<<"piezasb en 8 5 = "<<piezasb[8][5]<<endl;
					cout<<"piezasb en 8 6 = "<<piezasb[8][6]<<endl;
					cout<<"piezasb en 8 7 = "<<piezasb[8][7]<<endl;
					getch();
					*/
					if((reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 2, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 3, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][2]==' '&&piezasb[8][3]==' ')
					&&(reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 6, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 5, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][5]==' '&&piezasb[8][6]==' '&&piezasb[8][7]==' '))
					{
						cout<<"estan disponibles los dos tipos de jaque!(corto y largo)"<<endl;
						cout<<"Selecciona cual quieres jugar"<<endl;
						cout<<"1)corto               2)largo"<<endl<<endl;
						cout<<"Si no queres hacer enroque apreta el boton 'q'"<<endl;
						mov=getch();
						for(int x=0; x==0;)
						{
							switch(mov)
							{
								case'1':{
									piezasb[8][1]=' ';
									piezasb[8][3]='T';
									piezasb[8][2]='K';
									piezasb[8][4]=' ';
									reb=false;
									tur=false;
									x=1;
									break;
								}
								case'2':{
									piezasb[8][8]=' ';
									piezasb[8][5]='T';
									piezasb[8][6]='K';
									piezasb[8][4]=' ';
									reb=false;
									tur=false;
									x=1;
									break;
								}
								case'q':{
									x=1;
									break;
								}
								default:{
									cout<<"No seleccionaste ninguno de los dos, vuelve a intentarlo"<<endl;
									break;
								}
							}
						}
					}
					else if(reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 6, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 5, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][5]==' '&&piezasb[8][6]==' '&&piezasb[8][7]==' ')
					{
						piezasb[8][8]=' ';
						piezasb[8][5]='T';
						piezasb[8][6]='K';
						piezasb[8][4]=' ';
						reb=false;
						tur=false;
					}
					else if(reb==true&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 2, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 3, 8)==false&&jaqueb(elej, piezasn, piezasb, borde, pen, peb, 4, 8)==false&&piezasb[8][2]==' '&&piezasb[8][3]==' ')
					{
						piezasb[8][1]=' ';
						piezasb[8][3]='T';
						piezasb[8][2]='K';
						piezasb[8][4]=' ';
						reb=false;
						tur=false;
					}
				}
				else// if (tur==false)
				{
					/*
					cout<<"ren = "<<ren<<endl;
					cout<<"jaquen en 1 2 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 2, 1)<<endl;
					cout<<"jaquen en 1 3 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 3, 1)<<endl;
					cout<<"jaquen en 1 4 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)<<endl;
					cout<<"piezasn en 1 2 = "<<piezasn[1][2]<<endl;
					cout<<"piezasn en 1 3 = "<<piezasn[1][3]<<endl<<endl<<endl;
					
					cout<<"ren = "<<ren<<endl;
					cout<<"jaquen en 1 6 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 6, 1)<<endl;
					cout<<"jaquen en 1 5 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 5, 1)<<endl;
					cout<<"jaquen en 1 4 = "<<jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)<<endl;
					cout<<"piezasn en 1 5 = "<<piezasn[1][5]<<endl;
					cout<<"piezasn en 1 6 = "<<piezasn[1][6]<<endl;
					cout<<"piezasn en 1 7 = "<<piezasn[1][7]<<endl;
					getch();
					*/
					if((ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 2, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 3, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][2]==' '&&piezasn[1][3]==' ')
					&&(ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 6, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 5, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][5]==' '&&piezasn[1][6]==' '&&piezasn[1][7]==' '))
					{
						cout<<"estan disponibles los dos tipos de jaque!(corto y largo)"<<endl;
						cout<<"Selecciona cual quieres jugar"<<endl;
						cout<<"1)corto               2)largo"<<endl<<endl;
						cout<<"Si no queres hacer enroque apreta el boton 'q'"<<endl;
						mov=getch();
						for(int x=0; x==0;)
						{
							switch(mov)
							{
								case'1':{
									piezasn[1][1]=' ';
									piezasn[1][3]='T';
									piezasn[1][2]='K';
									piezasn[1][4]=' ';
									ren=false;
									tur=true;
									x=1;
									break;
								}
								case'2':{
									piezasn[1][8]=' ';
									piezasn[1][5]='T';
									piezasn[1][6]='K';
									piezasn[1][4]=' ';
									ren=false;
									tur=true;
									x=1;
									break;
								}
								case'q':{
									x=1;
									break;
								}
								default:{
									cout<<"No seleccionaste ninguno de los dos, vuelve a intentarlo"<<endl;
									break;
								}
							}
						}
						
					}
					else if(ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 2, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 3, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][2]==' '&&piezasn[1][3]==' ')
					{
						piezasn[1][1]=' ';
						piezasn[1][2]='K';
						piezasn[1][3]='T';
						piezasn[1][4]=' ';
						ren=false;
						tur=true;
					}
					else if(ren==true&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 6, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 5, 1)==false&&jaquen(elej, piezasn, piezasb, borde, pen, peb, 4, 1)==false&&piezasn[1][5]==' '&&piezasn[1][6]==' '&&piezasn[1][7]==' ')
					{
						piezasn[1][8]=' ';
						piezasn[1][6]='K';
						piezasn[1][5]='T';
						piezasn[1][4]=' ';
						ren=false;
						tur=true;
					}
				}
				break;
			}
		}
		
		
		if(borde[xp][yp]!=' ')
		{
			xp=axp;
			yp=ayp;
		}
		jugador[xp][yp]=207;
		
		for(int y=1, x=0; y<9&&x==0; y++)
		{
			if(piezasn[1][y]=='P')
			{
				piezasn[1][y]='Q';
				x=1;
			}
			else if(piezasb[1][y]=='P')
			{
				piezasb[1][y]='Q';
				x=1;
			}
		}
		
		
		
		if(elej==false)
		{
			for(int x=0; x<=10; x++)
			{
				for(int y=0; y<=10; y++)
				{
					cruz[x][y]=' ';
				}
			}
		}
		
		cruzz(elej, piezasn, piezasb, cruz, borde, pen, peb, yp, xp);
		
		
		
		
		gop=true;
		for(int x=0; x<=10; x++)
		{
			for(int y=0; y<=10; y++)
			{
				if(piezasn[x][y]=='K')gop=false;
			}
		}
		if(gop==true)
		{
			bon=true;
		}
		else
		{
			for(int x=0; x<=10; x++)
			{
				for(int y=0; y<=10; y++)
				{
					if(piezasn[x][y]=='K')gop=false;
				}
			}
			if(gop==true)
			{
				bon=false;
			}
		}
	}
	system("cls");
	for(int x=0; x<=9; x++)
	{
		for(int y=0; y<=9; y++)
		{
			if(borde[x][y]!=' ')
			{
				cout<<borde[x][y]<<" ";
			}
			else if(piezasn[x][y]!=' ')
			{
				cout<<piezasn[x][y]<<"b";
			}
			else if(piezasb[x][y]!=' ')
			{
				cout<<piezasb[x][y]<<"w";
			}
			else
			{
				cout<<tabla[x][y]<<" ";
			}
			
		}
		cout<<endl;
	}
	if(bon==true)
	{
		cout<<"ganaron las blancas"<<endl;
	}
	else
	{
		cout<<"ganaron las negras"<<endl;
	}
	getch();
	return 0;
}
