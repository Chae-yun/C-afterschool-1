#include<stdio.h>

typedef enum{ Seoul, Busan, Daegu, Incheon, Gwangju, Daejeon, Ulsan, Gyeonggi, Gangwon, Chungbuk,
	                  Chungnam, Jeonbuk, Jeonnam, Gyeongbok, Gyeongnam, Jeju, Etc }Regions;

char* NameEng[] = { "Seoul", "Busan", "Daegu", "Incheon", "Gwangju", "Daejeon", "Ulsan", "Gyeonggi",
"Gangwon", "Chungbuk", "Chungnam", "Jeonbuk", "Jeonnam", "Gyeongbok", "Gyeongnam", "Jeju", "Etc" }; //�迭

char* NameKor[] = { "����Ư����", "�λ걤����", "�뱸������", "��õ������", "���ֱ�����", "����������", "��걤����",
"��⵵", "������", "��û�ϵ�", "��û����", "����ϵ�", "���󳲵�", "���ϵ�", "��󳲵�", "����Ư����ġ��", "�ؿ�" }; //�迭

int main()
{
	Regions r; //������ ���� ����
	for (r = Seoul; r <= Etc; r++) //�ݺ��ϸ鼭 ����
		printf("%s : %s\n", NameKor[r], NameEng[r]); //����
}

