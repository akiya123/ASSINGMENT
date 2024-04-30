#include<iostream>
#include<math.h> 
using namespace std;
void nhapthuc(float &x){
	cout<<"nhap vao gia tri thuc X: ";
	cin>>x; 
}
void nhapnguyen(int &n, char a){
	cout<<"nhap vao gia tri nguyen "<< a <<": "; 
	cin>>n; 
}
int tang1(int &n){
	return n+1; 
}
int giam1(int &n){
	return n-1 ;
}
float p(float x, int n){
	float	kq = 2018 * pow(1.0*x,1.0*n);
	for(int i=2; i<=n; i++){
		kq = kq + 1.0*pow(x,i)/pow(3,i-1); 
	}
	return kq; 
} 
int tong1(int n){
	int kq=0;	
	for(int i=5;i<=n;i++){
		if(i%2==0){
			kq = kq +i; 
		} 
	}
	return kq; 
}

int tong(int n, int m){
	int kq=0;
	if( m < 5 || m == n || n > m){
		return 0;
	}
	for(int i=5;i<=m;i++){
		if(i%2==0){
			kq = kq +i; 
		} 
	}
	return kq; 
}

int main(){
	char n1 = 'n', m1 = 'm';
	float x; int n,m;
	//nhap x, n, m
	nhapthuc(x); nhapnguyen(n,n1); 	nhapnguyen(m,m1);
	//tang, giam n 1 don vi
		cout<<"\nTang gia tri n  mot don vi la: "<<tang1(n)<<endl;
		cout<<"Giam gia tri n  mot don vi la: "<<giam1(n)<<endl<<endl; 
	//tang, giam m 1 don vi
		cout<<"\nTang gia tri m  mot don vi la: "<<tang1(m)<<endl;
		cout<<"Giam gia tri m  mot don vi la: "<<giam1(m)<<endl<<endl;
	//bieu thuc
		cout<<"gia tri cua P(x,n) la: "<<p(x,n)<<endl;
		cout<<"tong so chan lon hon 5 tu 1 den n la: "<<tong1(n);
		cout<<"\ntong so chan lon hon 5 tu n den m la: "<<tong(n,m);
		
		
		float	kq = 2018 * pow(1.0*x,1.0*n);
	for(int i=2; i<=n; i++){
		kq = kq + 1.0*pow(x,i)/pow(3,i-1); 
	}
	cout <<"\n" <<kq;		
	

	return 0; 
}
