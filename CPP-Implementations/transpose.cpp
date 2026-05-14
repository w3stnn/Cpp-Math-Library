#include <iostream>
using namespace std;
int main() {
	int i,j;
	int A[2][3]={{1,2,3},{4,5,6}}; //2 satır 3 sütunlu A matrisi
	int B[3][2];				   //3 satır 2 sütunlu B matrisi
	
	cout<<"A matrisi:\n";	
	for(i=0;i<2;i++){			   //A'nın satır sayısı 2
		for(j=0;j<3;j++){		   //A'nın sütun sayısı 3
			cout<<A[i][j]<<" ";
			B[j][i]=A[i][j];	   //Transpoz alma işlemi burada yapılıyor
		}
		cout<<"\n";
	}
	
	cout<<"B matrisi:\n";	
	for(i=0;i<3;i++){			   //B'nin satır sayısı 3
		for(j=0;j<2;j++){		   //B'nin sütun sayısı 2
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
