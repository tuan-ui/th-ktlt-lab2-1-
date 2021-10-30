#include"Header.h"

void main()
{
	DAYSO d;
	nhapDS(d);
	xuatDS(d);
	cout << "\nTong cac phan tu cua day so = " <<tongDS(d);
	cout << "\nTich cac phan tu cua day so = " << tichDS(d);
	cout << "\nDem cac phan tu duong cua day so = " << demPTDuong(d);

	cout << "\nTong cac phan tu chan cua day so = " << tongPTChiSoChan(d);
	cout << "\nTich cac phan tu chan cua day so = " << tichPTChiSoChan(d);
	cout << "\nDem cac phan tu chia ket cho 3 va 5 cua day so = " << demPTChiaHet3Va5(d);

	cout << endl;
	system("pause");
}
