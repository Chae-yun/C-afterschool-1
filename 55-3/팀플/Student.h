typedef struct student{
	char name[20];
	int kor, eng, math;
	double ave;
}STUDENT;
STUDENT* Initialize(int num);
void AddStudentInfo(STUDENT *std, int totalCnt, int *pCurCnt);
void ListByAverage(STUDENT *std, int cnt);
void ListByName(STUDENT *std, int cnt);
void PrintStdList(const STUDENT *std, int cnt);
int CompareByAverage(const void* e1, const void* e2);
int CompareByName(const void* e1, const void* e2);