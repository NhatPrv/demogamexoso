#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>

using namespace std;

int main (int argv, char** argc)   {
	while (true)
	{
		sleep(2);
		cout << "W" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WE" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WEl" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElC" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCO" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOM" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME " <<endl;
		sleep(1);
		system("cls");
		cout << "WElCOME T" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME TO " <<endl;
		sleep(1);
		system("cls");
		cout << "WElCOME TO GA" <<endl;
		sleep(9/10);
		system("cls");	
		cout << "WElCOME TO GAM" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME TO GAME " <<endl;
		sleep(1);
		system("cls");
		cout << "WElCOME TO GAME D" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME TO GAME DE" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME TO GAME DEM" <<endl;
		sleep(9/10);
		system("cls");
		cout << "WElCOME TO GAME DEMO" <<endl;
		sleep(1);
		system("cls");
		cout << "WElCOME TO GAME DEMO+" <<endl;
		sleep(1);
		system("cls");
		cout << "WElCOME TO GAME DEMO-" <<endl;
		sleep(3/2);
		system("cls");
		cout << "WElCOME TO GAME DEMO!" <<endl;
		sleep(1);
		
		cout << "Bam phim bat ki...";
		char a=getch();
		system("cls");
		int mode;
		
		cout << "  1. Bat dau" <<endl; // bat dau
		cout << "  2. Cach choi" <<endl; // huong dan
		cout << "  3. Thong tin ve game" <<endl; // gioi thieu
		cout << "  4. Thoat game " <<endl; // thoat game
		cout << "Choose: " ; // chon che do
		cin >> mode;
		sleep(1);
		system("cls");
		int diem = 1000;
		int cuoc;
		int somayman;
		if (mode==1)
		{			
			int i=diem;
			while(true)
			{
				while(i>=50)
				{
					srand(time(NULL));
					int somay=1+rand()%100;
					cout << "Ban dang co " << i << " diem" <<endl;
					cout << "Ban muon dat bao nhieu lan: ";
					cin >> cuoc;
					sleep(1);
					system("cls");
					if (cuoc*50>i)
					{
						cout << "Khong du diem de cuoc";
						sleep(3);
						system("cls");
					}
					else
					{
						cout << "Ban da dat cuoc " << cuoc << " lan"<<endl;
						i=i-(50*cuoc);
						cout << "So diem con lai la: " << i << " diem";
						sleep(3);
						system("cls");
						cout << "Moi ban chon 1 con so may man: ";
						cin >> somayman;
						sleep(2);
						system("cls");
						cout << "Ban da chon con so " << somayman << " lam so may man";
						sleep(3);
						system("cls");
						for (int j=10;j>=0;j--)
						{
							cout << "DANG CHON CON SO MAY MAN..." <<endl;
							cout << "      Con " << j << " giay";
							sleep(1);
							system("cls");
						}
						cout << "Con so may man la: " << somay << endl;
						sleep(3);
						cout << "Con so ban chon la:  " << somayman;
						sleep(3);
						system("cls");
						cout << "Dang tinh toan...";
						sleep(2);
						system("cls");
						if(somayman==somay)
						{
							cout << "Chuc mung!" <<endl;
							cout << "Con so " << somayman << " ban chon trung khop voi con so may man la: " <<somay;
							sleep(2);
							cout << "Ban duoc cong " << cuoc*50*5 << " diem";
							sleep(3);
							system("cls");
							i=i+cuoc*50*5;
						}
						else if (somayman!=somay)
						{
							cout << "That dang tiec " <<endl;
							cout << "Con so " << somayman << " ban chon khong trung khop voi con so may man la: " <<somay;
							sleep(2);
							system("cls");
							i=i;
						}
					}
					
				}
				cout << "Ban da het diem" <<endl;
				cout << " GAME OVER! ";
				cout << "Bam phim bat ki de quay lai...";
				a=getch();
				system ("cls");
				break;
			}
		}
		else if (mode==2)
		{
			while(true)
			{
				cout << "Huong dan cach choi game doan so: \n";
				cout << "Ban se nhan duoc 1000 diem khoi dau\n";
				cout << "Voi moi lan dat cuoc la 50 diem \n";
				cout << "May tinh se chon ngau nhien 1 so tu [1...100]\n";
				cout << "Muc tieu cua ban la doan con so do \n";
				cout << "Neu doan trung ban se duoc cong so diem tuong ung bang  solancuoc x 250 diem \n";
				cout << "Nguoc lai, neu ban doan sai thi se bi tru so diem bang solancuoc *50 \n";
				cout << "Bam phim bat ki de quay lai...";
				a=getch();
				system("cls");
				break;
			}
		}
		else if (mode==3)
		{
			while(true)
			{
				cout << "Mot san pham cua PRV (Dang Long Nhat)\n" <<endl;	
				cout << "San xuat vao luc 13h15p 23/9/2021\n" <<endl;
				cout << "Bam phim bat ki de quay lai...";
				a=getch();
				system("cls");
				break;
			}
		}
		else if (mode==4)
		{
		cout << "GOODBYE!" <<endl;
		cout << "Nhan Enter de thoat...";
		break;
		}
		system("cls");
	}
}
