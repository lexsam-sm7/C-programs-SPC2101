/*
Name: Sammy Mwangi Kuria
Reg no: CT101/G/26462/25
Description: 3D_array
*/

#include <stdio.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int branch, floor, room;
    int totalOccupied = 0;

    // Prompt user to input occupancy for each room
    for(branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for(floor = 0; floor < 5; floor++) {
            printf("  Floor %d:\n", floor + 1);
            for(room = 0; room < 10; room++) {
                printf("    Room %d (1=Occupied, 0=Vacant): ", room + 1);
                scanf("%d", &chain[branch][floor][room]);

                // Validate input
                while(chain[branch][floor][room] != 0 && chain[branch][floor][room] != 1) {
                    printf("      Invalid! Enter 1 or 0 only: ");
                    scanf("%d", &chain[branch][floor][room]);
                }

                // Count if occupied
                if(chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    printf("\nTotal number of occupied room accross all branches:%d\n",totalOccupied);
    
    return 0;}