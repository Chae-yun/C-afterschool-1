struct student{
	char name[20];
	int kor, eng, math;
	double ave;
};

typedef struct student STUDENT;

STUDENT* Initialize(int num);
int AddStudentInfo(STUDENT *std, int totalCnt, int *pCurCnt);
void ListByAverage(STUDENT *std, int cnt);
void PrintStdList(STUDENT *std, int cnt);