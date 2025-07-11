#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Step 1: Move top n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the remaining disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nThe sequence of moves:\n");
    towerOfHanoi(n, 'A', 'B', 'C'); // A = Source, B = Auxiliary, C = Destination

    return 0;
}
