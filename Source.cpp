#include<iostream>
#include<conio.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int temp, s;
	const int n = 10;
	
	int nums[n + 1] = { 0 };
	s = n - 1;
	nums[s] = 1;
	for (int i = 0; i<n; i++){
		cout << "\n";
		for (int j = 0; j<s; j++)
			cout << "  ";
		for (int j = 0; j <= i; j++){
			temp = nums[s + j] + nums[s + j + 1];
			cout << temp << setw(4);
			nums[s + j] = temp;
		}
		s--;
	}
	_getch();
	return 0;
}