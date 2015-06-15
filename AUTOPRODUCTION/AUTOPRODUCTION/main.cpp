#include <stdio.h>
#include <cstdlib>	// qsort

int DecInt(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}

class Materials{ // ���
	
	int r; // ���ۺ��	(1�� r �� 1,000)
	int c; // ĭ��  ��	 (1�� c �� 10)
	int inven[10];	// �� ĭ�� ���迭;
	int dump[10];	// ��꿡 ���� �迭 
	int sum;	// �� ����
	int choice; // Make Production�� ���̴� ����
public:
	int id;
	static int ID;

	Materials(const Materials& p){
		id = p.id;
		r = p.r;
		c = p.c;
		for (int i = 0; i < c; i++){
			inven[i] = p.inven[i];
		}
		sum = p.sum;
		choice = p.choice;
	}

	Materials() :id(0){}	// Null Constructor

	Materials(int& _r, int& _c){
		id = ++Materials::ID;
		r = _r; c = _c;
		choice = 1;

		for (int i = 0; i < c; i++){
			scanf("%d", &inven[i]);
		}
		
		// �������� ����
		qsort(inven, c, sizeof(int), DecInt);
		
		sum = 0;
		for (int i = 0; i < c; i++){
			sum += inven[i];
			dump[i] = sum/r;
		}
	}
	bool Choice(){
		if (choice < c) {
			choice++;
			return true;
		}
		return false;
	}
	int MakeProduct(){
		return dump[choice-1];
	}
	int NextProduct(){
		if (choice < c) return dump[choice];
		return -1;
	}

	void PrintInven(){
		printf("----------  Materials ID : %2d  ----------\n", id);
		printf("%2d Choice [%4d] : ", choice, MakeProduct());
		for (int i = 0; i < choice; i++){
			printf("%4d ", inven[i]);
		}
		printf("\n[%4d/%4d]\n", r , sum);
		
	}

};
int Materials::ID = 0;
int compareMaterials(const void * a, const void * b)
{
	Materials &ma = (*(Materials*)a)
			, &mb = (*(Materials*)b);
	int c = ma.MakeProduct() - mb.MakeProduct();
	return c == 0 ? mb.NextProduct() - ma.NextProduct() : c;
}

int sortID(const void * a, const void * b)
{
	return (*(Materials*)a).id - (*(Materials*)b).id;
}

int main()
{
	int T, N;
	Materials m[10];

	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		int r, c;
		for (int i = 0; i < N; i++){
			scanf("%d %d", &r, &c);
			m[i] = Materials(r, c);	// inven�� �����ڿ��� ����.
		}

		for (int i = N; i < 10; i++){
			qsort(m, N, sizeof(Materials), compareMaterials);
			if (!m[0].Choice()) break;
		}
		qsort(m, N, sizeof(Materials), compareMaterials);
		printf("%d\n", m->MakeProduct());

		qsort(m, N, sizeof(Materials), sortID);
		printf("=========  Selection Materials  =========\n");
		for (int i = 0; i < N; i++){
			m[i].PrintInven();
		}
		printf("=========  Selection Materials  =========\n");
	}
	return 0;
}
