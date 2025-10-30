/*
Name: Sammy Mwangi
Reg no: CT101/G/26462/25
Description :2D_array
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;

    // Prompt user to input room occupancy data
    printf("Enter occupancy for each room (1 = occupied, 0 = vacant):\n");
    for(i = 0; i < 5; i++) {
        printf("Floor %d:\n", i + 1);
        for(j = 0; j < 10; j++) {
            printf("  Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);

            // Validate input
            while(occupancy[i][j] != 0 && occupancy[i][j] != 1) {
                printf("    Invalid input! Enter 1 (occupied) or 0 (vacant): ");
                scanf("%d", &occupancy[i][j]);
            }
        }
    }

    // Display occupied and vacant rooms per floor
    for(i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}