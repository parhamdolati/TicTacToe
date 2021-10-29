#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define AA (char)185
#define AB (char)186
#define AC (char)187
#define AD (char)188
#define AE (char)200
#define AF (char)201
#define AG (char)202
#define AH (char)203
#define AI (char)204
#define AJ (char)205
#define AK (char)206
#define AL (char)259
using namespace std;
void jadwal (string a)
{
	int x=a.size();
	for (int i=0 ; i<x+4 ; i++)
	{
		if (i==0) cout<<(char)201;
		else if (i==x+3) cout<<(char)187;
		else cout<<(char)205;
	}
	cout<<endl;
	for (int i=0 ; i<x+4 ; i++)
	{
		if (i==0 || i==x+3) cout<<(char)186;
		else if (i==1 || i==x+2) cout<<" ";
		else cout<<a[i-2];
	}
	cout<<endl;
	for (int i=0 ; i<x+4 ; i++)
	{
		if (i==0) cout<<(char)200;
		else if (i==x+3) cout<<(char)188<<endl;
		else cout<<(char)205;
	}
}
char g[2],k[3],h[4],o[5],l[6],m[7],q[8];
void ghaleb (int p)
{
		
	for (int i=0 ; i<(4*p+1) ; i++)
	{
		if (i==0) cout<<(char)201;
		else if (i%4==0 && i!=4*p) cout<<(char)203;
		else if (i==4*p) cout<<(char)187;
		else cout<<(char)205;
	}
	cout<<endl;
	if (p==2)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<g[z];z++; }
	}
	else if (p==3)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<k[z];z++; }
	}
	else if (p==4)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<h[z];z++; }
	}
	else if (p==5)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<o[z];z++; }
	}
	else if (p==6)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<l[z];z++; }
	}
	else if (p==7)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<m[z];z++; }
	}
	else if (p==8)
	for (int i=0,z=0; i<(4*p+1) ; i++)
	{
		if (i==0 || i%4==0) cout<<(char)186;
		else if (i==1 || i==3 || (i-1)%4==0 || (i-3)%4==0) cout<<" ";
		else if (i==2 || (i-2)%4==0) { cout<<q[z];z++; }
	}
	cout<<endl;
	for (int i=0 ; i<(4*p+1) ; i++)
	{
		if (i==0) cout<<(char)200;
		else if (i%4==0 && i!=4*p) cout<<(char)202;
		else if (i==4*p) cout<<(char)188;
		else cout<<(char)205;
	}
	cout<<endl;
}
int main()
{
	Beep(rand()%400+1100,400);
	int n;
	cout<<"\t\t\t**********************\n\t\t\t* IN The Name of God *\n\t\t\t**********************\n\n";
	while (true)
	{
	system ("color B");
	cout<<"Enter one of the following numbers ! \n";
	cout<<"1.Duzz !\n2.Guess the word !\n3.Exit !\n\n==> ";
		cin>>n;
		if(n>3 || n<1)
			{ system("cls") ; continue; }
		if(n==1)
		{
			Beep(rand()%400+1100,400);
			int i,j,u=0,s=0;
			char g[3][3];
			system ("color C");
    		cout<<"________________________________________________________________________________";
			cout<<"\n\n\t\t\t "<<char(205)<<char(185)<<" Welcome to Duzz "<<char(204)<<char(205);
			cout<<"\n\t\t\t   "<<AF<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AC<<"\n";
			cout<<"\t\t\t   "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<"\n";
   		 	cout<<"\t\t\t   "<<AI<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
			cout<<"\t\t\t   "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<"\n";	
			cout<<"\t\t\t   "<<AI<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
			cout<<"\t\t\t   "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<" "<<" "<<" "<<" "<<AB<<"\n";		
			cout<<"\t\t\t   "<<AE<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AD<<"\n";

    		cout<<"press any for Start\n";
   			for(int i=0;i<3;i++)
    		{
    			for(int j=0;j<3;j++)
    				g[i][j]=' ';
   			}
    		getch();
			system ("cls");
    		cout<<"\t\t\t\t"<<AF<<AJ<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AJ<<AC<<"\n";
			cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[0][0]<<" "<<" "<<AB<<" "<<" "<<g[0][1]<<" "<<" "<<AB<<" "<<" "<<g[0][2]<<" "<<" "<<AB<<"\n";
    		cout<<"\t\t\t\t"<<AI<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
			cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[1][0]<<" "<<" "<<AB<<" "<<" "<<g[1][1]<<" "<<" "<<AB<<" "<<" "<<g[1][2]<<" "<<" "<<AB<<"\n";	
			cout<<"\t\t\t\t"<<AI<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
			cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[2][0]<<" "<<" "<<AB<<" "<<" "<<g[2][1]<<" "<<" "<<AB<<" "<<" "<<g[2][2]<<" "<<" "<<AB<<"\n";		
			cout<<"\t\t\t\t"<<AE<<AJ<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AJ<<AD<<"\n\n\n\n";
   
	      	while (true)
	        {
	        	Beep(rand()%400+1100,400);
	            if(s==0)
	           {
	          	system ("color A");
	          	cout<<"X start\n";
	          	cout<<"line= ";
	          	cin>>i;
	          	cout<<"column= ";
	          	cin>>j;
                if (i<=3 && i>=1 && j<=3 && j>=1)
                {
                  if(g[i-1][j-1]==' ')
	            	{
	                 g[i-1][j-1]='X';
	                 u++;
	                 s=1;
                    }
	            }
			    }	
			    else if(s==1)
			    {
			    system ("color A");
			   	cout<<"O start\n";
			   	cout<<"line= ";
			   	cin>>i;
			   	cout<<"column= ";
		    	cin>>j;
	            if (i<=3 && i>=1 && j<=3 && j>=1)
	            {
                if(g[i-1][j-1]==' ')
	             	{
                     g[i-1][j-1]='O';
                     u++;
                     s=0;
                    }   
                }
                }	
			 
                system ("cls");
                cout<<"\t\t\t\t"<<AF<<AJ<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AJ<<AH<<AJ<<AJ<<AJ<<AJ<<AJ<<AC<<"\n";
          	    cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[0][0]<<" "<<" "<<AB<<" "<<" "<<g[0][1]<<" "<<" "<<AB<<" "<<" "<<g[0][2]<<" "<<" "<<AB<<"\n";
                cout<<"\t\t\t\t"<<AI<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
	            cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[1][0]<<" "<<" "<<AB<<" "<<" "<<g[1][1]<<" "<<" "<<AB<<" "<<" "<<g[1][2]<<" "<<" "<<AB<<"\n";	
	            cout<<"\t\t\t\t"<<AI<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AK<<AJ<<AJ<<AJ<<AJ<<AJ<<AA<<"\n";
	            cout<<"\t\t\t\t"<<AB<<" "<<" "<<g[2][0]<<" "<<" "<<AB<<" "<<" "<<g[2][1]<<" "<<" "<<AB<<" "<<" "<<g[2][2]<<" "<<" "<<AB<<"\n";		
	            cout<<"\t\t\t\t"<<AE<<AJ<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AJ<<AG<<AJ<<AJ<<AJ<<AJ<<AJ<<AD<<"\n\n\n\n";

					 
	        
	            if (g[0][0]=='X' && g[0][1]=='X' && g[0][2]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[1][0]=='X' && g[1][1]=='X' && g[1][2]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[2][0]=='X' && g[2][1]=='X' && g[2][2]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[0][0]=='X' && g[1][1]=='X' && g[2][2]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[0][2]=='X' && g[1][1]=='X' && g[2][0]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[0][0]=='X' && g[1][0]=='X' && g[2][0]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[0][1]=='X' && g[1][1]=='X' && g[2][1]=='X') { cout<<"Congratulation X won"; break;}
                else if (g[0][2]=='X' && g[1][2]=='X' && g[2][2]=='X') { cout<<"Congratulation X won"; break;}
            
                else if (g[0][0]=='O' && g[0][1]=='O' && g[0][2]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[1][0]=='O' && g[1][1]=='O' && g[1][2]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[2][0]=='O' && g[2][1]=='O' && g[2][2]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[0][0]=='O' && g[1][1]=='O' && g[2][2]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[0][2]=='O' && g[1][1]=='O' && g[2][0]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[0][0]=='O' && g[1][0]=='O' && g[2][0]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[0][1]=='O' && g[1][1]=='O' && g[2][1]=='O') { cout<<"Congratulation O won"; break;}
                else if (g[0][2]=='O' && g[1][2]=='O' && g[2][2]=='O') { cout<<"Congratulation O won"; break;}
            
                else if (u==9) {cout<<"Drawn";break; }
	        }
	        Beep(rand()%400+1100,400);
		    system ("color E");
			cout<<"\n\nthank you\n\n";
	        	for(int i=0;i<3;i++)
            	{
            		for(int j=0;j<3;j++)
    		    	g[i][j]=' ';
            	}   
        cout<<"Prees any for Restart !";
        _getch();
        Beep(rand()%400+1100,400);
		system ("cls");  
		}
		/*else if(n==2)
		{
			Beep(rand()%400+1100,400);
			system ("color C");
			cout<<"________________________________________________________________________________\n\n";
			cout<<"\t\t   "<<char(205)<<char(185)<<" Welcome to Sodoko "<<char(204)<<char(205);
			system ("color E");
			cout<<"\n\nPrees any for Restart !";
        _getch();
        Beep(rand()%400+1100,400);
		system ("cls"); 	
		}*/
		else if(n==2)
		{
			Beep(rand()%400+1100,400);
			char v;
			int t,w;
			int b[5];
			for(int j=0;j<2;j++) g[j]=' ';
			for(int j=0;j<3;j++) k[j]=' ';
			for(int j=0;j<4;j++) h[j]=' ';
			for(int j=0;j<5;j++) o[j]=' ';
			for(int j=0;j<6;j++) l[j]=' ';
			for(int j=0;j<7;j++) m[j]=' ';
			for(int j=0;j<8;j++) q[j]=' ';
			for (int i=0;i<5;i++) b[i]=0;
			system ("color C");
    		cout<<"________________________________________________________________________________\n\n";
			cout<<"\t\t   "<<char(205)<<char(185)<<" Welcome to Guess the word "<<char(204)<<char(205);
			cout<<"\n\nAttention:\n* Language's game is Fenglish !";
			cout<<"\n* Tern Off caps lock !";
			cout<<"\n* You can make mistakes just fore time !";
			cout<<"\n* According to the guide , find words !";
			cout<<"\n\npress any for Start\n";
			_getch();
			Beep(rand()%400+1100,400);
			system ("cls");
			system ("color A");
			for (int i=1;i<6;i++)
			{
				int c=5;
				t=1;
				w=1;
				if (i!=1)
				{
				for(int j=0;j<2;j++) g[j]=' ';
				for(int j=0;j<3;j++) k[j]=' ';
				for(int j=0;j<4;j++) h[j]=' ';
				for(int j=0;j<5;j++) o[j]=' ';
				for(int j=0;j<6;j++) l[j]=' ';
				for(int j=0;j<7;j++) m[j]=' ';
				for(int j=0;j<8;j++) q[j]=' ';
				}
				int y = rand()%2+1;
				int x = rand()%5+1;
				for (int j=0;j<=i;j++)
					if (b[j]==x) 
					{
						i--;
						w=0;
						break;
					}
				if (w==1)	
				{
				b[i-1]=x;
				cout<<"LeVeL : "<<i<<endl;
				if (x==1)
				{
					jadwal("damavand");
					if(y==1)
					{	
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(4);
						while (c>0)
						{
							cin>>v;
							if (v=='d') h[0]='d';
							else if (v=='e') h[1]='e';
							else if (v=='n') h[2]='n';
							else if (v=='a') h[3]='a';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("damavand");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(4);
							
							if (h[0]=='d'&&h[1]=='e'&&h[2]=='n'&&h[3]=='a') break;
							else if (c==0)
								if (h[0]==' '||h[1]==' '||h[2]==' '||h[3]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
					else if(y==2)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(7);
						while (c>0)
						{
							cin>>v;
							if (v=='g') m[0]='g';
							else if (v=='h') m[1]='h';
							else if (v=='a') m[2]='a';
							else if (v=='n') m[3]='n';
							else if (v=='d') m[4]='d';
							else if (v=='i') m[5]='i';
							else if (v=='l') m[6]='l';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("damavand");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(7);
							
							if (m[0]=='g'&&m[1]=='h'&&m[2]=='a'&&m[3]=='n'&&m[4]=='d'&&m[5]=='i'&&m[6]=='l') break;
							else if (c==0)
								if (m[0]==' '||m[1]==' '||m[2]==' '||m[3]==' '||m[4]==' '||m[5]==' '||m[6]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
				}
				else if (x==2)
				{
					jadwal("ghorme sabzi");
					if(y==1)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(8);
						while (c>0)
						{
							cin>>v;
							if (v=='m') q[0]='m';
							else if (v=='a') q[1]=q[3]='a';
							else if (v=='k') q[2]='k';
							else if (v=='r') q[4]='r';
							else if (v=='o') q[5]='o';
							else if (v=='n') q[6]='n';
							else if (v=='i') q[7]='i';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("ghorme sabzi");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(8);
							
							if (q[0]=='m'&&q[1]=='a'&&q[2]=='k'&&q[3]=='a'&&q[4]=='r'&&q[5]=='o'&&q[6]=='n'&&q[7]=='i') break;
							else if (c==0)
								if (q[0]==' '||q[1]==' '||q[2]==' '||q[3]==' '||q[4]==' '||q[5]==' '||q[6]==' '||q[7]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
					else if(y==2)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(8);
						while (c>0)
						{
							cin>>v;
							if (v=='f') q[0]='f';
							else if (v=='e') q[1]=q[3]='e';
							else if (v=='s') q[2]='s';
							else if (v=='n') q[4]=q[7]='n';
							else if (v=='j') q[5]='j';
							else if (v=='a') q[6]='a';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("ghorme sabzi");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(8);
							
							if (q[0]=='f'&&q[1]=='e'&&q[2]=='s'&&q[3]=='e'&&q[4]=='n'&&q[5]=='j'&&q[6]=='a'&&q[7]=='n') break;
							else if (c==0)
								if (q[0]==' '||q[1]==' '||q[2]==' '||q[3]==' '||q[4]==' '||q[5]==' '||q[6]==' '||q[7]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
				}
				else if (x==3)
				{
					jadwal("iphone");
					if(y==1)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(7);
						while (c>0)
						{
							cin>>v;
							if (v=='a') m[0]='a';
							else if (v=='n') m[1]='n';
							else if (v=='d') m[2]=m[6]='d';
							else if (v=='r') m[3]='r';
							else if (v=='o') m[4]='o';
							else if (v=='i') m[5]='i';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("iphone");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(7);
							
							if (m[0]=='a'&&m[1]=='n'&&m[2]=='d'&&m[3]=='r'&&m[4]=='o'&&m[5]=='i'&&m[6]=='d') break;
							else if (c==0)
								if (m[0]==' '||m[1]==' '||m[2]==' '||m[3]==' '||m[4]==' '||m[5]==' '||m[6]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
					else if(y==2)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(5);
						while (c>0)
						{
							cin>>v;
							if (v=='n') o[0]='n';
							else if (v=='o') o[1]='o';
							else if (v=='k') o[2]='k';
							else if (v=='i') o[3]='i';
							else if (v=='a') o[4]='a';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("iphone");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(5);
							
							if (o[0]=='n'&&o[1]=='o'&&o[2]=='k'&&o[3]=='i'&&o[4]=='a') break;
							else if (c==0)
								if (o[0]==' '||o[1]==' '||o[2]==' '||o[3]==' '||o[4]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
				}
				else if (x==4)
				{
					jadwal("jaro barghi");
					if(y==1)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(8);
						while (c>0)
						{
							cin>>v;
							if (v=='y') q[0]='y';
							else if (v=='a') q[1]=q[6]='a';
							else if (v=='k') q[2]='k';
							else if (v=='h') q[3]=q[5]='h';
							else if (v=='c') q[4]='c';
							else if (v=='l') q[7]='l';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("jaro barghi");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(8);
							
							if (q[0]=='y'&&q[1]=='a'&&q[2]=='k'&&q[3]=='h'&&q[4]=='c'&&q[5]=='h'&&q[6]=='a'&&q[7]=='l') break;
							else if (c==0)
								if (q[0]==' '||q[1]==' '||q[2]==' '||q[3]==' '||q[4]==' '||q[5]==' '||q[6]==' '||q[7]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
					else if(y==2)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(4);
						while (c>0)
						{
							cin>>v;
							if (v=='m') h[0]='m';
							else if (v=='o') h[1]='o';
							else if (v=='b') h[2]='b';
							else if (v=='l') h[3]='l';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("jaro barghi");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(4);
							
							if (h[0]=='m'&&h[1]=='o'&&h[2]=='b'&&h[3]=='l') break;
							else if (c==0)
								if (h[0]==' '||h[1]==' '||h[2]==' '||h[3]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
				}
				else if (x==5)
				{
					jadwal("shalvar");
					if(y==1)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(5);
						while (c>0)
						{
							cin>>v;
							if (v=='j') o[0]='j';
							else if (v=='o') o[1]='o';
							else if (v=='r') o[2]='r';
							else if (v=='a') o[3]='a';
							else if (v=='b') o[4]='b';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("shalvar");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(5);
							
							if (o[0]=='j'&&o[1]=='o'&&o[2]=='r'&&o[3]=='a'&&o[4]=='b') break;
							else if (c==0)
								if (o[0]==' '||o[1]==' '||o[2]==' '||o[3]==' '||o[4]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
					else if(y==2)
					{
						cout<<"Wrong : "<<c-1<<endl;
						ghaleb(7);
						while (c>0)
						{
							cin>>v;
							if (v=='k') m[0]='k';
							else if (v=='a') m[1]='a';
							else if (v=='p') m[2]='p';
							else if (v=='s') m[3]='s';
							else if (v=='h') m[4]='h';
							else if (v=='e') m[5]='e';
							else if (v=='n') m[6]='n';
							else c--;
							system ("cls");
							
							cout<<"LeVeL : "<<i<<endl;
							jadwal("shalvar");
							if (c!=0) cout<<"Wrong : "<<c-1<<endl;
							else cout<<"Wrong : "<<c<<endl;
							ghaleb(7);
							
							if (m[0]=='k'&&m[1]=='a'&&m[2]=='p'&&m[3]=='s'&&m[4]=='h'&&m[5]=='e'&&m[6]=='n') break;
							else if (c==0)
								if (m[0]==' '||m[1]==' '||m[2]==' '||m[3]==' '||m[4]==' '||m[5]==' '||m[6]==' ')
								{
									t=0;
									i=6;
									break;
								}
						}
					}
				}
			if(i<5) {cout<<"\nPrees any key for next . . .\n"; _getch();}
			Beep(rand()%400+1100,400);
			if(i<5) system("cls");
			}
			}
		system ("color E");
		if(t==1) cout<<"\n\nCongratulation You Won !";
		else cout<<"\nYou loss !";
		cout<<"\n\nPrees any key for Restart !";
        _getch();
        Beep(rand()%400+1100,400);
        system("cls");
		}
		else if(n==3) 
		{
		Beep(rand()%400+1100,400);
		return 0;
		}
	}
_getch();
return 0;
}

