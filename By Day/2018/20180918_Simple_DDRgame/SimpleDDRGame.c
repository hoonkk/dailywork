#include <stdio.h>
#include <conio.h>
//a -> �� ȭ��ǥ , b -> �Ʒ� ȭ��ǥ, c -> ���� ȭ��ǥ, d- > ������ ȭ��ǥ
void main()
{
	char x[] = "abcdabcd";
	int key;
	for (int i = 0; i < 8; i++)
	{
		switch (x[i]) {
		case 'a':
			printf("��");
			break;
		case 'b':
			printf("��");
			break;
		case 'c':
			printf("��");
			break;
		case 'd':
			printf("��");
			break;
		default:
			printf("�ùٸ� ���� �ƴմϴ�.\n");
			
		}

	}
	
		printf("\nȭ��ǥ�� �Է��ϼ���.\n");

		for (int j = 0; j < 8; j++) {
			key = getch();
			switch (x[j]) {
			case 'a' :
				if (key == 224)
				{
					key = getch();
					if (key == 72) 
					{
						printf("�Է� ����\n");
					}
					else
					{
						printf("�Է� ����\n");
					}
				}
				
			case 'b':
				if (key == 224)
				{
					key = getch();
					if (key == 80)
					{
						printf("�Է� ����\n");
					}
					else
					{
						printf("�Է� ����\n");
					}
				}
				
			case 'c':
				if (key == 224)
				{
					key = getch();
					if (key == 75)
					{
						printf("�Է� ����\n");
					}
					else
					{
						printf("�Է� ����\n");
					}
				}
				

			case 'd':
				if (key == 224)
				{
					key = getch();
					if (key == 77)
					{
						printf("�Է� ����\n");
					}
					else
					{
						printf("�Է� ����\n");
					}
				}
				


			}
			
		}
	
	
	
}