#include "Header.h"

//1.1-1.2

void nhapDS(DAYSO& a)
{
	do {
		cout << "\nNhap so phan tu : ";
		cin >> a.n;
		if (a.n <= 0)
			cout << "\nNhap sai.Nhap lai.";
	} while (a.n <= 0);
	for (int i = 0; i < a.n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a.list[i];
	}
}

void xuatDS(DAYSO a)
{
	for (int i = 0; i < a.n; i++)
		cout << a.list[i] << " ";
}

int tongDS(DAYSO a)
{
	int t = 0;
	for (int i = 0; i < a.n; i++)
		t += a.list[i];
	return t;
}
//1.3
// tap S la day so
// X la thu tu phan tu 
// K la dieu kien X nho hon so luong phan tu cua day so
//1.4
int tichDS(DAYSO a)
{
	int t = 1;
	for (int i = 0; i < a.n; i++)
		t *= a.list[i];
	return t;
}
//1.5
int demPTDuong(DAYSO a)
{
	int t = 0;
	for (int i = 0; i < a.n; i++)
		if (a.list[i] > 0)
			t++;
	return t;
}

//2

int tongPTChiSoChan(DAYSO a)
{
	int t = 0;
	for (int i = 0; i < a.n; i++)
		if(a.list[i]%2==0)
			t += a.list[i];
	return t;
}

int tichPTChiSoChan(DAYSO a)
{
	int t = 1;
	for (int i = 0; i < a.n; i++)
		if (a.list[i] % 2 == 0)
			t *= a.list[i];
	return t;
}

int demPTChiaHet3Va5(DAYSO a)
{
	int t = 0;
	for (int i = 0; i < a.n; i++)
		if (a.list[i] % 3 == 0 && a.list[i] % 5==0)
			t++;
	return t;
}