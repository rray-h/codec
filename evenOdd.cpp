#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    srand(time(NULL));
    
    int size;
    
    cout << "Enter the size of array: ";
	while (!(cin >> size) || cin.get() != '\n')
	{
		cin.clear();
		cout << "Вы блондинка,вам надо написать что-то нормальное" << endl;
		while (cin.get() != '\n');
	}
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        
        int random = rand() % 9 + 1;
        
        arr[i] = random;
    }
    
    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            
            if(arr[j] > arr[j + 1]){
                
                int change = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = change;
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        
        cout << arr[i] << " ";
    }
    
    cout << '\n' << "Evens: ";
    
    for (int i = 0; i < size; i++) {
        
        if(arr[i] % 2 == 0) {
            
            cout << arr[i] << " ";
        }
    }
    
    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            
            if(arr[j] < arr[j + 1]){
                
                int change = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = change;
            }
        }
    }
    
    cout << '\n' << "Odds: ";

    for (int i = 0; i < size; i++) {
        
        if(arr[i] % 2 == 1) {
            
            cout << arr[i] << " ";
        }
    }
}
