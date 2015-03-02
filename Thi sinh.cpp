#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i;
	printf("Nhap so thi sinh: "); scanf("%d", &n);
	typedef struct
	{
		float toan, ly, hoa;
	}khoi_A;
	
	typedef struct
	{
		float van, su, dia;
	}khoi_C;
	
	typedef struct
	{
		char ten[30], que[30], ten_khoi;
		union
		{
			khoi_A A;
			khoi_C C;
		}khoi;
	}thi_sinh;
	thi_sinh ds[100];
	float m1, m2, m3;
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\nNhap thong tin sinh vien thu %d: \n", i+1);
		printf("\n");
		printf("Ho ten: "); gets(ds[i].ten);
		printf("\nQue quan: "); gets(ds[i].que);
		printf("\nTen khoi: "); fflush(stdin);
		ds[i].ten_khoi=getchar();	
		if(ds[i].ten_khoi=='A' || ds[i].ten_khoi=='a')
		{
			printf("\nNhap diem Toan, Ly, Hoa cua thi sinh: "); scanf("%f %f %f", &m1, &m2, &m3);
			ds[i].khoi.A.toan = m1;
			ds[i].khoi.A.ly = m2;
			ds[i].khoi.A.hoa = m3;
		}
		else
		if(ds[i].ten_khoi=='C' || ds[i].ten_khoi=='c')
		{
			printf("\nNhap diem mon Van, Su, Dia: "); scanf("%f %f %f", &m1, &m2, &m3);
			ds[i].khoi.C.van = m1;
			ds[i].khoi.C.su = m2;
			ds[i].khoi.C.dia = m3;
		}
		printf("----------------------------------------");
		fflush(stdin);
	}
	printf("--------------------------------------------------------------\n");
	printf("\nDanh sach ket qua thi sinh thi khoi A: \n");
	printf("\n  Ho Ten\t\tQue quan\tDiem Toan Diem Ly Diem Hoa\n");
	for(i=0;i<n;i++)
	{
		if(ds[i].ten_khoi=='A'||ds[i].ten_khoi=='a')
		printf("\n%s\t\t%s\t\t %.2f\t   %.2f\t   %.2f\n", ds[i].ten, ds[i].que, ds[i].khoi.A.toan, ds[i].khoi.A.ly, ds[i].khoi.A.hoa);
	}
	printf("\n--------------------------------------------------------------------------------\n");
	printf("\nDanh sach ket qua thi sinh thi khoi C: \n");
	printf("\n  Ho Ten\t\tQue quan\tDiem Van  Diem Su Diem Dia\n");
	for(i=0;i<n;i++)
	{
		if(ds[i].ten_khoi=='C'||ds[i].ten_khoi=='c')
		printf("\n%s\t\t%s\t\t %.2f\t   %.2f\t   %.2f\n", ds[i].ten, ds[i].que, ds[i].khoi.C.van, ds[i].khoi.C.su, ds[i].khoi.C.dia);
	}
}
