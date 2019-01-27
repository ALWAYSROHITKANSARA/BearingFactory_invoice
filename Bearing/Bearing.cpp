#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
//************************************************DECLARATION SECTION**********************************//
int Add_TpB(); int TpB();
int Add_CB(); int CB();
int Add_NrB(); int NrB();
int Add_BaB(); int BaB();
int Add_KpB(); int KpB();
int Add_TpR(); int TpR();
int Add_CR(); int CR();
int Add_NR(); int NR();
int Add_SR(); int SR();
int Add_LR(); int LR();
int Add_FtRi(); int FtRi();
int Add_GRi(); int GRi();
int Add_GTRi(); int GTRi();
int Add_SgRi(); int SgRi();
int Add_SfRi(); int SfRi();
int Add_new();
int screen();
int time();
//**************************************************CLASS SECTION*******************************************************//
class Factory
{
public :	int bill;
	int amount;
	char name[20];
 
        Factory()
		{
          bill=0;           //constructor
		}
	    int Welcome();		//function del=claration for welcome screen
		int Type();		    //declaration for type of product
		int Bearing();		//function declaration for bearing 
		int Rollers();		//funnctionn declaration for rollers
        int Rings();		//function declarationn for rings
};
//********************************************************BILLING SECTION**************************************//
class Bill : public Factory
{
 int qty,count,cost,search;
public :Bill()
		{
          count=0;
		  cost=0;
		}
	    int generate_bill();
};
//************************************************screen section***************************************//
 int screen()
 {
	int i;
	 system("CLS");
	 system("color B");
 	for(i=0;i<=167;i++)
		cout<<"=";
	cout<<"\n";
	cout.width(115); cout<<"JODHPUR INSTITUTE OF ENGINEERING AND TECHNOLOGY,JODHPUR"<<"\n";
    cout.width(100); cout<<"BEARING PRIVATE LIMITED\n";
	cout.width(102); cout<<"INDUSTRIAL AREA, JODHPUR(RAJ.)\n";
	cout<<"NAME : ROHIT KASARA   SEM :III(CSE)   YEAR : II   ROLL NO. : 16EJICS088"<<"\n";
	cout<<"SECTION : B   BATCH : B1   "<<"\n";
	cout<<"SUBMITTED TO : PROF. BHARAT SINGH "<<"\n";
	for(i=0;i<=167;i++)
		cout<<"=";
	cout<<"\n\n\n\n\n\n";
 return 0;
 }
//*************************************************login section*****************************************//
 int login()
 {
	 screen();
	 int i,bill=0;
	 cout.width(20);
	 cout<<"\t\t\t\t\t\t   !!!!!!!PROGRAM IS CASE SESITIVE PLEASE ENTER WORDS CAREFULLY!!!!!!!!"<<"\n";
	 char pin[5]="1234",u[5],uname[5],name[5]="aadi";
	 cout.width(95); cout<<"enter name : "; 
	 cin>>uname; 
	 cout.width(95); cout<<"enter pin : ";
	 for(i=0;i<=3;i++)
	 {
		 u[i]=_getch();
		 cout<<"*";
	 }
	 for(i=0;i<=3;i++)
	 {
		 if (u[i]!=pin[i]||name[i]!=uname[i])
		 {
			 break;
		 }
	 }
	 if (i==4)
	 {
		 cout<<"\n\n\n\t\t\t\t\t\tname and pin matched";
	 }
	 else
	 {
		 cout<<"\n\n\n\t\t\t\t\t\tname and pin not matched";
		 _getch();
		 exit(0);
	 }
	     _getch();
 return 0;
 }
 //**********************************************MAIN SECTION*************************************************//
int main()
{ 
	Factory f;
	Bill b;
	login();
	f.Welcome();
	f.Type();
	b.generate_bill();
	system("pause");
	return 0;
}
//************************************************WELCOME SECTION**************************************//
int Factory :: Welcome()
{
	char ch;
	screen();
	cout.width(91); cout<<"WELCOME";
	cout<<"\n\n\n\n";
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\tPRESS ANY KEY : TO ENTER"<<"\n\t\tPRESS esc : TO EXIT";
    ch=_getch();
	if(ch==27)
	{exit(0);}
return 0;	
}
//*************************************************TYPE SECTION******************************************//
int Factory :: Type()
{
 screen();
 char ch;
 cout<<"\n\n\n\n"; 
 const int N=80;
 char line[N];
 ifstream fin;
 fin.open("type.txt",ios::in);                //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
 fin.close();
 cout<<"\n\n\n\t\t\tesc for exit\n\n\n\t\t\tENTER YOUR CHOICE : "; 
 ch=_getch();
      switch(ch)
      {
	   case '1': Bearing(); break;
	   case '2': Rollers(); break;
	   case '3': Rings(); break;
	   case 27: exit(0);
				 break;
	   default : cout<<"\t\t\t!!!invalid choice!!!";
      }	
return 0;
}
//*************************************************BEARING SECTION******************************************//
int Factory :: Bearing()
{
	char ch;
	screen();
	cout<<"\n\n\n\n";
	const int N=1000;
    char line[N];
    ifstream fin;
    fin.open("bearing.txt");                //"TYPE OF BEARING :"
     while (fin)
     {
      fin.getline(line,N);
      cout<<line<<"\n";
     } 
    fin.close();
	cout<<"\n\n\nENTER YOUR CHOICE : ";
	ch=_getch();
      switch(ch)
      {
	   case '1': TpB(); break;
	   case '2': CB(); break;
	   case '3': NrB(); break;
       case '4': BaB(); break;
	   case '5': KpB(); break;
       case 27: exit(0); break;
	   default : cout<<"invalid choice!!!";
	 
      }
	  	return 0;  
}
//**********************************************ROLLER SECTION*************************************************//
int Factory ::Rollers()
{
   char ch;
	screen();
	cout<<"\n\n\n\n";
	const int N=1000;
    char line[N];
    ifstream fin;
    fin.open("roller.txt");                //"TYPE OF BEARING :"
     while (fin)
     {
      fin.getline(line,N);
      cout<<line<<"\n";
     } 
    fin.close();
		cout<<"\nPRESS A TO ADD MORE TYPE OF ROLLER(enter pattern- <1.name>)\nENTER YOUR CHOICE : ";
	ch=_getch();
switch(ch)
 {
	case '1': CR(); break;
	case '3': SR(); break;
    case '4': NR(); break;
	case '5': LR(); break;
	case 27: exit(0); break;
	default : cout<<"invalid choice!!!";
 }	
return 0;
}
//**********************************************RING SECTION*************************************************//
int Factory :: Rings()
{
	char ch;
 	screen();
	cout<<"\n\n\n\n";
    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("rings.txt");                //"TYPE OF RINGS :"
     while (fin)
     {
      fin.getline(line,N);
      cout<<line<<"\n";
     } 
    fin.close();cout<<"\nesc- exit\nENTER YOUR CHOICE : ";
	ch=_getch();
switch(ch)
 {
	case '1': FtRi(); break;
	case '2': GRi(); break;
	case '3': GTRi(); break;
    case '4': SgRi(); break;
	case '5': SfRi(); break;
	case 27: exit(0); break;
	default: "invalid choice!!!";
 }	
return 0;
}
//*************************************FUNCTIONS OF BEARING SECTION***********************//
int Add_TpB()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("TpB.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int TpB()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("TpB.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
 int Add_CB()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("CB.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
 }
int CB()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("CB.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_NrB()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("NrB.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int NrB()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("NrB.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_BaB()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("BaB.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int BaB()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("BaB.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_KpB()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("KpB.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int KpB()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("KpB.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
//*************************************FUNCTIONS OF ROLLER SECTION***********************//
int Add_TpR()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("TpR.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int TpR()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("TpR.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_CR()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("CR.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int CR()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("CR.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_NR()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("NR.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int NR()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("NR.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_SR()                   //ADDITION MORE TYPES
{ 
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("SR.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int SR()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("SR.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_LR()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("LR.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int LR()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("LR.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
//*************************************FUNCTIONS OF RING SECTION***********************//
int Add_FtRi()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("FtRi.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int FtRi()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("FtRi.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_GRi()                   //ADDITION MORE TYPES
{ 
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("GRi.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;

}
int GRi()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("GRi.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_GTRi()                   //ADDITION MORE TYPES
{ 
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("GTRi.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int GTRi()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("GTRi.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_SgRi()                   //ADDITION MORE TYPES
{
 char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("SgRi.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int SgRi()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("SgRi.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\nPRESS 'Y' TO Add_to_bill : "<<"\n"<<"PRESS esc : TO EXIT"<<"\nenter your choice :";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
int Add_SfRi()                   //ADDITION MORE TYPES
{
  char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
 ofstream fout;
	fout.open("SfRi.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"plaese enter it one more time to add rate list";
	Add_new();
return 0;
}
int SfRi()
{
screen();
cout<<"\n\n\n\n"; 
const int N=1000;
char line[N];
ifstream fin;
fin.open("SfRi.txt");                             //"TYPE OF PRODUCTS :"
 while (fin)
 {
  fin.getline(line,N);
  cout<<line<<"\n";
 }
fin.close();
char ch;
cout<<"\n\n\nPRESS 'A' TO ADD MORE ITEMS";cout<<"\n\n\nPRESS 'Y' TO Add_to_bill : "<<"\n\n\n"<<"PRESS esc : TO EXIT"<<"\neter your choice: ";
ch=_getch();
Bill b;
switch(ch)
{
case 'A': Add_TpB(); break;	
case 'Y': b.generate_bill(); break;
case 27: exit(0);break;
default :cout<<"invalid choice";
}
return 0;
}
//***********************************************ADDITION SECTION************************************// 
int Add_new()
{  
	char SR_NO[20];
	int cost;
	cout<<"enter SR_NO : "; cin>>SR_NO;
	cout<<"enter cost : "; cin>>cost;
	ofstream fout;
	fout.open("rate.txt",ios::app);
    fout<<setiosflags(ios::left)<<setw(10)<<SR_NO<<setiosflags(ios::right)<<setw(10)<<cost<<endl;
	fout.close();
	cout<<"---NEW ITEM ADDED TO RATE LIST---";
return 0;
}
//*********************************************ADD ITEM TO BILL***************************************//
int Bill ::generate_bill()
{
 	Factory f;
	Bill b;
	string search;
 	int offset;
 	string line;
 	ifstream myfile;
 	myfile.open("rate.txt");
	cout<<"type the SR.NO. you want to search : ";
 	cin>>search;
 	if (myfile.is_open())
     {
     	while (!myfile.eof())
     	{
		 getline(myfile,line);
		 if((offset=line.find(search,0))!=string::npos)
		 {
		 	cout<<"item found"<<search<<endl;
             cout<<"PRESS 'Y' : TO ADD IN BILL "<<"\n";
			 cout<<"PRESS 'B' : TO SHOW FIRST MENU"<<"\n";
			 cout<<"esc : TO EXIT"<<"\n"<<"enter your choice : ";
             char ch;			
			 ch=_getch();
			 switch(ch)
			 {
			 case 'Y': cout<<"ENTER QUENTITY: ";
				       cin>>qty;
					   cout<<"enter cost:";
					   cin>>cost;
					   screen();
                       bill++;
					   count++;
					   amount=qty*cost;
				       cout<<"BILL NO.";cout<<bill;
					   cout<<" \t\t\t\nENTER NAME : "; cin>>f.name;
					   cout<<"\nS no."<<"             \t\tPerticulars     ";
					   cout<<"             \t\tQty";
					   cout<<"        rate";
					   cout<<"               \t\tTotal"<<endl;
					   cout<<count<<"                    \t\t"<<search<<"               \t\t        "<<qty<<"            "<<cost<<"                           "<<amount;
					   cout<<"\n\n\n";
					   _getch();
					   f.Type();
					   break;
			 case 'B': f.Type();
			 case 27: exit(0);break; 
			 default: cout<<"invalid choice!!!"; break;
			 } 
myfile.close();
		 }
		}
	}
	else 
cout<<"could not find"<<endl;
	cout<<"press any key and goto start menu and check your choice";
	f.Type();
	return 0;
}
