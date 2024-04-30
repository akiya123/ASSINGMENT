#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main(){
int so_ptu,i;
cout << "Nhap so phan tu nguyen: ";
cin >> so_ptu;
double *a = new double [so_ptu];
double *a_tang_dan = new double [so_ptu];
for(int i = 0; i < so_ptu; i++){
	cout <<"Nhap so thuc a"<<i + 1<<": ";
	cin >> a[i];
	a_tang_dan[i] = a[i];
	}
	
//xuat qua file
	ofstream fo("ASSINGMENT2.txt");
	fo << "Kich thuoc cua mang la "<< so_ptu <<endl;
	fo <<"\nmang a: ";
	for(i = 0; i < so_ptu; i++){
	fo << setprecision(2) << fixed << a[i] << " ";
	}
	cout << endl;
	fo<< "\nend";
	

// Xuat mang a ra man hinh
cout <<"\nmang a: ";
for(i = 0; i < so_ptu; i++){
	cout << setprecision(2) << fixed << a[i] << " ";
}
cout << endl;

// xep thu tu tang dan
for (i = 0; i < so_ptu ; i++){
        for (int j = i + 1; j < so_ptu; j++){
            if (a_tang_dan[i] > a_tang_dan[j]){
                int tmp = a_tang_dan[i];
                a_tang_dan[i] = a_tang_dan[j];
                a_tang_dan[j] = tmp; 
            }
    }
}

// max
cout <<"\nSo lon nhat cua mang: " << a_tang_dan[so_ptu-1] <<endl;
cout <<"So lon nhi cua mang: " << a_tang_dan[so_ptu-2] <<endl;

//ktra mang co 3 so duong lien tiep khong
bool check = true;
for(i = 0; i < so_ptu-2; i++){
	if(a[i] > 0 && a[i+1] > 0 && a[i+2] > 0){
		cout <<"\nHam co 3 phan tu duong lien tiep";
		check = false;
		break;
	}
}
if(check){
	cout <<"\nHam khong co 3 phan tu duong lien tiep";
}

// xoa phan tu > 5

for(i = 0; i < so_ptu; i++){
	if(a[i] > 5){
		for(int j = i; j < so_ptu; j++){
        a[j] = a[j + 1];
    	}
    	i--;
    	so_ptu--;
	}
}
    cout << "\n\nmang a khi xoa cac phan tu > 5: ";
for(i = 0; i < so_ptu; i++){
	cout << a[i] << " ";
}
//lm tron
//for(int i = 0; i < so_ptu; i++){
//	cout << setprecision(2) << fixed << a[i];
//	}
	fo.close();
	return 0;
}


