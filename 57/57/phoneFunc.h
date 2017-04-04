typedef struct _phoneData
{
	char name[20];
	char phoneNum[20];
}PHONEDATA;

int SelectMenu();
void PrintData(PHONEDATA *std, int cnt);
int AddData(PHONEDATA *std, int totalCnt, int pCurCnt);
int Search(PHONEDATA *std, int cnt);
void DeletePhoneData(PHONEDATA *std, int cnt);