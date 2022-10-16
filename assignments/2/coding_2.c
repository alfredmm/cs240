//
// Created by haoyu on 9/18/2022.
//
#include <stdio.h>
#include <string.h>

// Function
int solution(char *S, char *F)
{
	int m = strlen(S), n = strlen(F);

	// This parts checks whether conversion is possible or not
	if (n != m)
		return -1;
	int count[256];
	for (int i = 0; i < 256; i++)
		count[i] = 0;
	// count characters in S
	for (int i = 0; i < n; i++)
		count[S[i]]++;
	// Subtract count for every character in F
	for (int i = 0; i < n; i++)
		count[F[i]]--;
	// Check if all counts become 0
	for (int i = 0; i < 256; i++)
		if (count[i])
			return -1;

	// This part calculates the number of operations required
	int result = 0;
	for (int i = n - 1, j = n - 1; i >= 0;) {
		// If there is a mismatch, then keep incrementing
		// result until F[j] is not found in S[0..i]
		while (i >= 0 && S[i] != F[j]) {
			i--;
			result++;
		}
		// If A[i] and B[j] match
		if (i >= 0) {
			i--;
			j--;
		}
	}
	return result;
}

// Main Function
int main()
{
    //Test Ouput
	char S[] = "ABCD";
	char F[] = "ACBD";
	printf("Minimum number of operations: %d", solution(S, F));
	return 0;
}
