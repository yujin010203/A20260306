#include <iostream>

using namespace std;

int main()
{
	//NULL
	

	// swap
	int A = 10;
	int B = 30;
	int Temp = A;
	A = B;
	B = Temp;

	// 똑같은 카드가 나오면 안됨
	int Cards[52] = { 0, };

	for (int i = 0; i < 52; i++)
	{
		Cards[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));
	// shuffle
	// Random(난수) 두 개 선택해서 교환
	for (int i = 0; i < 10; i++)
	{
		int FirstIndex = rand() % 52;
		int SecondIndex = rand() % 52;
		int Temp = Cards[FirstIndex];

		Cards[FirstIndex] = Cards[SecondIndex];
		Cards[SecondIndex] = Temp;
	}





	return 0;
}


/*int main()
{
	// 카드 이름 배열 (출력용)
	string CardNames[12] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "J", "Q", "K" };
	
	// 카드 실제 값 배열 (계산용)
	int CardValues[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10 };

	int Computer[3];
	int Player[3];

	srand((unsigned int)time(NULL));

	// 컴퓨터 카드 3장
	cout << "컴퓨터 : ";
	int ComputerScore = 0;
	for (int i = 0; i < 3; i++)
	{
		int randomIndex = rand() % 12;
		Computer[i] = randomIndex;
		cout << CardNames[Computer[i]] << " ";
		ComputerScore += CardValues[Computer[i]];
	}
	cout << endl;

	// 플레이어 카드 3장
	cout << "플레이어 : ";
	int PlayerScore = 0;
	for (int j = 0; j < 3; j++)
	{
		int randomIndex = rand() % 12;
		Player[j] = randomIndex;
		cout << CardNames[Player[j]] << " ";
		PlayerScore += CardValues[Player[j]];
	}
	cout << endl;
	cout << endl;

	// 게임 결과 판정
	cout << "컴퓨터 스코어 : " << ComputerScore << ", 플레이어 스코어 : " << PlayerScore << endl;
	cout << endl;

	// 둘 다 21이 넘는 경우
	if (ComputerScore > 21 && PlayerScore > 21)
	{
		cout << "플레이어의 승리입니다." << " ";
	}
	// 컴퓨터만 21이 넘은 경우
	else if (ComputerScore > 21)
	{
		cout << "플레이어의 승리입니다." << " ";
	}
	// 플레이어만 21이 넘은 경우
	else if (PlayerScore > 21)
	{
		cout << "컴퓨터의 승리입니다." << " ";
	}
	// 둘 다 21 이하인 경우 점수 비교
	else if (PlayerScore > ComputerScore)
	{
		cout << "플레이어의 승리입니다." << " ";
	}
	else if (ComputerScore > PlayerScore)
	{
		cout << "컴퓨터의 승리입니다." << " ";
	}
	// 점수가 같은 경우
	else
	{
		cout << "플레이어의 승리입니다." << " ";
	}
	cout << endl;

	return 0;
}*/
