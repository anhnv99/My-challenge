#ifndef book_h
#define book_h
#include <iostream>
#include <iomanip>
using namespace std;
class book
{
private:
	string name;
	string tentacgia;
	int nxb;
	int sotrang;
public:
	book():name(),tentacgia(),nxb(),sotrang(){}
	book(string n,string ttg,int nxb,int sotrang):name(n),tentacgia(ttg),nxb(nxb),sotrang(sotrang){}
	friend istream &operator >> (istream & in, book &b)
	{
		cin.ignore();
		cout<<"Nhap ten sach: ";
		getline(in, b.name);
		cout<<"Ten tac gia: ";
		getline(in, b.tentacgia);
		cout<<"Nhap nam xuat ban: ";
		in>>b.nxb;
		cout<<"Nhap so trang: ";
		in>>b.sotrang;
		return in;
	}
	friend ostream &operator <<(ostream &out,book b)
	{
		out<<b.name<<"\t\t";
		out<<b.tentacgia<<"\t\t";
		out<<b.nxb<<"\t\t";
		out<<b.sotrang<<endl;
		return out;				
	}
};
#endif