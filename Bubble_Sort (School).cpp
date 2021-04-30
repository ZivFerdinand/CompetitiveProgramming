// Program Implementasi C++ untuk BubbleSort Decreasing (Besar Ke Kecil)
// ZIVEN FERDINAND XI IPA 2 / 36
#include <iostream>
#include <algorithm> 
using namespace std; 

void bubbleSort(int arr[], int n) // Pass value array dan panjang array
{ 
	int j; 
	bool swapped = true;
	while(swapped){
		swapped = false; // Ubah nilai swapped ke false karena dalam satu putaran belum ada swap
		for (j = 0; j < n-1; j++){ 
			if (arr[j] < arr[j+1]){ // Jika bilangan ke j lebih kecil dari bilangan ke j+1
				swap(arr[j], arr[j+1]); // Tukar bilangan ke-j dan bilangan ke-j+1
				swapped = true; // Ubah value karena dalam satu putaran masih ada yang di swap
			}
		}
	}
} 

int main() 
{ 
	int arr[100]; // Buat batas array menjadi minimal 100, dapat diubah sesuai keinginan
	int n; // Nilai panjang array
	cin >> n; // Input panjang array
	for(int i=0;i<n;i++)
		cin >> arr[i]; // Input isi array
		
	bubbleSort(arr, n); // Pass value array dan panjang array ke void bubbleSort
	

	// Output nilai array hasil sort
	cout<<"Sorted array: \n"; 
	for(int i=0;i<n;i++){
		(i<n-1) ? cout << arr[i] << ' ' : cout << arr[i] << endl;
	}
	return 0; 
}
