#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <windows.h> 
using namespace std;
int a[128][128];
void define()
{
	for(int i=0;i<128;i++)
	{
		for(int j=0;j<128;j++)
		{
			if(i+j<128)
			a[i][j]=i+j;
			else
			a[i][j]=i+j-128;
		}
	}
}
void i()
{
    int N,j=0; 
	char m=' ',n[100000];
	ofstream fout("code.txt");
	cout<<"秘钥：";
 	cin>>n;
 	char R=cin.get();
	for(N=0;n[N];N++){}
	cout<<"加密文本："; 
	while (m!='\n')
	{
		m = cin.get();
		fout<<char(a[int(m)][int(n[j])]);
		j=(j+1)%(N+1);
	}
}
int main(int argc, char *argv[]) {
	define();
	int w,j;
	cout<<"welcome to <The Vigenere Cipher> by hyb!"<<endl;
	cout<<"输入时请用'_'替换' '，回车结束。"<<endl;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |            FOREGROUND_GREEN);
	i();
	return 0;
	system("PAUSE");
}
