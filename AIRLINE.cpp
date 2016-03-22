#include<fstream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
void res_menu();
void help();
void colyb()
{
textcolor(YELLOW);
textbackground(BLUE);
}
void coldes(int a,int b)
{
textcolor(a);
textbackground(b);
}
void s(int i,int j)
	{
	for(int a=i;a>0;a-=j)sound (a);
	}
void saund(int j)
	{
	j=0;
	for(int i=20;i<20000;i+=1000)
	{sound(i);delay(j);nosound();}
	}
class address
{      protected :
		    char hno[10],city[30],post[30],colony[30],pin[10];
       public :
	    void address_inp()
		    {
		    cout<<"House No.       :            \n";gets(hno);
		    cout<<"Colony          :            \n";gets(colony);
		    cout<<" Post           :            \n";gets(post);
		    cout<<" City           :            \n";gets(city);
		    cout<<"Pin Code No.    :            \n";gets(pin);
		    }
	    void address_out()
		 {
		   cout<< hno<<" , "<<colony<<" , "<<post<< " ,"  <<city<<" - "<<pin;
		 }
	    };

class p_det
{
		protected :
		address add;
		float age;
		char name[40];
		char sex;
		public:

		void p_det_inp()
		{   colyb();
		    cout<<" Enter Name                :\n";gets(name);
		    cout<<" Enter Address             :\n ";add.address_inp();
		    cout<<" Enter age (Years.Months)  :\n";cin>>age;
		    cout<<" Enter sex group (M / F)   : \n";cin>>sex;


		}
		void p_det_out()
		{   colyb();
		    cout<<"PERSONAL DETAILS\n";
		    cout<<"  Name                : \n";puts(name);
		    cout<<"  Adress              : \n";add.address_out();
		    cout<<"  Age (Years.Months)  : \n";cout<<age;
		    cout<<"  Sex group (M/F)     : \n";cout<<sex;
		    delay(500);
		    }

		void assign_name(p_det p,char str[]);
		};
		void p_det :: assign_name(p_det p,char str[])
		{
		strcpy(str,p.name);
		}

		int dd,mm,yy;
				void dat_inp()
			  {
				h:
				cout<<"	      date  :dd  :  \n";cin>>dd;
				cout<<"	     month  :mm  :  \n";cin>>mm;
				if((dd>31) || (mm>12))
				 {
				 cout<<"the date is invalid\n";
				 goto h;
				  }

				 cout<<"      year   :yy  :  \n";cin>>yy;


			  }
		    void dat_out()
			 {
			    if( (dd>0 && dd<31) && (mm>0 && mm <13) )
				{
				cout<<"DATE : \n" <<dd<<" # "<<mm<<" # "<<yy;

				delay(500);
				}
			 }

class res
	  {
		char fcode[5];char to[15],from[15],via[15];
		float fare;
		public :
		p_det p;
	  void dest_out()
	  {
	  cout<<"\n              from  : ";puts(from);
	  cout<<"\t              via   : ";puts(via);
	  cout<<"\t              to    : ";puts(to);
	  }
	  void res_inp()
		{
		textcolor(RED);
		clrscr();
		res_menu();
		cout<<"   RESERVATION FORM\n";
		cout<<"                   ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ\n";
		cout<<"Enter flight code : \n";gets(fcode);
		if( strcmp(fcode,"0871")==0 )
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"DELHI");strcpy(via,"ÄÄ");
		   fare=100;
		   }
		else if(strcmp(fcode,"0037")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"CHENNAI");strcpy(via,"DELHI");
		   fare=700;
		   }
		else if(strcmp(fcode,"1070")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"COCHIN");strcpy(via,"ÄÄ");
		   fare=730;
		   }
		else if(strcmp(fcode,"1007")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"BANGALORE");strcpy(via,"ÄÄ");
		   fare=800;
		   }
		else if(strcmp(fcode,"1017")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"BANGALORE");strcpy(via,"DELHI");
		   fare=850;
		   }
		else if(strcmp(fcode,"7001")==0 )
		   {
		   strcpy(from,"ALLAHBAD");strcpy(to,"DELHI");strcpy(via,"ÄÄ");
		   fare=80;
		   }
		else
		{ coldes(1+128,0);clrscr();
		cout<<" ERROR";saund(30);delay(1000);
		strcpy(from,"ERROR");strcpy(to,"ERROR");strcpy(via,"ERROR");exit(0);
		}
		p.p_det_inp();
		dat_inp();
		getch();
		clrscr();
		}
	   void res_out()
		{
		cout<<"         RESERVATION ENTRIES\n";
		cout<<"        ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ\n";
		cout<<" Flight Code :  \n";puts(fcode);
		p.p_det_out();
		dest_out();
		dat_out();
		}
		friend void assign_code(res p,char str[]);
	   };
		void assign_code(res p,char str[])
		{
		strcpy(str,p.fcode);
		}


void menu()
{
coldes(13,9);clrscr();
clrscr();
cout<<" MENU\n";
cout<<"  ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
cout<<" 1 . Reservation\n";
cout<<" 2 . Querries\n";
cout<<" 3 . Cancellation\n";
cout<<" 4 . Help\n";
cout<<" 5 . Exit\n";
cout<<"ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";
delay(1200);
cout<<"";
textcolor(BLINK+YELLOW);
cprintf(" Press any key to continue ...\n");
getch();
textcolor(YELLOW);
}
void res_menu()
{
textcolor(YELLOW);textbackground(8);
cout<<"  ";saund(15);
cout<<"		     ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» \n  ";

cout<<"		     ³      SAHARA  AIRLINES       ³  \n";
cout<<"		     ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ1/4 \n";
cout<<"               RESERVATION / ROUTE / FARE MENU\n";saund(15);
cout<<"	          ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n";saund(15);
cout<<"ÛÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n";s(10000,500);
cout<<"³SN³FROM   ³ TO    ³F.CODE³   TIMING    ³DAY  ³FARE³\n";s(10000,500);
cout<<"³  ³       ³       ³      ³(DEP) ³ (ARR)³     ³    ³\n";s(10000,500);
cout<<"³ 1³LUCKNOW³DELHI  ³ 0871 ³ 1530 ³ 1615 ³MON  ³100 ³\n";s(10000,500);
cout<<"³ 2³LUCKNOW³CHENNAI³ 0037 ³ 1200 ³ 1230 ³THURS³700 ³\n";s(10000,500);
cout<<"³ 3³DELHI  ³COCHIN ³ 1070 ³ 1740 ³ 1830 ³FRI  ³730 ³\n";s(10000,500);
cout<<"³ 4³DELHI  ³GOA    ³ 1007 ³ 2040 ³ 2100 ³SUN  ³800 ³\n";s(10000,500);
cout<<"³ 5³LUCKNOW³GOA    ³ 1017 ³ 1615 ³ 1700 ³MON  ³850 ³\n";s(10000,500);
cout<<"³ 6³GOA    ³DELHI  ³ 7001 ³ 0845 ³ 0910 ³SUN  ³ 80 ³\n"; s(10000,500);
cout<<"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ\n";s(10000,500);
delay(1000);
saund(50);
textcolor(BLINK+YELLOW);
cprintf("Press any to continue ...\n");
getch();

}

void main()
{
textcolor(12);
textbackground(8);
int mch;
res r;
int flag=0,rec=0;
char ch;

do {  clrscr();
	saund(50);

char name[36],code[5],name1[36],code1[5];
char name2[36],code2[5];
int flag=0;
fstream fin,fin1;
textcolor(YELLOW);
	menu();
	saund(30);
	gotoxy(4,15);

	puts("     Enter your choice  :\n");
	gotoxy(30,15);
	cin>>mch;
	switch(mch)
		 {

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
//			 C A S E  1  :  W R I T I N G
//###################################3####################################

    case 1:       r.res_inp();
		  fin.open("oldmas.dat",ios::binary |ios::app);
		  fin.write( (char *) &r,sizeof(r));
		  fin.close();
		  fin.open("oldmas.dat",ios::binary |ios::in);
		  fin1.open("newmas.dat",ios::binary |ios::out);
		  fin.read( (char*)&r,sizeof(res) );
		  while(!fin.eof() )
			{

			fin1.write( (char*)&r,sizeof(res) );
			fin.read( (char*)&r,sizeof(res) );
			}
		  fin.close();
		  fin1.close();
     break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//                       C A S E : 2  " S E A R C H I N G"
//########################################################################

  case 2:
	      fin.open("newmas.dat",ios::in|ios::binary);
	       cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	       cout<<"  Enter the name  :  \n";gets(name);
	       cout<<"  Enter the flight code  :  \n";gets(code);
	   while( !fin.eof() )
	     {
	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 clrscr();

cout<<"aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<" Welcome to `Sahara Querries' \n";

cout<<"\n aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 r.res_out();
		 rec=1;

cout<<"\n aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";

cout<<"\n aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<" Press  any  key  to  continue\n";  getch();
		 }
		 fin.read((char *)&r , sizeof(res));
	     }

	    fin.close();							clrscr();
		 if(rec==0)
		 {
		 coldes(14+128,0);
		 clrscr();
		 cout<<" Record not found  in  Reservation  Master\n";
		 getch();
		 }

		break;
//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//			C A S E : 3  " C A N C L A T I O N "
//########################################################################

case 3:
	cout<<"enter the name \n";
	gets(name);
	cout<<"enter the code \n";
	gets(code);
	cout<<"	Checking for record\n";
	fin.open("oldmas.dat",ios::binary | ios::in);
	fin1.open("newmas.dat",ios::binary | ios::out);
	if(fin==NULL && fin1==NULL)
	  {
	  cout<<" No records found in Reservation Master\n";getch();
	  goto label;
	  }
	else
	{      fin.read( (char*)&r,sizeof(res) );
	   while(!fin.eof() )
	     {

	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 cout<<" record found \n";
		 cout<<"Deleting.a.a.a.a.\n";
		 }
	       else
		 {
		 fin1.write( (char*)&r ,sizeof(res));
		 }
		  fin.read( (char*)&r,sizeof(res) );
	     }
	}
	fin.close();fin1.close();
	cout<<" Record marked for deletion\n";
	getch();
		  unlink("oldmas.dat");
		  fin.open("oldmas.dat",ios::app|ios::binary );
		  fin1.open("newmas.dat",ios::binary |ios::in);
		  if(fin1==NULL)exit(0);
		  else
		    {
		     fin1.read( (char*)&r,sizeof(res) );
		     while(!fin1.eof() )
			{
			fin.write( (char*)&r,sizeof(res) );
			fin1.read( (char*)&r,sizeof(res) );
			}
		    }
		  fin.close();
		  fin1.close();


 label  :
	break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//			C A S E  4 : H E L P
//########################################################################
	 case 4:help();break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//                      C A S E  5 : E X I T
//########################################################################

		 case 5:
		       //	for(int a=1;a<5;a++)
			{
			textcolor(YELLOW+BLINK);clrscr();
			puts("  Exiting . . .please wait\n");
			saund(70);
		       //	delay(10);nosound();saund(20);nosound();delay(150);

			}
			exit(1);
			break;
		 default :
		 cout<<"Out of choice  !!! Try Again  (y/n)  :  \n";
		 cin>>ch; break;
		}
		//  END  OF  SWITCH
   }while( (mch>0 && mch<6) || (ch=='y' || ch=='Y') );
delay(2000);
}

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//			        END OF MAIN
//########################################################################





//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//			    H E L P   M E N U
//########################################################################


      void help()
	      {  coldes(13,8);
		 clrscr();
		 cout<<" Welcome to online 'HELP'\n";
		 delay(700);

cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<"  You are provided with airlines 'MENU'\n";
		 cout<<"  According  to  your  need , you may  ";
		 cout<<"  choose any valid option & enter your ";
		 cout<<"  choice . ";
		 delay(2000);
		 cout<<" Example \n";delay(700);
		 clrscr();
		 delay(1500);
		 //cout<<" Welcome to online 'HELP'";

cout<<"  ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 delay(2000);
		 menu();
		 for(int i=0;i<53;i++)
			{
			gotoxy(i+28,19);
			puts("  ¯ÄÄ¯");
			delay(50);
			}
		 cout<<"	If your choice is reservation ,	number to be input is 1 \n";
		 cout<<"			press any key to continue\n";
		 getch();

		 }
//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ

//                       E N D   O F   P R O G R A M

//########################################################################


