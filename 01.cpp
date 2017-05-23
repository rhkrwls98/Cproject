/*#include<stdio.h>
int main()
{
	int line=0,b=0,k=0,i=0,j=0;//정수형 변수 a,i,j,k를0 b를5로 초기화
	for(k=1; k<=2; k++){//k를 1로 초기화 2이상이될때까지 반복하며 1주당 1씩 k값증가(총 회전수 제어) 1번 for문
	for(i=1; i<10; i++){//i를 1로 초기화 10보다 작지 않을때까지 반복하며 1주당 1씩 i값증가(d1*d2중 d2값) 2번 for문
		for( j=b-3; j<=b; j++){//j를 b-3으로 초기화 b보다 작지 않을때까지 반복하며 1주당 1씩 i값증가(d1*d2중 d1값)3번 for문
				printf("%d*%d=%2d	",j,i,i*j);//d1의 j d2의 i d3의 i*j값을 출력
		}//3번끝
		printf("\n");//3번 반복 종료후 엔터
	}//2번끝
	printf("\n"); b=9;//2번 반복 종료후 엔터후 b를 9로 초기화 
	}//1번끝
	printf("입력하세요:");//문장 출력
	scanf("%d",&line);//a의 주소지의 값에 입력값을 저장
	for(int i=1; i<=line; i++){//i를 1로 초기화하고 line이상이 될때까지 반복실행 1씩 증산
		for(int j=line-i; j<line; ++j){//j를 j-i로 초기화하고 line보다 작지 않을때까지 반복실행 1씩 증산 
			printf("*");//별찍기
		}
		printf("\n");//별찍은 후 엔터
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
int inputvalue(char*s);//외부함수 선언
int main()//메인 함수 실행
{
	int res=0; //변수 선언
	int a = 0;
	a=inputvalue("어떤 값을 삭제하시겠습니까?");//정수형 변수 a의 값을 외부함수 inputvalue()의 리턴 값을 사용
	printf("a value-%d",a);//a의 값을 출력
	return 0;
}
int inputvalue(char*str){//외부함수 inputvalue() 정의 매개변수 char*str 사용
	int res=0,value; //변수 선언
	printf("%s",str); //매개변수에서 받은 주소값에 저장된 문자열 출력
	while(res!=1){//와일문을 이용해 res의 값이 1이 아닌 동안 루프
		res=scanf("%d",&value);//scanf의 반환값을 res의 저장
		fflush(stdin);//fflush(stdin)으로 \n를 제거 이 부분을 지우면 엔터와 동시에 반복이 멈춘다
	}
	return value;//value값을 반환
}*/
