#include <iostream>
using namespace std;
int main() {
	
	//(5x5 birim matris)
	int i,j;
	
	int A[5][5];
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(i==j)
					A[i][j]=1;
				else
					A[i][j]=0;
				cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
	return 0;
}
