#include<iostream>
#include <cstdlib>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int fun(int a,int *b){
	if (a>1){
		fun(a / 2,b);
	}
	 *b=a % 2;

}
class password
{
public:
	void get();
	void show();
	int change();
private:
	char h[1000];
	int a[1000];
};
void password::get(){
	cin >> h;
}
void password::show(){
	cout << h << endl;
}
int password::change(){
	int length=strlen(h),c[1000];
	for (int i=0;i<length;i++){
		a[i] = h[i];
	}
	for (int i=0;i<length;i++){
		for (int j=0;j<8;j++){
			c[8*i+j] = fun(a[i]);
		}
	}
	for (int i=0;i<8;i++){
		cout << c[i] << endl;
	}
	return 0;
}




int main(){
	char a[65] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" };
	int *b;
	int c[100];
	*b = c[100];
	password password;
	password.get();
	password.change();






	system("pause");
	return 0;
}

