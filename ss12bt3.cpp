#include<stdio.h>
long long giaithua(int n){
	if(n<0){
		printf("khong the tinh giai thua.\n");
		return -1;
	}
	long long result =1;
	for(int i=1;i<=n;i++){
		result *=i;
		
	}
	return result;
}
int main(){
	int n;
	printf("nhap mot so vao n: ");
	scanf("%d",&n);
	long long result=giaithua(n);
	if(result!=-1){
		printf("giai thua cua %d la: %lld\n",n,result);
		
	}
	return 0;
}
