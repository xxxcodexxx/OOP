#include"LibHeSo.h"
#include<iostream>

using namespace std;

void main() {
	int select;
	HeSo2 bin;
	HeSo2 binary;
	HeSo8 oct;
	HeSo8 octal;
	HeSo10 Dec;
	HeSo10 Decemal;
	HeSo16 Hex;
	HeSo16 Hexa;
	cout << "\t----------- Chuong trinh chuyen he so 2, 8, 10, 16 -----------\n\n";
	cout << "--------Chuyen co so.--------\t\t--------Thuc hien tinh toan.----------\n\n";
	cout << "\t1.  BIN -> OCT\n" << "\t2.  BIN -> DEC\t\t\t\t"; cout << "13.  BIN vs BIN\n"; cout << "\t3.  BIN -> HEX\n\n";
	cout << "\t4.  OCT -> BIN\n" << "\t5.  OCT -> DEC\t\t\t\t"; cout << "14.  OCT vs OCT\n";cout << "\t6.  OCT -> HEX\n\n";
	cout << "\t7.  DEC -> BIN\n" << "\t8.  DEC -> OCT\t\t\t\t"; cout << "15.  DEC vs DEC\n";cout << "\t9.  DEC -> HEX\n\n";
	cout << "\t10. HEX -> BIN\n" << "\t11. HEX -> OCT\t\t\t\t"; cout << "16.  HEX vs HEX\n";cout << "\t12. HEX -> DEC\n\n";
	do
	{
		cin.clear();
		cout << "Nhap lua chon: "; cin >> select;
		fflush(stdin);
	} while (cin.fail() || select<1 || select>16);
	switch (select) {
	case 1:
	{
		string value;
		cout << "\tNhap gia tri cho co so 2->8: "; cin >> value;
		HeSo2 bin(value);
		cout << "\tKet qua: " << bin.toOctal().getVal() << endl;
		break;
	}
	case 2:
	{
		string value;
		cout << "\tNhap gia tri cho co so 2-10: "; cin >> value;
		HeSo2 bin(value);
		cout << "\tKet qua: " << bin.toDec().getVal() << endl;
		break;
	}
	case 3:
	{
		string value;
		cout << "\tNhap gia tri cho co so 2->16: "; cin >> value;
		HeSo2 bin(value);
		cout << "\tKet qua: " << bin.toHex().getVal() << endl;
		break;
	}
	case 4:
	{
		string value;
		cout << "\tNhap gia tri cho co so 8->2: "; cin >> value;
		HeSo8 oct(value);
		cout << "\tKet qua: " << oct.toBin().getVal() << endl;
		break;
	}
	case 5:
	{
		string value;
		cout << "\tNhap gia tri cho co so 8-10: "; cin >> value;
		HeSo8 oct(value);
		cout << "\tKet qua: " << oct.toDec().getVal() << endl;
		break;
	}
	case 6:
	{
		string value;
		cout << "\tNhap gia tri cho co so 8->16: "; cin >> value;
		HeSo8 oct(value);
		cout << "\tKet qua: " << oct.toHex().getVal() << endl;
		break;
	}
	case 7:
	{
		string value;
		cout << "\tNhap gia tri cho co so 10->2: "; cin >> value;
		HeSo10 dec(value);
		cout << "\tKet qua: " << dec.toBin().getVal() << endl;
		break;
	}
	case 8:
	{
		string value;
		cout << "\tNhap gia tri cho co so 10->8: "; cin >> value;
		HeSo10 dec(value);
		cout << "\tKet qua: " << dec.toOctal().getVal() << endl;
		break;
	}
	case 9:
	{
		string value;
		cout << "\tNhap gia tri cho co so 10->16: "; cin >> value;
		HeSo10 dec(value);
		cout << "\tKet qua: " << dec.toHex().getVal() << endl;
		break;
	}
	case 10:
	{
		string value;
		cout << "\tNhap gia tri cho co so 16->2: "; cin >> value;
		HeSo16 hex(value);
		cout << "\tKet qua: " << hex.toBin().getVal() << endl;
		break;
	}
	case 11:
	{
		string value;
		cout << "\tNhap gia tri cho co so 16->8: "; cin >> value;
		HeSo16 hex(value);
		cout << "\tKet qua: " << hex.toOctal().getVal() << endl;
		break;
	}
	case 12:
	{
		string value;
		cout << "\tNhap gia tri cho co so 16->10: "; cin >> value;
		HeSo16 hex(value);
		cout << "\tKet qua: " << hex.toDec().getVal() << endl;
		break;
	}
	case 13:
	{
		cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
		cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
		do
		{
			cin.clear();
			cout << "Nhap lua chon: "; cin >> select;
			fflush(stdin);
		} while (cin.fail() || select<1 || select>4);
		switch (select)
		{
		case 1: {
			string value1;
			string value2;
			cout << "\tGia tri binary 1: "; cin >> value1;
			cout << "\tGia tri binary 2: "; cin >> value2;
			bin.setVal(value1);
			binary.setVal(value2);
			bin = (bin + binary);
			cout << "\tKet qua: " << bin.getVal() << endl;
			break;
		}
		case 2: {
			string value1;
			string value2;
			cout << "\tGia tri binary 1: "; cin >> value1;
			cout << "\tGia tri binary 2: "; cin >> value2;
			bin.setVal(value1);
			binary.setVal(value2);
			bin = binary - bin;
			cout << "\tKet qua: " << bin.getVal() << endl;
			break;
		}
		case 3: {
			string value1;
			string value2;
			cout << "\tGia tri binary 1: "; cin >> value1;
			cout << "\tGia tri binary 2: "; cin >> value2;
			bin.setVal(value1);
			binary.setVal(value2);
			bin = binary * bin;
			cout << "\tKet qua: " << bin.getVal() << endl;
			break;
		}
		case 4: {
			string value1;
			string value2;
			cout << "\tGia tri binary 1: "; cin >> value1;
			cout << "\tGia tri binary 2: "; cin >> value2;
			bin.setVal(value1);
			binary.setVal(value2);
			bin = binary / bin;
			cout << "\tKet qua: " << bin.getVal() << endl;
			break;
		}
		default:
			break;
		}

		break;
	}
	case 14:
	{
		cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
		cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
		do
		{
			cin.clear();
			cout << "Nhap lua chon: "; cin >> select;
			fflush(stdin);
		} while (cin.fail() || select<1 || select>4);
		switch (select)
		{
		case 1: {
			string value1;
			string value2;
			cout << "\tGia tri octal 1: "; cin >> value1;
			cout << "\tGia tri octal 2: "; cin >> value2;
			octal.setVal(value1);
			oct.setVal(value2);
			oct = (oct + octal);
			cout << "\tKet qua: " << oct.getVal() << endl;
			break;
		}
		case 2: {
			string value1;
			string value2;
			cout << "\tGia tri octal 1: "; cin >> value1;
			cout << "\tGia tri octal 2: "; cin >> value2;
			octal.setVal(value1);
			oct.setVal(value2);
			oct = (oct - octal);
			cout << "\tKet qua: " << oct.getVal() << endl;
			break;
		}
		case 3: {
			string value1;
			string value2;
			cout << "\tGia tri octal 1: "; cin >> value1;
			cout << "\tGia tri octal 2: "; cin >> value2;
			octal.setVal(value1);
			oct.setVal(value2);
			oct = (oct * octal);
			cout << "\tKet qua: " << oct.getVal() << endl;
			break;
		}
		case 4: {
			string value1;
			string value2;
			cout << "\tGia tri octal 1: "; cin >> value1;
			cout << "\tGia tri octal 2: "; cin >> value2;
			octal.setVal(value1);
			oct.setVal(value2);
			oct = (oct / octal);
			cout << "\tKet qua: " << oct.getVal() << endl;
			break;
		}
		default:
			break;
		}

		break;
	}
	case 15:
	{
		cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
		cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
		do
		{
			cin.clear();
			cout << "Nhap lua chon: "; cin >> select;
			fflush(stdin);
		} while (cin.fail() || select<1 || select>4);
		switch (select)
		{
		case 1: {
			string value1;
			string value2;
			cout << "\tGia tri dec 1: "; cin >> value1;
			cout << "\tGia tri dec 2: "; cin >> value2;
			Dec.setVal(value1);
			Decemal.setVal(value2);
			Dec = (Dec + Decemal);
			cout << "\tKet qua: " << Dec.getVal() << endl;
			break;
		}
		case 2: {
			string value1;
			string value2;
			cout << "\tGia tri dec 1: "; cin >> value1;
			cout << "\tGia tri dec 2: "; cin >> value2;
			Dec.setVal(value1);
			Decemal.setVal(value2);
			Dec = (Dec - Decemal);
			cout << "\tKet qua: " << Dec.getVal() << endl;
			break;
		}
		case 3: {
			string value1;
			string value2;
			cout << "\tGia tri dec 1: "; cin >> value1;
			cout << "\tGia tri dec 2: "; cin >> value2;
			Dec.setVal(value1);
			Decemal.setVal(value2);
			Dec = (Dec * Decemal);
			cout << "\tKet qua: " << Dec.getVal() << endl;
			break;
		}
		case 4: {
			string value1;
			string value2;
			cout << "\tGia tri dec 1: "; cin >> value1;
			cout << "\tGia tri dec 2: "; cin >> value2;
			Dec.setVal(value1);
			Decemal.setVal(value2);
			Dec = (Dec / Decemal);
			cout << "\tKet qua: " << Dec.getVal() << endl;
			break;
		}
		default:
			break;
		}

		break;
	}
	case 16:
	{
		cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
		cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
		do
		{
			cin.clear();
			cout << "Nhap lua chon: "; cin >> select;
			fflush(stdin);
		} while (cin.fail() || select<1 || select>4);
		switch (select)
		{
		case 1: {
			string value1;
			string value2;
			cout << "\tGia tri hex 1: "; cin >> value1;
			cout << "\tGia tri hex 2: "; cin >> value2;
			Hex.setVal(value1);
			Hexa.setVal(value2);
			Hex = (Hex + Hexa);
			cout << "\tKet qua: " << Hex.getVal() << endl;
			break;
		}
		case 2: {
			string value1;
			string value2;
			cout << "\tGia tri hex 1: "; cin >> value1;
			cout << "\tGia tri hex 2: "; cin >> value2;
			Hex.setVal(value1);
			Hexa.setVal(value2);
			Hex = (Hex - Hexa);
			cout << "\tKet qua: " << Hex.getVal() << endl;
			break;
		}
		case 3: {
			string value1;
			string value2;
			cout << "\tGia tri hex 1: "; cin >> value1;
			cout << "\tGia tri hex 2: "; cin >> value2;
			Hex.setVal(value1);
			Hexa.setVal(value2);
			Hex = (Hex * Hexa);
			cout << "\tKet qua: " << Hex.getVal() << endl;
			break;
		}
		case 4: {
			string value1;
			string value2;
			cout << "\tGia tri hex 1: "; cin >> value1;
			cout << "\tGia tri hex 2: "; cin >> value2;
			Hex.setVal(value1);
			Hexa.setVal(value2);
			Hex = (Hex / Hexa);
			cout << "\tKet qua: " << Hex.getVal() << endl;
			break;
		}
		default:
			break;
		}

		break;
	}
	default:
		break;
	}
	string tryagain;
	cout << "\n\nTiep tuc(Y/N): "; cin >> tryagain;
	while (tryagain == "y" || tryagain == "Y"){
		system("cls");
		cout << "\t----------- Chuong trinh chuyen he so 2, 8, 10, 16 -----------\n\n";
		cout << "--------Chuyen co so.--------\t\t--------Thuc hien tinh toan.----------\n\n";
		cout << "\t1.  BIN -> OCT\n" << "\t2.  BIN -> DEC\t\t\t\t"; cout << "13.  BIN vs BIN\n"; cout << "\t3.  BIN -> HEX\n\n";
		cout << "\t4.  OCT -> BIN\n" << "\t5.  OCT -> DEC\t\t\t\t"; cout << "14.  OCT vs OCT\n"; cout << "\t6.  OCT -> HEX\n\n";
		cout << "\t7.  DEC -> BIN\n" << "\t8.  DEC -> OCT\t\t\t\t"; cout << "15.  DEC vs DEC\n"; cout << "\t9.  DEC -> HEX\n\n";
		cout << "\t10. HEX -> BIN\n" << "\t11. HEX -> OCT\t\t\t\t"; cout << "16.  HEX vs HEX\n"; cout << "\t12. HEX -> DEC\n\n";
		do
		{
			cin.clear();
			cout << "Nhap lua chon: "; cin >> select;
			fflush(stdin);
		} while (cin.fail() || select<1 || select>16);
		switch (select) {
		case 1:
		{
			string value;
			cout << "\tNhap gia tri cho co so 2->8: "; cin >> value;
			HeSo2 bin(value);
			cout << "\tKet qua: " << bin.toOctal().getVal() << endl;
			break;
		}
		case 2:
		{
			string value;
			cout << "\tNhap gia tri cho co so 2-10: "; cin >> value;
			HeSo2 bin(value);
			cout << "\tKet qua: " << bin.toDec().getVal() << endl;
			break;
		}
		case 3:
		{
			string value;
			cout << "\tNhap gia tri cho co so 2->16: "; cin >> value;
			HeSo2 bin(value);
			cout << "\tKet qua: " << bin.toHex().getVal() << endl;
			break;
		}
		case 4:
		{
			string value;
			cout << "\tNhap gia tri cho co so 8->2: "; cin >> value;
			HeSo8 oct(value);
			cout << "\tKet qua: " << oct.toBin().getVal() << endl;
			break;
		}
		case 5:
		{
			string value;
			cout << "\tNhap gia tri cho co so 8-10: "; cin >> value;
			HeSo8 oct(value);
			cout << "\tKet qua: " << oct.toDec().getVal() << endl;
			break;
		}
		case 6:
		{
			string value;
			cout << "\tNhap gia tri cho co so 8->16: "; cin >> value;
			HeSo8 oct(value);
			cout << "\tKet qua: " << oct.toHex().getVal() << endl;
			break;
		}
		case 7:
		{
			string value;
			cout << "\tNhap gia tri cho co so 10->2: "; cin >> value;
			HeSo10 dec(value);
			cout << "\tKet qua: " << dec.toBin().getVal() << endl;
			break;
		}
		case 8:
		{
			string value;
			cout << "\tNhap gia tri cho co so 10->8: "; cin >> value;
			HeSo10 dec(value);
			cout << "\tKet qua: " << dec.toOctal().getVal() << endl;
			break;
		}
		case 9:
		{
			string value;
			cout << "\tNhap gia tri cho co so 10->16: "; cin >> value;
			HeSo10 dec(value);
			cout << "\tKet qua: " << dec.toHex().getVal() << endl;
			break;
		}
		case 10:
		{
			string value;
			cout << "\tNhap gia tri cho co so 16->2: "; cin >> value;
			HeSo16 hex(value);
			cout << "\tKet qua: " << hex.toBin().getVal() << endl;
			break;
		}
		case 11:
		{
			string value;
			cout << "\tNhap gia tri cho co so 16->8: "; cin >> value;
			HeSo16 hex(value);
			cout << "\tKet qua: " << hex.toOctal().getVal() << endl;
			break;
		}
		case 12:
		{
			string value;
			cout << "\tNhap gia tri cho co so 16->10: "; cin >> value;
			HeSo16 hex(value);
			cout << "\tKet qua: " << hex.toDec().getVal() << endl;
			break;
		}
		case 13:
		{
			cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
			cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
			do
			{
				cin.clear();
				cout << "Nhap lua chon: "; cin >> select;
				fflush(stdin);
			} while (cin.fail() || select<1 || select>4);
			switch (select)
			{
			case 1: {
				string value1;
				string value2;
				cout << "\tGia tri binary 1: "; cin >> value1;
				cout << "\tGia tri binary 2: "; cin >> value2;
				bin.setVal(value1);
				binary.setVal(value2);
				bin = (bin + binary);
				cout << "\tKet qua: " << bin.getVal() << endl;
				break;
			}
			case 2: {
				string value1;
				string value2;
				cout << "\tGia tri binary 1: "; cin >> value1;
				cout << "\tGia tri binary 2: "; cin >> value2;
				bin.setVal(value1);
				binary.setVal(value2);
				bin = binary - bin;
				cout << "\tKet qua: " << bin.getVal() << endl;
				break;
			}
			case 3: {
				string value1;
				string value2;
				cout << "\tGia tri binary 1: "; cin >> value1;
				cout << "\tGia tri binary 2: "; cin >> value2;
				bin.setVal(value1);
				binary.setVal(value2);
				bin = binary * bin;
				cout << "\tKet qua: " << bin.getVal() << endl;
				break;
			}
			case 4: {
				string value1;
				string value2;
				cout << "\tGia tri binary 1: "; cin >> value1;
				cout << "\tGia tri binary 2: "; cin >> value2;
				bin.setVal(value1);
				binary.setVal(value2);
				bin = binary / bin;
				cout << "\tKet qua: " << bin.getVal() << endl;
				break;
			}
			default:
				break;
			}

			break;
		}
		case 14:
		{
			cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
			cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
			do
			{
				cin.clear();
				cout << "Nhap lua chon: "; cin >> select;
				fflush(stdin);
			} while (cin.fail() || select<1 || select>4);
			switch (select)
			{
			case 1: {
				string value1;
				string value2;
				cout << "\tGia tri octal 1: "; cin >> value1;
				cout << "\tGia tri octal 2: "; cin >> value2;
				octal.setVal(value1);
				oct.setVal(value2);
				oct = (oct + octal);
				cout << "\tKet qua: " << oct.getVal() << endl;
				break;
			}
			case 2: {
				string value1;
				string value2;
				cout << "\tGia tri octal 1: "; cin >> value1;
				cout << "\tGia tri octal 2: "; cin >> value2;
				octal.setVal(value1);
				oct.setVal(value2);
				oct = (oct - octal);
				cout << "\tKet qua: " << oct.getVal() << endl;
				break;
			}
			case 3: {
				string value1;
				string value2;
				cout << "\tGia tri octal 1: "; cin >> value1;
				cout << "\tGia tri octal 2: "; cin >> value2;
				octal.setVal(value1);
				oct.setVal(value2);
				oct = (oct * octal);
				cout << "\tKet qua: " << oct.getVal() << endl;
				break;
			}
			case 4: {
				string value1;
				string value2;
				cout << "\tGia tri octal 1: "; cin >> value1;
				cout << "\tGia tri octal 2: "; cin >> value2;
				octal.setVal(value1);
				oct.setVal(value2);
				oct = (oct / octal);
				cout << "\tKet qua: " << oct.getVal() << endl;
				break;
			}
			default:
				break;
			}

			break;
		}
		case 15:
		{
			cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
			cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
			do
			{
				cin.clear();
				cout << "Nhap lua chon: "; cin >> select;
				fflush(stdin);
			} while (cin.fail() || select<1 || select>4);
			switch (select)
			{
			case 1: {
				string value1;
				string value2;
				cout << "\tGia tri dec 1: "; cin >> value1;
				cout << "\tGia tri dec 2: "; cin >> value2;
				Dec.setVal(value1);
				Decemal.setVal(value2);
				Dec = (Dec + Decemal);
				cout << "\tKet qua: " << Dec.getVal() << endl;
				break;
			}
			case 2: {
				string value1;
				string value2;
				cout << "\tGia tri dec 1: "; cin >> value1;
				cout << "\tGia tri dec 2: "; cin >> value2;
				Dec.setVal(value1);
				Decemal.setVal(value2);
				Dec = (Dec - Decemal);
				cout << "\tKet qua: " << Dec.getVal() << endl;
				break;
			}
			case 3: {
				string value1;
				string value2;
				cout << "\tGia tri dec 1: "; cin >> value1;
				cout << "\tGia tri dec 2: "; cin >> value2;
				Dec.setVal(value1);
				Decemal.setVal(value2);
				Dec = (Dec * Decemal);
				cout << "\tKet qua: " << Dec.getVal() << endl;
				break;
			}
			case 4: {
				string value1;
				string value2;
				cout << "\tGia tri dec 1: "; cin >> value1;
				cout << "\tGia tri dec 2: "; cin >> value2;
				Dec.setVal(value1);
				Decemal.setVal(value2);
				Dec = (Dec / Decemal);
				cout << "\tKet qua: " << Dec.getVal() << endl;
				break;
			}
			default:
				break;
			}

			break;
		}
		case 16:
		{
			cout << "	1.  Phep cong.\t" << "2.  Phep tru.\n\n";
			cout << "	3.  Phep nhan.\t" << "4.  Phep chia.\n\n";
			do
			{
				cin.clear();
				cout << "Nhap lua chon: "; cin >> select;
				fflush(stdin);
			} while (cin.fail() || select<1 || select>4);
			switch (select)
			{
			case 1: {
				string value1;
				string value2;
				cout << "\tGia tri hex 1: "; cin >> value1;
				cout << "\tGia tri hex 2: "; cin >> value2;
				Hex.setVal(value1);
				Hexa.setVal(value2);
				Hex = (Hex + Hexa);
				cout << "\tKet qua: " << Hex.getVal() << endl;
				break;
			}
			case 2: {
				string value1;
				string value2;
				cout << "\tGia tri hex 1: "; cin >> value1;
				cout << "\tGia tri hex 2: "; cin >> value2;
				Hex.setVal(value1);
				Hexa.setVal(value2);
				Hex = (Hex - Hexa);
				cout << "\tKet qua: " << Hex.getVal() << endl;
				break;
			}
			case 3: {
				string value1;
				string value2;
				cout << "\tGia tri hex 1: "; cin >> value1;
				cout << "\tGia tri hex 2: "; cin >> value2;
				Hex.setVal(value1);
				Hexa.setVal(value2);
				Hex = (Hex * Hexa);
				cout << "\tKet qua: " << Hex.getVal() << endl;
				break;
			}
			case 4: {
				string value1;
				string value2;
				cout << "\tGia tri hex 1: "; cin >> value1;
				cout << "\tGia tri hex 2: "; cin >> value2;
				Hex.setVal(value1);
				Hexa.setVal(value2);
				Hex = (Hex / Hexa);
				cout << "\tKet qua: " << Hex.getVal() << endl;
				break;
			}
			default:
				break;
			}

			break;
		}
		default:
			break;
		}
		cout << "\n\nTiep tuc(Y/N): "; cin >> tryagain;
	}
	system("pause");
}