#include <bits/stdc++.h>
#include <time.h>

using namespace std; 
void sampleKItems(int stream[], int n, int k) 
{ 
	int i;
	int reservoir[k]; 
	for (i = 0; i < k; i++) reservoir[i] = stream[i]; 
	srand(time(NULL)); 
    // For every element from k + 1 to n select a random number between 0 and i (its index)
    // if j is within the sampling range replace reservoir[j] with the current element
	for (; i < n; i++) 
	{  
		int j = rand() % (i + 1); 
		if (j < k) reservoir[j] = stream[i]; 
	} 

	for (int i = 0; i < k; i++) cout << reservoir[i] << " ";
} 

int main() 
{ 
	int stream[] = {3, 3, 3, 3, 6, 7, 8, 9, 10, 11, 12}; 
	int n = sizeof(stream)/sizeof(stream[0]); 
	int k = 5; 
	sampleKItems(stream, n, k); 
	return 0; 
} 
