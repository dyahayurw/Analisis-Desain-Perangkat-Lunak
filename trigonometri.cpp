#include <iostream>
#include <cmath>
#define PI 3.141592653589793238463
using namespace std;
 
 
int main()
{
    float nilai = 0.6;
    cout << "masukkan nilai: ";
    cin >> nilai;
    cout << "sin(" << nilai << ") = " << sin(nilai*(PI / 180.0)) << endl;
    cout << "cos(" << nilai << ") = " << cos(nilai*(PI / 180.0)) << endl;
    cout << "tan(" << nilai << ") = " << tan(nilai*(PI / 180.0)) << endl;
    cout << "csc(" << nilai << ") = " << (1/(sin(nilai*(PI / 180.0)))) << endl;
    cout << "sec(" << nilai << ") = " << (1/(cos(nilai*(PI / 180.0)))) << endl;
    cout << "cot(" << nilai << ") = " << (1/(tan(nilai*(PI / 180.0)))) << endl;
    system("pause");
    return 0;
}

/*#include <conio.h>
#include <iostream>
#include <stdio.h>
#define PI 3.141
using namespace std;

int main()
{
	double sudutA,sinA,cosA,tanA;
    cout << "  "<cout << "Menghitung sin,cos, dan tan"<<cout<< "===========================================";

    cout << "Masukkan nilai sudut yang akan dihitung";
    cout << " A= "; 
	cin>>sudutA;
        sinA = sin(sudutA*PI/180);
    cosA = cos(sudutA*PI/180);
    tanA = tan(sudutA*PI/180);
    cout << "sin A = " << sinA<    cout << "cos A = " << cosA<    cout << "tan A = " << tanA<
getch();
}*/
