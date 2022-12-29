//Name: Muhammad Ali BS Data Science 1st-Semester
#include <iostream>
using namespace std;
int main() {
	const int arraySize = 10;
	int array[arraySize] = {0}; // initialize all elements to 0

	// input values for the array
	for (int i = 0; i < arraySize; i++) {
		if(i==0){
			cout<<"Enter "<<i+1<<"st number: ";
			cin >> array[i];
		}
		else if(i==1){
			cout<<"Enter "<<i+1<<"nd number: ";
			cin >> array[i];
		}
		else if(i==2){
			cout<<"Enter "<<i+1<<"rd number: ";
			cin >> array[i];
		}
		else{
			cout<<"Enter "<<i+1<<"th number: ";
			cin >> array[i];
		}
		
	}

	int sum = 0;
	for (int i = 0; i < arraySize; i++) {
		if (i == 3 || i == 5) {
			continue; // skip values at index 3 and 5
		}
		sum += array[i];
	}

	cout<<"\n\n\nSum of all array elements (Except: Number on 3rd and 5th index) is: " <<sum<<endl;
	cout<<"The numbers on 3rd index is "<<array[3]<<" and number on 5th index is "<<array[5]<<endl<<endl<<endl<<endl;

	// print out the array in reverse order
	cout<<"All elements of array in reverse order are: \n";
	cout<<"\t\t\t\t\t    ";
	for (int i = arraySize - 1; i >= 0; i--) {
	    
		cout << array[i] << " ";
	}
	cout<<endl;
	return 0;
}
