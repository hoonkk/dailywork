//���͸� �Է����� �ʰ� ����Ű(Ȥ�� ���ڿ�)�� �Է¹޴� �Լ�

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int key;
	printf("����Ű�� �Է��ϼ���. 0 �Է½� ����˴ϴ�.\n");
	while (1) {
		if (kbhit()) {
			key = getch();
			if (key == 224)
			{
				key = getch();
				switch (key) {
				case 72:
					printf("����Ű ������ �ԷµǾ����ϴ�\n");
					break;
				case 80:
					printf("����Ű �Ʒ����� �ԷµǾ����ϴ�\n");
					break;
				case 75:
					printf("����Ű ������ �ԷµǾ����ϴ�\n");
					break;
				case 77:
					printf("����Ű �������� �ԷµǾ����ϴ�.\n");
					break;
				}

			}
			else if (key == 0)
			{
				printf("���α׷��� �����մϴ�.\n");
				exit(1);
			}
			else printf("���� ������ �𸣰ڽ��ϴ�.\n");
			
		}
	}

	
}