#include <iostream>
#include <fstream> 
#include <windows.h> 
using namespace std;
int a[26][26];
void define()
{
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(95+i+j+2<=122)
			a[i][j]=95+i+j+2;
			else
			a[i][j]=95+i+j-24;
		}
	}
}
void i(int M,int N)
{
	char m[100],n[100];
	
	ofstream fout("code.txt");
	cout<<"��Կ��";
	cin>>n;
	cout<<"�����ı���"; 
	cin>>m;
	for(int i=0,j=0;i<M;i++,j++)
	{
		j=j%N;
		fout<<char(a[int(m[i])-97][int(n[j])-97]);
	}
}
int main(int argc, char *argv[]) {
	define();
	int w,j;
	cout<<"��Կ���ȣ�";
	cin>>w;
	cout<<"�����ı����ȣ�";
	cin>>j;
	i(j,w);
	cout<<"�뵽����Ŀ¼�²�ѯ'code.txt'";
	return 0;
	system("PAUSE");
}
