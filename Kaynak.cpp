#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void MatrisinİciniRastgeleSayilarlaDoldur(int**, int, int);

int main()
{
	srand((unsigned)time(0));
	int satir, sutun;
	cout << "Lutfen matrisin satir ve sutun sayisini giriniz: ";
	cin >> satir >> sutun;

	int** matrisPtr = new int *[satir];//birinci boyut
	for (int i = 0; i < satir; i++)
		matrisPtr[i] = new int[sutun];//ikinci boyut

	MatrisinİciniRastgeleSayilarlaDoldur(matrisPtr, satir, sutun);
	cout << "matris[0][0] = " << matrisPtr[0][0] << endl;


	for (int i = 0; i < satir; i++)
		delete[] matrisPtr[i];

	delete[] matrisPtr;

	return 0;
}

void MatrisinİciniRastgeleSayilarlaDoldur(int** mPtr, int sat, int sut)
{
	for (int i = 0; i < sat; i++)
	{
		for (int j = 0; j < sut; j++)
		{
			mPtr[i][j] = rand() % 6 + 1;
			cout << *(*(mPtr + i) + j) << ' ';
		}
		cout << endl;
	}
}
