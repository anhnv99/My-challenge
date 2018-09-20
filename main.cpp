#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "Thucdon.h"
#include "book.h"
#include "list.h"
using namespace std;
int main () 
{
	List ds;
	int  N = 0;
	do
	{
		int chon = ThucDon();
		switch(chon)
		{
		case 1:
			ds.Add();
			break;
		case 2:
			ds.PrintAll();
			break;
		case 3:
			//Luufile();
			break;
		case 4:
			//Mofile();
			break;
		case 5:
			//Suasach();
			break;
		case 6:
			//XuatHTML();
		case 0:
			break;
		}
		if(chon==0)
		{
			break;
		}
	
	}while(1);

	return 0;
}