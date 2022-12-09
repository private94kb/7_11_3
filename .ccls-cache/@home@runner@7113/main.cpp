#include <iostream>
#include <stdlib.h>//для бібліотеки random
using namespace std;

int main() {
		int num;
		int arr[8];
		for (int i = 0; i < 8; i++) {
			arr[i] = rand()%90;//генеруємо числа в масив [0;90]
		}
  cout<<"New array is:"<<endl;
 	for (int i = 0; i < 8; i++) {
			cout << arr[i] << ' ';
		}
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 7; j++) {
				if (arr[j] > arr[j + 1]) {//якщо даний елемент більший за наступний
					num = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = num;
				}
			}
		}
    cout<<"\nSorted array is:"<<endl;
		for (int i = 0; i < 8; i++) {
			cout << arr[i] << ' ';
		}
	}
