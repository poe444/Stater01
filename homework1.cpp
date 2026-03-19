//Main.c

//int potionStatus();
//int GetPotionChoice();

#include<stdio.h>

int StatusChoice();
int GetMenuChoice();
int InPutStatus();
int status[4] = { 0 };
void nowStatus();
void setPotion(int count, int* p_HPPotion, int* p_MPPotion, int* p_BuffPotion);
int HPPotion = 0;
int MPPotion = 0;
int BuffPotion = 0;

int main(void)
{
	setPotion(5, &HPPotion, &MPPotion, &BuffPotion);
	StatusChoice();

	return 0;
}

void nowStatus()
{
	printf("현재 스테이터스를 출력합니다.");
	printf("\n=== 현재 스테이터스 ===\n");
	printf("HP  : %d\n", status[0]);
	printf("MP  : %d\n", status[1]);
	printf("ATK : %d\n", status[2]);
	printf("DEF : %d\n", status[3]);
	printf("남은 포션 \nHP: %d / MP: %d / 강화: %d\n", HPPotion, MPPotion, BuffPotion);
}

void setPotion(int count, int* p_HPPotion, int* p_MPPotion, int* p_BuffPotion)
{
	*p_HPPotion = *p_HPPotion + count;
	*p_MPPotion = *p_MPPotion + count;
	*p_BuffPotion = *p_BuffPotion + count;

}

//int GetPotionChoice()
//{
//	int input;
//	int result;
//
//	printf(" 1.HP UP / 2.MP UP / 3.공격력 UP / 4.방어력 UP / 5.현재 능력치 / 6.Level Up / 0.나가기 ");
//	printf("선택하세요.");
//
//	result = scanf_s("%5d", &input);
//
//	if (input == 0)
//	{
//		return 0;
//	}
//
//	return input;
//
//}


//근데 포션을 사용하면 현재 스테이터스에서 +20 해야하는거라면 int status[?] 이 방안에 들어가있는 값에 대입하면 되긴하지만, int nowStatus; nowStatus = InPutStatus(); 같이 값을 불러와서 하게 되는 경우도 있나? 이럴 필요는 없나?
//int potionStatus()
//{
//	{
//		int choice;
//
//		while (1)
//		{
//			choice = GetPotionChoice();
//
//
//			switch (choice)
//			{
//			case 1:
//
//				if (HPPotion > 0)
//				{
//					status[0] = status[0] + 20;
//					HPPotion = HPPotion - 1;
//					printf("HP포션을 사용해서 HP 최대치가 20 증가했습니다!");
//					break;
//				}
//				else
//				{
//					printf("이런 HP물약이 다 떨어졌네요.");
//					break;
//				}
//
//			case 2:
//				if (MPPotion > 0)
//				{
//					status[1] = status[1] + 20;
//					MPPotion = MPPotion - 1;
//					printf("MP포션을 사용해서 MP 최대치가 20 증가했습니다!");
//					break;
//				}
//				else
//				{
//					printf("이런 MP물약이 다 떨어졌네요.");
//					break;
//				}
//
//			case 3:
//				if (BuffPotion > 0)
//				{
//					status[2] = status[2] * 2;
//					BuffPotion = BuffPotion - 1;
//					printf("강화포션을 사용해서 현재 ATK가 2배 증가했습니다!");
//					break;
//				}
//				else
//				{
//					printf("이런 강화물략이 다 떨어졌네요.");
//					break;
//				}
//
//			case 4:
//				if (BuffPotion > 0)
//				{
//					status[3] = status[3] * 2;
//					BuffPotion = BuffPotion - 1;
//					printf("강화포션을 사용해서 현재 DEF가 2배 증가했습니다!");
//					break;
//				}
//				else
//				{
//					printf("이런 MP물약이 다 떨어졌네요.");
//					break;
//				}
//
//			case 5:
//				if (choice == 5)
//				{
//					nowStatus();
//					break;
//				}
//
//				else
//				{
//					break;
//				}
//
//			}
//
//		}
//	}
//}

int GetMenuChoice()
	{
		int input;
		int result;

		printf(" 1.HP UP / 2.MP UP / 3.공격력 UP / 4.방어력 UP / 5.현재 능력치 / 6.Level Up / 0.나가기 ");
		printf("선택하세요.");

		result = scanf_s("%5d", &input);

		if (input == 0)
		{
			return 0;
		}

		return input;

	}



int StatusChoice()
{
	{
		int choice;

		while (1)
		{
			choice = GetMenuChoice();

			if (choice == 0) 
			{
				printf("나가기를 선택하셨습니다.");
				break;
			}
			
			switch (choice) 
			{
			case 1:

				if (HPPotion > 0)
				{
					status[0] = status[0] + 20;
					HPPotion = HPPotion - 1;
					printf("HP포션을 사용해서 HP 최대치가 20 증가했습니다!");
					break;
				}
				else
				{
					printf("이런 HP물약이 다 떨어졌네요.");
					break;
				}

			case 2:
				if (MPPotion > 0)
				{
					status[1] = status[1] + 20;
					MPPotion = MPPotion - 1;
					printf("MP포션을 사용해서 MP 최대치가 20 증가했습니다!");
					break;
				}
				else
				{
					printf("이런 MP물약이 다 떨어졌네요.");
					break;
				}

			case 3:
				if (BuffPotion > 0)
				{
					status[2] = status[2] * 2;
					BuffPotion = BuffPotion - 1;
					printf("강화포션을 사용해서 현재 ATK가 2배 증가했습니다!");
					break;
				}
				else
				{
					printf("이런 강화물략이 다 떨어졌네요.");
					break;
				}

			case 4:
				if (BuffPotion > 0)
				{
					status[3] = status[3] * 2;
					BuffPotion = BuffPotion - 1;
					printf("강화포션을 사용해서 현재 DEF가 2배 증가했습니다!");
					break;
				}
				else
				{
					printf("이런 MP물약이 다 떨어졌네요.");
					break;
				}

			case 5:
				nowStatus();
				break;
			}
			
		}
		return 0;
	}
}


int InPutStatus()
{
	int i;


	for (i = 0; i < 4; ++i)
	{
		status[i] = 0;


	}

	while (1)
	{

		int result;

		printf(" HP를 입력해주세요. ");
		result = scanf_s("%5d", &status[0]);

		if (status[0] >= 50)
		{
			
			break;
		}

		if (status[0] < 50)
		{
			printf("HP와 MP는 50보다 작을 수 없습니다. 다시 입력하십시오.");
			continue;
		}
		return result;
	}

	while (2)
	{

		int result;

		printf("MP를 입력해주세요. ");
		result = scanf_s("%5d", &status[1]);

		if (status[1] >= 50)
		{

			break;
		}

		if (status[1] < 50)
		{
			printf("MP는 50보다 작을 수 없습니다. 다시 입력하십시오.");
			continue;
		}
		return result;
	}

	while (3)
	{

		int result;

		printf(" ATK를 입력해주세요. ");
		result = scanf_s("%5d", &status[2]);

		if (status[2] == 0)
		{
			printf("ATK 0이 될 수 없습니다. 다시 입력하십시오.");
			continue;
		}

		if (status[2] > 0)
		{

			break;
		}
		return result;
	}

	while (4)
	{

		int result;

		printf("DEF를 입력해주세요. ");
		result = scanf_s("%5d", &status[3]);

		if (status[3] == 0)
		{
			printf("DEF 0이 될 수 없습니다. 다시 입력하십시오.");
			continue;
		}

		if (status[3] >  0)
		{
			
			break;
		}

		return result;
	}

	return 0;
	//return StatusChoice();
}
