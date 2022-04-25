#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include "Rumus.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct cobaja					//baris ke-10 sampai dengan baris ke-18 adalah struct untuk dipanggil pada baris ke-692
{
	char kata[100];
}kt;

void hooh(cobaja apaya)
{
	cout<<"Okey,"<<apaya.kata<<endl;
}

int main(int argc, char** argv) 
{
	int n,m,q,k,t,c,aj,ba,bb,kg,gk,ag,xt;
	int z;
	int x,y,w,r,a,b,d,e,i,j,o,f,g,ax,ay,ab,ad,au;
	int u,v,h,s;
	cout<<"================================================================="<<endl;
	cout<<"\tWELCOME TO ALL YOU CAN DO WITH CALCULATOR!"<<endl;
	cout<<"================================================================="<<endl;
	cout<<"Are you ready? (1. for yes, 2. for no)	: ";cin>>n;
	
	if(n==1)
	{
		cout<<"================================================================="<<endl;
		cout<<"\t1. MATHEMATICS		2. PHYSICS"<<endl;
		cout<<"================================================================="<<endl;
		cout<<"What do you want to choose?	: ";cin>>m;	
		cout<<"-----------------------------------------------------------------"<<endl;	
		if(m==1)
		{
			cout<<"Great! you choose MATHEMATICS, here the menu : "<<endl;
			cout<<"\t  -------------"<<endl;
			cout<<"\t | MATHEMATICS |"<<endl;
			cout<<"\t  -------------"<<endl;
			cout<<"\t  1. Addition"<<endl;
			cout<<"\t  2. Substraction"<<endl;
			cout<<"\t  3. Multiplication"<<endl;
			cout<<"\t  4. Division"<<endl;
			cout<<"\t  5. Exponent(pow)"<<endl;
			cout<<"\t  6. Root"<<endl;
			cout<<"\t  7. Modulus"<<endl;
			cout<<"\t  8. Addition for Matrix"<<endl;
			cout<<endl;
			cout<<"What's your choice?	: ";cin>>q;
			switch(q)
				{
				case 1 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Addition!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>x;
						cout<<"Your second number	: ";cin>>y;
						cout<<"This "<<x<<" + "<<y<<" = "<<tambah(x,y)<<endl;		//pemanggilan fungsi di library
						break;
					}
				case 2 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Substraction!"<<endl;	
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>w;
						cout<<"Your second number	: ";cin>>r;
						cout<<"This "<<w<<" - "<<r<<" = "<<kurang(w,r)<<endl;		//pemanggilan fungsi di library
						break;	
					}
				case 3 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Multiplication!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>a;
						cout<<"Your second number	: ";cin>>b;
						cout<<"This "<<a<<" x "<<b<<" = "<<kali(a,b)<<endl;		//pemanggilan fungsi di library
						break;
					}
				case 4 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Division!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>d;
						cout<<"Your second number	: ";cin>>e;
						cout<<"This "<<d<<" exp "<<e<<" = "<<bagi(d,e)<<endl;		//pemanggilan fungsi
						break;
					}
				case 5 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Exponent!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>i;
						cout<<"Your second number	: ";cin>>j;
						cout<<"This "<<i<<" : "<<j<<" = "<<pangkat(i,j)<<endl;		//pemanggilan fungsi
						break;
					}
				case 6 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Root!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your number	: ";cin>>o;
						cout<<"This Root "<<o<<" = "<<akar(o)<<endl;	//pemanggilan fungsi
						break;
					}
				case 7 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Modulus!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>f;
						cout<<"Your second number	: ";cin>>g;
						cout<<"This "<<f<<" mod "<<g<<" = "<<sisa(f,g)<<endl;	//pemanggilan fungsi
						break;
					}
				case 8 :
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Addition for Matrix!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"How much you want to fill your first data?	: ";cin>>h;
						cout<<"How much you want to fill your second data?	: ";cin>>s;
						cout<<"Your Matrix is "<<h<<" x "<<s<<endl;
						int data1[h][s];
						int data2[h][s];
						int hasil[u][v];
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<"Fill your "<<u<<" line and "<<v<<" coloumn in matrix 1	: ";cin>>data1[u][v];
							}
							if(u==h-1)
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							else
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
						}
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<"Fill your "<<u<<" line and "<<v<<" coloumn in matrix 2	: ";cin>>data2[u][v];
							}
							if(u==h-1)
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							else
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							cout<<endl;
						}
						cout<<"=========================="<<endl;
						cout<<"\tMATRIX 1"<<endl;
						cout<<"=========================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<data1[u][v]<<"\t";
							}
							cout<<endl;
						}
						cout<<"=========================="<<endl;
						cout<<"\tMATRIX 2"<<endl;
						cout<<"=========================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<data2[u][v]<<"\t";
							}
							cout<<endl;
						}
						cout<<"================================================================="<<endl;
						cout<<"\tYour Addition Matrix Result"<<endl;
						cout<<"================================================================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								hasil[u][v]=data1[u][v]+data2[u][v];
								cout<<hasil[u][v]<<"\t";
							}
							cout<<endl;
						}
						break;
					}
					}
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"How much times do you do this math calculator?		: ";cin>>k;
			for(int h=0; h<k; h++)
			{
				cout<<"-----------------------------------------------------------------"<<endl;
				cout<<"So, what the number do you want to choose again in math?	: ";cin>>t;
				if (t==1) 
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Addition!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>x;
						cout<<"Your second number	: ";cin>>y;
						cout<<"This "<<x<<" + "<<y<<" = "<<tambah(x,y)<<endl;
					}
				else if (t==2)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Substraction!"<<endl;	
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>w;
						cout<<"Your second number	: ";cin>>r;
						cout<<"This "<<w<<" - "<<r<<" = "<<kurang(w,r)<<endl;
					}
				else if (t==3)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Multiplication!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>a;
						cout<<"Your second number	: ";cin>>b;
						cout<<"This "<<a<<" x "<<b<<" = "<<kali(a,b)<<endl;
					}
				else if (t==4)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Division!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>d;
						cout<<"Your second number	: ";cin>>e;
						cout<<"This "<<d<<" : "<<e<<" = "<<bagi(d,e)<<endl;
					}
				else if (t==5)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Exponent!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>i;
						cout<<"Your second number	: ";cin>>j;
						cout<<"This "<<i<<" exp "<<j<<" = "<<pangkat(i,j)<<endl;
					}
				else if (t==6)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Root!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your number	: ";cin>>o;
						cout<<"This Root "<<o<<" : "<<akar(o)<<endl;
					}
				else if (t==7)
				{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Modulus!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"Your first number	: ";cin>>f;
						cout<<"Your second number	: ";cin>>g;
						cout<<"This "<<f<<" mod "<<g<<" = "<<sisa(f,g)<<endl;
				}
				else if (t==8)
				{
						cout<<"================================================================="<<endl;
						cout<<"\tYou Choose Addition for Matrix!"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"How much you want to fill your first data?	: ";cin>>h;
						cout<<"How much you want to fill your second data?	: ";cin>>s;
						cout<<"Your Matrix is "<<h<<" x "<<s<<endl;
						int data1[h][s];
						int data2[h][s];
						int hasil[u][v];
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<"Fill your "<<u<<" line and "<<v<<" coloumn in matrix 1	: ";cin>>data1[u][v];
							}
							if(u==h-1)
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							else
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
						}
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<"Fill your "<<u<<" line and "<<v<<" coloumn in matrix 2	: ";cin>>data2[u][v];
							}
							if(u==h-1)
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							else
							{
								cout<<"-----------------------------------------------------------------"<<endl;
							}
							cout<<endl;
						}
						cout<<"=========================="<<endl;
						cout<<"\tMATRIX 1"<<endl;
						cout<<"=========================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<data1[u][v]<<"\t";
							}
							cout<<endl;
						}
						cout<<"=========================="<<endl;
						cout<<"\tMATRIX 2"<<endl;
						cout<<"=========================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								cout<<data2[u][v]<<"\t";
							}
							cout<<endl;
						}
						cout<<"================================================================="<<endl;
						cout<<"\tYour Addition Matrix Result"<<endl;
						cout<<"================================================================="<<endl;
						for(u=0; u<=h-1; u++)
						{
							for(v=0; v<=s-1; v++)
							{
								hasil[u][v]=data1[u][v]+data2[u][v];
								cout<<hasil[u][v]<<"\t";
							}
							cout<<endl;
						}
						break;
				}
			}
			if(k==0)
			{
				cout<<"Okey, just come back anytime!"<<endl;
			}
			
		}
		
		else
			{
				cout<<"Great! you choose PHYSICS, here the menu : "<<endl;
				cout<<"\t\t  ---------"<<endl;
				cout<<"\t\t | PHYSICS |"<<endl;
				cout<<"\t\t  ---------"<<endl;
				cout<<"\t  1. Unit Quantity Conversion"<<endl;	//konversi besaran satuan
				cout<<"\t  2. Temperature Conversion"<<endl;	//konversi suhu
				cout<<"\t  3. Mass Conversion"<<endl;		//konversi massa
				cout<<endl;
				cout<<"What the number you want to choose in physics?	: ";cin>>c;
				if(c==1)
				{
					cout<<"================================================================="<<endl;
					cout<<"\tMENU UNIT QUANTITY CONVERSION"<<endl;
					cout<<"\t\t1. M to CM"<<endl;
					cout<<"\t\t2. CM to M"<<endl;
					cout<<"\t\t3. KM to M"<<endl;
					cout<<"\t\t4. M to KM"<<endl;
					cout<<"-----------------------------------------------------------------"<<endl;
					cout<<"What do you want to choose?	: ";cin>>z;
					if(z==1)
					{
						cout<<"Fill the number of M	: ";cin>>ax;
						int hasil = ax*100;
						cout<<ax<<"M"<<" = "<<hasil<<"CM"<<endl;
					}
					if (z==2)
					{
						cout<<"Fill the number of CM	: ";cin>>ay;
						float hasilx = ay/100;
						cout<<ay<<"CM"<<" = "<<hasilx<<"M"<<endl;
					}
					if(z==3)
					{
						cout<<"Fill the number of KM	: ";cin>>ab;
						int hasily = ab*1000;
						cout<<ab<<"KM"<<" = "<<hasily<<"M"<<endl;	
					}	
					if (z==4)
					{
						cout<<"Fill the number of M	: ";cin>>ad;
						float hasiel = ad/1000;
						cout<<ad<<"M"<<" = "<<hasiel<<"KM"<<endl;
					}
				}
				else if(c==2)
				{
					cout<<"================================================================="<<endl;
					cout<<"\t\tMENU TEMPERATURE CONVERSION"<<endl;
					cout<<"\t\t1. Conversion from C to F"<<endl;
					cout<<"\t\t2. Conversion from C to K"<<endl;
					cout<<"\t\t3. Conversion from F to C"<<endl;
					cout<<"\t\t4. Conversion from F to K"<<endl;
					cout<<"\t\t5. Conversion from K to C"<<endl;
					cout<<"\t\t6. Conversion from K to F"<<endl;
					cout<<"What do you want to choose?	: ";cin>>aj;
					cout<<endl;
					if(aj==1)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"C"<<"\t"<<"F"<<endl;
							for(int cx=bb; cx<ba; cx++)
							{
								cout << "\n";
								int fx = (cx-32)*5/9; 
								cout <<"\t"<<cx<< "\t" <<fx<<endl;
								cout << "\n";
							}
						}
					else if(aj==2)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"C"<<"\t"<<"K"<<endl;
							for(int cx=bb; cx<ba; cx++)
							{
								cout << "\n";
								int kx = cx+273; 
								cout <<"\t"<<cx<< "\t" <<kx<<endl;
								cout << "\n";
							}
						}
					else if(aj==3)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"F"<<"\t"<<"C"<<endl;
							for(int fx=bb; fx<ba; fx++)
							{
								cout << "\n";
								int cx = (fx-32)*9/5; 
								cout <<"\t"<<fx<< "\t" <<cx<<endl;
								cout << "\n";
							}
						}
					else if(aj==4)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"F"<<"\t"<<"K"<<endl;
							for(int fx=bb; fx<ba; fx++)
							{
								cout << "\n";
								int kx = (fx-32)+273*5/9; 
								cout <<"\t"<<fx<< "\t" <<kx<<endl;
								cout << "\n";
							}
						}
					else if(aj==5)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"K"<<"\t"<<"C"<<endl;
							for(int kx=bb; kx<ba; kx++)
							{
								cout << "\n";
								int cx = kx-273; 
								cout <<"\t"<<kx<< "\t" <<cx<<endl;
								cout << "\n";
							}
						}
					else if(aj==6)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"K"<<"\t"<<"F"<<endl;
							for(int kx=bb; kx<ba; kx++)
							{
								cout << "\n";
								int fx = (kx-273)+32*9/5; 
								cout <<"\t"<<kx<< "\t" <<fx<<endl;
								cout << "\n";
							}
						}
				}
				else if(c==3)
				{
					cout<<"================================================================="<<endl;
					cout<<"\t\tMENU MASS CONVERSION"<<endl;
					cout<<"\t\t1. From KG to G"<<endl;
					cout<<"\t\t2. From G to KG"<<endl;
					cout<<"What do you want to choose?	: ";cin>>au;
					cout<<endl;
					if(au==1)
					{
						cout<<"Fill the KG	: ";cin>>kg;
						int hslkg = kg * 1000;
						cout<<kg<<"KG is "<<hslkg<<" G"<<endl;
					}
					if(au==2)
					{
						cout<<"Fill the G	: ";cin>>gk;
						int hslgk = gk/1000;
						cout<<gk<<"G is "<<hslgk<<" KG"<<endl;
					}
				}	
			}
			cout<<"================================================================="<<endl;
			cout<<"Do you want to use physics calculator? How much do you want to use this physics calculator?	: ";cin>>ag;
			cout<<"================================================================="<<endl;
			if(ag!=0)
			{
				cout<<"\t\t  ---------"<<endl;
				cout<<"\t\t | PHYSICS |"<<endl;
				cout<<"\t\t  ---------"<<endl;
				cout<<"\t  1. Unit Quantity Conversion"<<endl;	//konversi besaran satuan
				cout<<"\t  2. Temperature Conversion"<<endl;	//konversi suhu
				cout<<"\t  3. Mass Conversion"<<endl;		//konversi massa
				for(int ex=0; ex<ag; ex++)
				{
					cout<<"-----------------------------------------------------------------"<<endl;
					cout<<"So, what the number do you want to choose again?	: ";cin>>xt;
					if(xt==1)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tMENU UNIT QUANTITY CONVERSION"<<endl;
						cout<<"\t\t1. M to CM"<<endl;
						cout<<"\t\t2. CM to M"<<endl;
						cout<<"\t\t3. KM to M"<<endl;
						cout<<"\t\t4. M to KM"<<endl;
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"What do you want to choose?	: ";cin>>z;
						if(z==1)
						{
							cout<<"Fill the number of M	: ";cin>>ax;
							int hasil = ax*100;
							cout<<ax<<"M"<<" = "<<hasil<<"CM"<<endl;
						}
						if (z==2)
						{
							cout<<"Fill the number of CM	: ";cin>>ay;
							float hasilx = ay/100;
							cout<<ay<<"CM"<<" = "<<hasilx<<"M"<<endl;
						}
						if(z==3)
						{
							cout<<"Fill the number of KM	: ";cin>>ab;
							int hasily = ab*1000;
							cout<<ab<<"KM"<<" = "<<hasily<<"M"<<endl;	
						}	
						if (z==4)
						{
							cout<<"Fill the number of M	: ";cin>>ad;
							float hasiel = ad/1000;
							cout<<ad<<"M"<<" = "<<hasiel<<"KM"<<endl;
						}
					}
					else if(xt==2)
					{
						cout<<"================================================================="<<endl;
						cout<<"\tMENU TEMPERATURE CONVERSION"<<endl;
						cout<<"\t1. Conversion from C to F"<<endl;
						cout<<"\t2. Conversion from C to K"<<endl;
						cout<<"\t3. Conversion from F to C"<<endl;
						cout<<"\t4. Conversion from F to K"<<endl;
						cout<<"\t5. Conversion from K to C"<<endl;
						cout<<"\t6. Conversion from K to F"<<endl;
						cout<<"What do you want to choose?	: ";cin>>aj;
						cout<<endl;
						if(aj==1)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"C"<<"\t"<<"F"<<endl;
							for(int cx=bb; cx<ba; cx++)
							{
								cout << "\n";
								int fx = (cx-32)*5/9; 
								cout <<"\t"<<cx<< "\t" <<fx<<endl;
								cout << "\n";
							}
						}
						else if(aj==2)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"C"<<"\t"<<"K"<<endl;
							for(int cx=bb; cx<ba; cx++)
							{
								cout << "\n";
								int kx = cx+273; 
								cout <<"\t"<<cx<< "\t" <<kx<<endl;
								cout << "\n";
							}
						}
						else if(aj==3)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"F"<<"\t"<<"C"<<endl;
							for(int fx=bb; fx<ba; fx++)
							{
								cout << "\n";
								int cx = (fx-32)*9/5; 
								cout <<"\t"<<fx<< "\t" <<cx<<endl;
								cout << "\n";
							}
						}
						else if(aj==4)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"F"<<"\t"<<"K"<<endl;
							for(int fx=bb; fx<ba; fx++)
							{
								cout << "\n";
								int kx = (fx-32)+273*5/9; 
								cout <<"\t"<<fx<< "\t" <<kx<<endl;
								cout << "\n";
							}
						}
						else if(aj==5)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"K"<<"\t"<<"C"<<endl;
							for(int kx=bb; kx<ba; kx++)
							{
								cout << "\n";
								int cx = kx-273; 
								cout <<"\t"<<kx<< "\t" <<cx<<endl;
								cout << "\n";
							}
						}
						else if(aj==6)
						{
							cout<<"Fill the upper limit you want	: ";cin>>ba;		//ngisinya dari atas dulu
							cout<<"Fill the lower limit you want	: ";cin>>bb;		//abis itu baru angka kecilnya
							cout<<"\n"<<"\t"<<"K"<<"\t"<<"F"<<endl;
							for(int kx=bb; kx<ba; kx++)
							{
								cout << "\n";
								int fx = (kx-273)+32*9/5; 
								cout <<"\t"<<kx<< "\t" <<fx<<endl;
								cout << "\n";
							}
						}
					}
					else if(xt==3)
					{
						cout<<"================================================================="<<endl;
						cout<<"\t\tMENU MASS CONVERSION"<<endl;
						cout<<"\t\t1. From KG to G"<<endl;
						cout<<"\t\t2. From G to KG"<<endl;
						cout<<"What do you want to choose?	: ";cin>>au;
						cout<<endl;
						if(au==1)
						{
							cout<<"Fill the KG	: ";cin>>kg;
							int hslkg = kg * 1000;
							cout<<kg<<"KG is "<<hslkg<<" G"<<endl;
						}
						if(au==2)
						{
							cout<<"Fill the G	: ";cin>>gk;
							int hslgk = gk/1000;
							cout<<gk<<"G is "<<hslgk<<" KG"<<endl;
						}
					}
					break;
				}
			}
			else if(ag==0)
			{
				cobaja ini;					//ini pemanggilan struct
				strcpy(ini.kata, " byeee");
				hooh(ini);
			}
	}
	else
	{
			ifstream coba;					//ini untuk pemanggilan operasi file
			string str;
			coba.open("coba.txt");
			getline (coba, str);
			cout<<str;
	
			coba.close();
	}
	return 0;
	}
