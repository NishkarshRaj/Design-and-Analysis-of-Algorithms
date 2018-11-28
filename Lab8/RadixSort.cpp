#include<iostream> 
using namespace std; 
// A Function to get the number with the maximum number in the array  
int getMax(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
//Count sort function that is used to sort any combination of array elements that can be mapped in 10 element array (0-9) 
void countSort(int arr[], int n, int exp) 
{ 
    int output[n]; // output array 
    int i,count[10];
	for(i=0;i<10;i++)
	{
		count[i]=0;	
	} 
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
    // Build the output array 
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++) 
    {
    	arr[i] = output[i];
	}
} 
//Radix sort function
/////////////////////////////////
void radixsort(int arr[], int n) 
{ 
    //Getting the maximum number of digits in the array such that the exponent loop can be defined around it
    int m = getMax(arr, n); 
  
    // Do counting sort for every digit. Note that instead 
    // of passing digit number, exp is passed. exp is 10^i 
    // where i is current digit number 
    for (int exp = 1; m/exp > 0; exp *= 10) 
    {
		countSort(arr, n, exp);
	}
} 
//Print Array to print the array 
//////////////////////////////////////////// 
void print(int arr[], int n) 
{
	cout<<endl<<"Sorted array is: "<<endl;
    for (int i=0;i<n;i++) 
    {
    	cout<<"The "<<i+1<<" element: "<<arr[i]<<endl;
	}
} 
////////////////////////////////////////////
int main() 
{ 
    int n,i;
    printf("Code of Radix Sort\n");
    printf("Enter the number of elements you want in the array to be sorted: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	printf("Element %d: ",i+1);
    	scanf("%d",&arr[i]);
	}
    radixsort(arr, n); //Call to Radixsort function that performs the sort!!!
    print(arr, n); //Call to the print function to print the sorted array
    return 0; 
} 

