#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	float D[1001] = { 0, }; // 1000명의 학생들+1, float 값 저장 
	cin >> n;                //

	for (int i = 0; i < n; i++) //첫번째 케이스, 특정범위값  
	{
		int stuNum = 0;
		float sum = 0;

		cin >> stuNum;            // 메인함수 선언
		for (int j = 1; j < stuNum+1; j++) // 케이스 메인함수 선언 
		{
			cin >> D[j];
			sum += D[j];
		}

		float avg = sum / stuNum;            //avg
		float ans = 0;

		for (int j = 1; j < stuNum + 1; j++) //각 케이스 , 포인터 정의
		{
			if (D[j] > avg) ans += 1;
		}

		printf("%.3f%%\n", (ans / stuNum) * 100); //소숫점 3자리, 평균값 
		
	}
	
}
