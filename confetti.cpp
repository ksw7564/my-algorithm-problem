//#include <iostream>
//#include <time.h>
//using namespace std;
//
//
//int main() {
//	int testcase,paper;
//	clock_t start, end;
//	int xy[100][2] = { 0 };
//	int x=0, y=0, sum=0;
//	int arr[101][101] = { 0 };
//	
//	start = clock();
//	cin >> testcase;
//	for(int i = 0; i < testcase; i++ ) {
//		cin >> paper;
//		for (int j = 0; j < paper; j++) {
//			cin >> x;
//			cin >> y;
//			xy[j][0] = x;
//			xy[j][1] = y;//example x=3 y 7
//			//여기까지하면 xy라는 배열안에 모든 색종이의 위치기 입력된다.
//		}//아이디어 : 색종이의 위치를 전부 수로채우고 중복되는곳은... 생각하지않는다 중복되도 +1하면 상관없다.
//		for (int b = 0; b < paper; b++) {
//			x = xy[b][0];
//			y = xy[b][1];
//			for (int w = 0; w < 10; w++) {
//				arr[x + w][y]++;
//				for (int t = 1; t < 10; t++) {
//					arr[x + w][y + t]++;
//				}
//			}
//		}
//		sum = 0;
//		for (int dex = 0; dex < 100; dex++) {
//			for (int str = 0; str < 100; str++) {
//				if (arr[dex][str]!=0) {
//					sum+=1;
//				}
//			}
//		}
//		/*for (int dex = 0; dex < 100; dex++) {
//			for (int str = 0; str < 100; str++) {
//				cout << arr[dex][str];
//			}
//			cout << endl;
//		}*/
//		cout << sum << endl;
//	}
//	end = clock();
//	double result = (double)(end - start);
//	cout << result;
//	
//	
//	return 0;
//}//http://edu.goorm.io/learn/lecture/1193/%EC%8B%A4%EC%A0%84-%EC%9C%A0%ED%98%95-%EC%BD%94%EB%94%A9-%ED%85%8C%EC%8A%A4%ED%8A%B8-%EB%AA%A8%EC%9D%98%EA%B3%A0%EC%82%AC-%EC%8B%9C%EC%A6%8C4/lesson/46269/%EC%8B%9C%ED%97%98-%ED%99%98%EA%B2%BD-%EC%B2%B4%ED%97%98%ED%95%98%EA%B8%B0
////위 문제 출처