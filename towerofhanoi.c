/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 1) Only one disk can be moved at a time. 2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack. 3) No disk may be placed on top of a smaller disk.
*/
#include <stdio.h>
void towerofhanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n >= 1)
    {
        // printf("\nMove disk 1 from rod %c to rod %c ", from_rod, to_rod);

        towerofhanoi(n - 1, from_rod, aux_rod, to_rod);
        printf("\nMove disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
        towerofhanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}
int main()
{
    int n;
    printf("Enter Number of disks \n");
    scanf("%d", &n);
    printf("Number of disks %d\n", n);
    towerofhanoi(n, 'A', 'C', 'B');
    return 0;
}