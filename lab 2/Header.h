#include <iostream>
using namespace std;

const int MAX = 50; 

struct DAYSO
{
	int list[MAX];
	int n;
};

void nhapDS(DAYSO& a);
void xuatDS(DAYSO a);
int tongDS(DAYSO a);
int tichDS(DAYSO a);
int demPTDuong(DAYSO a);

int tongPTChiSoChan(DAYSO a);
int tichPTChiSoChan(DAYSO a);
int demPTChiaHet3Va5(DAYSO a);
