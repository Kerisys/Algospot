//// vector썻더니 컴파일 에러남.
//
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//
//using std::vector;
//using std::sort;
//
//class Materials{ // 재료
//	int r; // 제작비용	(1≤ r ≤ 1,000)
//	int c; // 칸의  수	 (1≤ c ≤ 10)
//	vector<int> inven;	// 각 칸의 재료배열 inven[c];
//public:
//	Materials(){
//		choice = 1;
//		scanf("%d %d", &r, &c);
//		for (int i = 0; i < c; i++){
//			int v;
//			scanf("%d", &v);
//			inven.push_back(v);
//		}
//		printf("Materials PrintInven------------------\n");
//		for (int i = 0; i < c; i++){
//			printf("%d ", inven[i]);
//		}
//		printf("\nMaterials PrintInven------------------\n");
//
//		// 오름차순 정렬
//		sort(inven.begin(), inven.end());
//		// 역순. 내림차순
//		std::reverse(inven.begin(), inven.end());
//		int sum = 0;
//		for (int i = 0; i < c; i++){
//			sum += inven[i];
//			inven[i] = sum;
//		}
//		printf("Materials PrintInven------------------\n");
//		for (int i = 0; i < c; i++){
//			printf("%d ", inven[i]);
//		}
//		printf("\nMaterials PrintInven------------------\n");
//
//	}
//	int choice;
//	bool Choice(){
//		if (choice < c) {
//			choice++;
//			return true;
//		}
//		return false;
//	}
//	int MakeProduct(){
//		return inven[choice - 1] / r;
//	}
//	int NextProduct(){
//		if (choice < c) return inven[choice] / r;
//		return -1;
//	}
//
//	void PrintInven(){
//		printf("Materials PrintInven------------------\n");
//		for (int i = 0; i < choice; i++){
//			printf("%d ", inven[i]);
//		}
//		printf("\nMaterials PrintInven------------------\n");
//	}
//
//};
//bool compare(Materials& m1, Materials& m2){
//	if (m1.MakeProduct() == m2.MakeProduct()) {
//		return m1.NextProduct() < m2.NextProduct();
//	}
//	return m1.MakeProduct() < m2.MakeProduct();
//}
//
//class Factory{
//	int n; // 재료의 가짓수 (1≤ n ≤ 10)
//	vector<Materials> c;
//public:
//	Factory(){
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++){
//			Materials m;
//			c.push_back(m);
//		}
//	}
//
//
//
//	int MaxProd() {	// 최대 생산량
//
//		for (int i = n; i < 10; i++){
//			sort(c.begin(), c.end(), compare);
//			if (!c.front().Choice()) break;
//		}
//		sort(c.begin(), c.end(), compare);
//		return c.front().MakeProduct();
//	}
//	void PrintInven() {
//		printf("PrintInven============================\n");
//		for (int i = 0; i < c.size(); i++){
//			c[i].PrintInven();
//		}
//		printf("PrintInven============================\n");
//	}
//};
//
//int main()
//{
//	int T;
//
//	scanf("%d", &T);
//	while (T--){
//		Factory f;
//
//		printf("%d\n", f.MaxProd());
//		f.PrintInven();
//
//	}
//	return 0;
//}