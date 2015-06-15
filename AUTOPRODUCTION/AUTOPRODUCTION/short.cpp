//#include <stdio.h>
//#include <cstdlib>
//
//int DecInt(const void* a, const void* b)
//{
//	return (*(int*)b - *(int*)a);
//}
//class Mat{
//	int r;
//	int c;
//	int v[10];
//	int p;
//public:
//	Mat(){}
//	Mat(int& _r, int& _c){
//		r = _r; c = _c;
//		p = 1;
//		for (int i = 0; i < c; i++){
//			scanf("%d", &v[i]);
//		}
//		qsort(v, c, sizeof(int), DecInt);
//		int sum = 0;
//		for (int i = 0; i < c; i++){
//			sum += v[i];
//			v[i] = sum / r;
//		}
//	}
//
//	bool Sel(){
//		if (p < c) {
//			p++;
//			return true;
//		}
//		return false;
//	}
//	int MakeP(){
//		return v[p - 1];
//	}
//	int NextP(){
//		if (p < c) return v[p];
//		return -1;
//	}
//};
//int sortM(const void * a, const void * b)
//{
//	Mat &ma = (*(Mat*)a)
//			, &mb = (*(Mat*)b);
//	int c = ma.MakeP() - mb.MakeP();
//	return c == 0 ? mb.NextP() - ma.NextP() : c;
//}
//int main()
//{
//	int T, N;
//	Mat m[10];
//
//	scanf("%d", &T);
//	while (T--){
//		scanf("%d", &N);
//		int r, c;
//		for (int i = 0; i < N; i++){
//			scanf("%d %d", &r, &c);
//			m[i] = Mat(r, c);
//		}
//
//		for (int i = N; i < 10; i++){
//			qsort(m, N, sizeof(Mat), sortM);
//			if (!m->Sel()) break;
//		}
//		qsort(m, N, sizeof(Mat), sortM);
//		printf("%d\n", m->MakeP());
//	}
//	return 0;
//}
