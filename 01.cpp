/*#include<stdio.h>
int main()
{
	int line=0,b=0,k=0,i=0,j=0;//������ ���� a,i,j,k��0 b��5�� �ʱ�ȭ
	for(k=1; k<=2; k++){//k�� 1�� �ʱ�ȭ 2�̻��̵ɶ����� �ݺ��ϸ� 1�ִ� 1�� k������(�� ȸ���� ����) 1�� for��
	for(i=1; i<10; i++){//i�� 1�� �ʱ�ȭ 10���� ���� ���������� �ݺ��ϸ� 1�ִ� 1�� i������(d1*d2�� d2��) 2�� for��
		for( j=b-3; j<=b; j++){//j�� b-3���� �ʱ�ȭ b���� ���� ���������� �ݺ��ϸ� 1�ִ� 1�� i������(d1*d2�� d1��)3�� for��
				printf("%d*%d=%2d	",j,i,i*j);//d1�� j d2�� i d3�� i*j���� ���
		}//3����
		printf("\n");//3�� �ݺ� ������ ����
	}//2����
	printf("\n"); b=9;//2�� �ݺ� ������ ������ b�� 9�� �ʱ�ȭ 
	}//1����
	printf("�Է��ϼ���:");//���� ���
	scanf("%d",&line);//a�� �ּ����� ���� �Է°��� ����
	for(int i=1; i<=line; i++){//i�� 1�� �ʱ�ȭ�ϰ� line�̻��� �ɶ����� �ݺ����� 1�� ����
		for(int j=line-i; j<line; ++j){//j�� j-i�� �ʱ�ȭ�ϰ� line���� ���� ���������� �ݺ����� 1�� ���� 
			printf("*");//�����
		}
		printf("\n");//������ �� ����
	}

}*/


#include<stdio.h>
void main()
{
	int line=0,res=0;
	char che='a';
	while(true){
		res=scanf("%d",&line);
		printf("%d\n",res);
		if(res==1)
			break;
		while(true){
			che=getchar();
			if(che=='\n')
				break;
		}
	}
}
*//*#include<stdio.h>
int main()
{
	int a=0,i,j;
	for(i=1; i<10; i++){
		for( j=2; j<=5; j++){
			printf("%d*%d=%2d	",j,i,i*j);
		}
			printf("\n");
	}
		printf("\n");
	for(i=1; i<10; i++){
		for(j=6; j<=9; j++){
			printf("%d*%d=%2d	",j,i,i*j);
		}
		printf("\n");
	}*//*
#include<stdio.h>
int main()
{
	int i,k=6;
	
		for(i=1; i<k; i++){
		printf("%d %d = %d\n",i,k-i,i*(k-i));
	}
}
/*
#include<stdio.h>
int main()
{
	int i;
	for(i=0; i<5; i++){
		printf("%d\n",5-i);
	}
}
*//*
#include<stdio.h>
int main()
{
	int i,j,k=2;
for(i=0; i<3; i++){
	for(j=0; j<k; j++){
		printf("*");
		}
	--k;if(k!=0)printf("\n");
	}
}*//*
#include<stdio.h>
int inputvalue(char*s);//�ܺ��Լ� ����
int main()//���� �Լ� ����
{
	int res=0; //���� ����
	int a = 0;
	a=inputvalue("� ���� �����Ͻðڽ��ϱ�?");//������ ���� a�� ���� �ܺ��Լ� inputvalue()�� ���� ���� ���
	printf("a value-%d",a);//a�� ���� ���
	return 0;
}
int inputvalue(char*str){//�ܺ��Լ� inputvalue() ���� �Ű����� char*str ���
	int res=0,value; //���� ����
	printf("%s",str); //�Ű��������� ���� �ּҰ��� ����� ���ڿ� ���
	while(res!=1){//���Ϲ��� �̿��� res�� ���� 1�� �ƴ� ���� ����
		res=scanf("%d",&value);//scanf�� ��ȯ���� res�� ����
		fflush(stdin);//fflush(stdin)���� \n�� ���� �� �κ��� ����� ���Ϳ� ���ÿ� �ݺ��� �����
	}
	return value;//value���� ��ȯ
}*/
