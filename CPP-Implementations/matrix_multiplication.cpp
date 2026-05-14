#include <iostream>
using namespace std;
int main() {
	//(matris çarpımı)	
	int sa,su,k;
	
	int A[2][2]={{1,7},{2,4}};
	int B[2][2]={{3,3},{5,2}};
	int C[2][2];
	
	for(sa=0;sa<2;sa++){
		for(su=0;su<2;su++){
			C[sa][su]=0;
			for(k=0;k<2;k++){
				C[sa][su]+=A[sa][k]*B[k][su];
			}
			cout<<C[sa][su]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
