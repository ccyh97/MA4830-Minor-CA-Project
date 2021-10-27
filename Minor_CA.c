// include header files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// main function
int main() {
    // declaring and initializing variables
    int i, dpCounter1 = 0, dpCounter2 = 0, dpCounter3 = 0, skipLoop = 0, val, check1, check2, check3, check4, check5, check6, check7, quitCheck, quit = 0;
    float p, c, a, sa, v;
    const double pi = 3.141592654;
    char l[10], b[10], h[10], r[10];
    char option1[10], option2[10], option3[10], option4[10], rerunProgramme[10];
    const char *list[] = {"1", "2", "3", "4", "5", "6", "7", "8"}, *quitList[] = {"y", "n"};
    const char *twodimList[] = {"Square", "Rectangle", "Circle"}, *threedimList[] = {"Cube", "Rectangular Block", "Sphere", "Right Circular Cone", "Right Square Pyramid", "Right Rectangular Pyramid", "Right Cylinder"};
    const char *twodimList2[] = {"square", "rectangle", "circle"}, *threedimList2[] = {"cube", "rectangular block", "sphere", "right circular cone", "right square pyramid", "right rectangular pyramid", "right cylinder"};
    const char *calcList[] = {"Perimeter", "Area"}, *calcList2[] = {"Circumference", "Area"}, *calcList3[] = {"Surface Area", "Volume"};

    printf("Welcome to our programme!\n"); // display onto screen
    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

    while (quit == 0) { // while user doesn't quit programme
        if (skipLoop == 0) { // skipLoop variable is used to control whether to reset check1 variable
            check1 = 0; // set check1 variable to 0
        }
        check2 = 0; // set check2 variable to 0
        check3 = 0; // set check3 variable to 0
        check4 = 0; // set check4 variable to 0
        check5 = 0; // set check5 variable to 0
        check6 = 0; // set check6 variable to 0
        check7 = 0; // set check7 variable to 0
        quitCheck = 0; // set quitCheck variable to 0

        while (check1 == 0) { // while user doesn't give correct input
            printf("\nList of Options:\n"); // display onto screen
            printf("1 - 2D Objects\n"); // display onto screen
            printf("2 - 3D Objects\n"); // display onto screen
            printf("\nSelect an Option: "); // display onto screen
            gets(option1); // obtain input from user
            printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

            if (strlen(&option1) > 1) { // check if user input is a single character
                printf("\nERROR: You have entered more than one character. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop
            }

            for (i = 0; i < 2; i++) { // for loop
                val = strcmp(option1, list[i]); // check if user input matches
                if (val == 0){ // if user input matches
                    check1 = 1; // set check1 variable to 1 as the user input is valid
                    break; // break out of for loop
                }
            }

            if (check1 == 0) { // if user input is invalid
                printf("\nERROR: You have entered an invalid input. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop
            }
        }

        while (check2 == 0) { // while user doesn't give correct input
            if (strcmp(option1, list[0]) == 0) { // if user chose 2D objects
                printf("\nYou have selected option 1 - 2D Objects. The following 2D objects are available... \n"); // display onto screen
                printf("\nList of Options:\n"); // display onto screen
                printf("1 - Square\n"); // display onto screen
                printf("2 - Rectangle\n"); // display onto screen
                printf("3 - Circle\n"); // display onto screen
                printf("4 - Return to Previous Set of Options\n"); // display onto screen
                printf("\nSelect an Option: "); // display onto screen
                gets(option2); // obtain input from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(&option2) > 1) { // check if user input is a single character
                    printf("\nERROR: You have entered more than one character. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                    continue; // go to next iteration of while loop
                }

                for (i = 0; i < 4; i++) { // for loop
                    val = strcmp(option2, list[i]); // check if user input matches
                    if (val == 0){ // if user input matches
                        check2 = 1; // set check2 variable to 1 as the user input is valid
                        break; // break out of for loop
                    }
                }

                if (check2 == 0) { // if user input is invalid
                    printf("\nERROR: You have entered an invalid input. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                    continue; // go to next iteration of while loop
                }
            }

            else if (strcmp(option1, list[1]) == 0) { // else if user chose 3D objects
                printf("\nYou have selected option 2 - 3D Objects. The following 3D objects are available... \n"); // display onto screen
                printf("\nList of Options:\n"); // display onto screen
                printf("1 - Cube\n"); // display onto screen
                printf("2 - Rectangular Block\n"); // display onto screen
                printf("3 - Sphere\n"); // display onto screen
                printf("4 - Right Circular Cone\n"); // display onto screen
                printf("5 - Right Square Pyramid\n"); // display onto screen
                printf("6 - Right Rectangular Pyramid\n"); // display onto screen
                printf("7 - Right Cylinder\n"); // display onto screen
                printf("8 - Return to Previous Set of Options\n"); // display onto screen
                printf("\nSelect an Option: "); // display onto screen
                gets(option2); // obtain input from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(&option2) > 1) { // check if user input is a single character
                    printf("\nERROR: You have entered more than one character. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                    continue; // go to next iteration of while loop 
                }

                for (i = 0; i < 8; i++) { // for loop
                    val = strcmp(option2, list[i]); // check if user input matches
                    if (val == 0){ // if user input matches
                        check2 = 1; // set check2 variable to 1 as the user input is valid
                        break; // break out of for loop
                    }
                }

                if (check2 == 0) { // if user input is invalid
                    printf("\nERROR: You have entered an invalid input. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                    continue; // go to next iteration of while loop
                }
            }
        }

        if ((strcmp(option1, list[0]) == 0 && strcmp(option2, list[3]) == 0) || (strcmp(option1, list[1]) == 0 && strcmp(option2, list[7]) == 0)) { // if user chose to return to previous set of options
            check1 = 0; // reset check1 variable to 0
            check2 = 0; // reset check2 variable to 0
            continue;  // go to next iteration of while loop
        }

        while (check3 == 0) { // while user doesn't give correct input
            if (strcmp(option1, list[0]) == 0 && (strcmp(option2, list[0]) == 0 || strcmp(option2, list[1]) == 0)) { // if user chose 2D objects, and the 2D object is a square or rectangle
                printf("\nYou have selected option %d - %s. Please indicate what you wish to calculate...\n", atoi(option2), twodimList[atoi(option2) - 1]); // display onto screen
                printf("\nList of Options:\n"); // display onto screen
                printf("1 - Perimeter\n"); // display onto screen
                printf("2 - Area\n"); // display onto screen
                printf("3 - Return to Previous Set of Options\n"); // display onto screen
                printf("\nSelect an Option: "); // display onto screen
                gets(option3); // obtain input from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
            }
            else if (strcmp(option1, list[0]) == 0 && strcmp(option2, list[2]) == 0) { // if user chose 2D objects, and the 2D object is a circle
                printf("\nYou have selected option %d - %s. Please indicate what you wish to calculate...\n", atoi(option2), twodimList[atoi(option2) - 1]); // display onto screen
                printf("\nList of Options:\n"); // display onto screen
                printf("1 - Circumference\n"); // display onto screen
                printf("2 - Area\n"); // display onto screen
                printf("3 - Return to Previous Set of Options\n"); // display onto screen
                printf("\nSelect an Option: "); // display onto screen
                gets(option3); // obtain input from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
            }
            else { // if user chose 3D objects
                printf("\nYou have selected option %d - %s. Please indicate what you wish to calculate...\n", atoi(option2), threedimList[atoi(option2) - 1]); // display onto screen
                printf("\nList of Options:\n"); // display onto screen
                printf("1 - Surface Area\n"); // display onto screen
                printf("2 - Volume\n"); // display onto screen
                printf("3 - Return to Previous Set of Options\n"); // display onto screen
                printf("\nSelect an Option: "); // display onto screen
                gets(option3); // obtain input from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
            }
            
            if (strlen(&option3) > 1) { // check if user input is a single character
                printf("\nERROR: You have entered more than one character. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop 
            }

            for (i = 0; i < 3; i++) { // check if user input is valid
                val = strcmp(option3, list[i]); // check if user input matches
                if (val == 0){ // if user input matches
                    check3 = 1; // set check3 variable to 1 as the user input is valid
                    break; // break out of for loop
                }
            }

            if (check3 == 0) { // if user input is invalid
                printf("\nERROR: You have entered an invalid input. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop
            }
        }

        if (strcmp(option3, list[2]) == 0) { // if user chose to return to previous set of options 
            check2 = 0; // reset check2 variable to 0
            check3 = 0; // reset check3 variable to 0
            skipLoop = 1;  // set skipLoop variable to 1 so that while loop involving check1 will NOT execute 
            continue;  // go to next iteration of while loop
        }

        while (check4 == 0) { // while user doesn't give correct input
            check5 = 0; // set check5 variable to 0
            check6 = 0; // set check6 variable to 0
            check7 = 0; // set check7 variable to 0
            dpCounter1 = 0; // set dpCounter1 variable to 0
            dpCounter2 = 0; // set dpCounter2 variable to 0
            dpCounter3 = 0; // set dpCounter3 variable to 0

            if (strcmp(option1, list[0]) == 0 && strcmp(option2, list[0]) == 0 && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 2D objects, and the 2D object is a square
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList[atoi(option3) - 1], twodimList2[atoi(option2) - 1]); // display onto screen
                printf("\nLength: "); // display onto screen
                gets(l); // obtain length from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(l) == 0 || atof(l) == 0) { // if l is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(l); i++) { // check if user input is valid
                    if (isdigit(l[i]) == 0 && l[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (l[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (check5 == 0) { // if user length input is valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate perimeter
                        p = 4*atof(l); // perimeter formula for square
                        printf("\nThe perimeter of the square is %.2f.\n", p); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate area
                        a = pow(atof(l), 2); // area formula for square
                        printf("\nThe area of the square is %.2f.\n", a); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else {
                    printf("\nERROR: You have entered an invalid length. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[0]) == 0 && strcmp(option2, list[1]) == 0 && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 2D objects, and the 2D object is a rectangle
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList[atoi(option3) - 1], twodimList2[atoi(option2) - 1]); // display onto screen
                printf("\nLength: "); // display onto screen
                gets(l); // obtain length from user
                printf("Breadth: "); // display onto screen
                gets(b); // obtain breadth from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(l) == 0 || atof(l) == 0) { // if l is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(l); i++) { // check if user input is valid
                    if (isdigit(l[i]) == 0 && l[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (l[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (strlen(b) == 0 || atof(b) == 0) { // if b is an empty string or if its float value is 0
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(b); i++) { // check if user input is valid
                    if (isdigit(b[i]) == 0 && b[i] != '.') {
                        check6 = 1; // set check6 variable to 1 as the user input is invalid 
                    }
                    else if (b[i] == '.') {
                        dpCounter2++; // increment dpCounter2 by 1
                    }
                }

                if (dpCounter2 > 1){ // if the string contains more than 1 decimal point
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                if (atof(l) == atof(b)) {
                    printf("\nWARNING: The length specified is equal to the width, which is mathematically wrong for a rectangle. However, the calculation will proceed with the given values."); // display onto screen
                }
                else if (atof(l) < atof(b)){
                    printf("\nWARNING: The length specified is less than the width. However, the calculation will proceed with the given values."); // display onto screen
                }

                if (check5 == 0 && check6 == 0) { // if all user inputs are valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate perimeter
                        p = 2*atof(l) + 2*atof(b); // perimeter formula for rectangle
                        printf("\nThe perimeter of the rectangle is %.2f.\n", p); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate area
                        a = atof(l)*atof(b); // area formula for rectangle
                        printf("\nThe area of the rectangle is %.2f.\n", a); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else if (check5 == 1 && check6 == 0) { // if user length input is invalid
                    printf("\nERROR: You have entered an invalid length. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 1) { // if user breadth input is invalid
                    printf("\nERROR: You have entered an invalid breadth. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else { // if both user inputs are invalid
                    printf("\nERROR: You have entered an invalid length and breadth. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[0]) == 0 && strcmp(option2, list[2]) == 0  && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 2D objects, and the 2D object is a circle
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList2[atoi(option3) - 1], twodimList2[atoi(option2) - 1]); // display onto screen
                printf("\nRadius: "); // display onto screen
                gets(r); // obtain radius from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(r) == 0 || atof(r) == 0) { // if r is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(r); i++) { // check if user input is valid
                    if (isdigit(r[i]) == 0 && r[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (r[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (check5 == 0) { // if user radius input is valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate circumference
                        c = 2*pi*atof(r);
                        printf("\nThe circumference of the circle is %.2f.\n", c); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate area
                        a = pi*pow(atof(r), 2); // area formula for circle
                        printf("\nThe area of the circle is %.2f.\n", a); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else { // if user input is invalid
                    printf("\nERROR: You have entered an invalid radius. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[1]) == 0 && strcmp(option2, list[0]) == 0  && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 3D objects, and the 3D object is a cube
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList3[atoi(option3) - 1], threedimList2[atoi(option2) - 1]); // display onto screen
                printf("\nLength: "); // display onto screen
                gets(l); // obtain length from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(l) == 0 || atof(l) == 0) { // if l is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(l); i++) { // check if user input is valid
                    if (isdigit(l[i]) == 0 && l[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (l[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (check5 == 0) { // if user length input is valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate surface area
                        sa = 6*pow(atof(l), 2); // surface area formula for cube
                        printf("\nThe surface area of the cube is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate volume
                        v = pow(atof(l), 3); // volume formula for cube
                        printf("\nThe volume of the cube is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else {
                    printf("\nERROR: You have entered an invalid length. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[1]) == 0 && (strcmp(option2, list[1]) == 0 || strcmp(option2, list[5]) == 0) && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 3D objects, and the 3D object is a rectangular block or right rectangular pyramid
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList3[atoi(option3) - 1], threedimList2[atoi(option2) - 1]); // display onto screen
                printf("\nLength: "); // display onto screen
                gets(l); // obtain length from user
                printf("Breadth: "); // display onto screen
                gets(b); // obtain breadth from user
                printf("Height: "); // display onto screen
                gets(h); // obtain height from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(l) == 0 || atof(l) == 0) { // if l is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(l); i++) { // check if user input is valid
                    if (isdigit(l[i]) == 0 && l[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (l[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (strlen(b) == 0 || atof(b) == 0) { // if b is an empty string or if its float value is 0
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(b); i++) { // check if user input is valid
                    if (isdigit(b[i]) == 0 && b[i] != '.') {
                        check6 = 1; // set check6 variable to 1 as the user input is invalid 
                    }
                    else if (b[i] == '.') { // if '.' is found
                        dpCounter2++; // increment dpCounter2 by 1
                    }
                }

                if (dpCounter2 > 1){ // if the string contains more than 1 decimal point
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                if (strlen(h) == 0 || atof(h) == 0) { // if h is an empty string or if its float value is 0
                    check7 = 1; // set check7 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(h); i++) { // check if user input is valid
                    if (isdigit(h[i]) == 0 && h[i] != '.') {
                        check7 = 1; // set check7 variable to 1 as the user input is invalid 
                    }
                    else if (h[i] == '.') { // if '.' is found
                        dpCounter3++; // increment dpCounter3 by 1
                    }
                }

                if (dpCounter3 > 1){ // if the string contains more than 1 decimal point
                    check7 = 1; // set check7 variable to 1 as the user input is invalid 
                }

                if (atof(l) == atof(b)) {
                    printf("\nWARNING: The length specified is equal to the width, which is mathematically wrong for a rectangle. However, the calculation will proceed with the given values."); // display onto screen
                }
                else if (atof(l) < atof(b)){
                    printf("\nWARNING: The length specified is less than the width. However, the calculation will proceed with the given values."); // display onto screen
                }

                if (check5 == 0 && check6 == 0 && check7 == 0) { // if all user inputs are valid
                    if (strcmp(option2, list[1]) == 0 && strcmp(option3, list[0]) == 0) {
                        sa = 2*atof(l)*atof(b) + 2*atof(l)*atof(h) + 2*atof(b)*atof(h); // surface area formula for rectangular block
                        printf("\nThe surface area of the rectangular block is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option2, list[1]) == 0 && strcmp(option3, list[1]) == 0) {
                        v = atof(l)*atof(b)*atof(h); // volume formula for rectangular block
                        printf("\nThe volume of the rectangular block is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option2, list[5]) == 0 && strcmp(option3, list[0]) == 0) {
                        sa = atof(l)*atof(b) + atof(l)*sqrt(pow(atof(b)/2, 2) + pow(atof(h), 2)) + atof(b)*sqrt(pow(atof(l)/2, 2) + pow(atof(h), 2)); // surface area formula for right rectangular pyramid
                        printf("\nThe surface area of the right rectangular pyramid is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid  
                    }
                    else if (strcmp(option2, list[5]) == 0 && strcmp(option3, list[1]) == 0) {
                        v = (atof(l)*atof(b)*atof(h))/3; // volume formula for right rectangular pyramid
                        printf("\nThe volume of the right rectangular pyramid is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else if (check5 == 1 && check6 == 0 && check7 == 0) { // if user length input is invalid
                    printf("\nERROR: You have entered an invalid length. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 1 && check7 == 0) { // if user breadth input is invalid
                    printf("\nERROR: You have entered an invalid breadth. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 0 && check7 == 1) { // if user height input is invalid
                    printf("\nERROR: You have entered an invalid height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 1 && check6 == 1 && check7 == 0) { // if user length and breadth input is invalid
                    printf("\nERROR: You have entered an invalid length and breadth. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 1 && check6 == 0 && check7 == 1) { // if user length and height input is invalid
                    printf("\nERROR: You have entered an invalid length and height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 1 && check7 == 1) { // if user breadth and height input is invalid
                    printf("\nERROR: You have entered an invalid breadth and height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else { // if all user inputs are invalid
                    printf("\nERROR: You have entered an invalid length, breadth and height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[1]) == 0 && (strcmp(option2, list[4]) == 0 && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0))) { // if user chose 3D objects, and the 3D object is a right square pyramid
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList3[atoi(option3) - 1], threedimList2[atoi(option2) - 1]); // display onto screen
                printf("\nLength: "); // display onto screen
                gets(l); // obtain length from user
                printf("Height: "); // display onto screen
                gets(h); // obtain height from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(l) == 0 || atof(l) == 0) { // if l is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(l); i++) { // check if user input is valid
                    if (isdigit(l[i]) == 0 && l[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (l[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (strlen(h) == 0 || atof(h) == 0) { // if h is an empty string or if its float value is 0
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(h); i++) { // check if user input is valid
                    if (isdigit(h[i]) == 0 && h[i] != '.') {
                        check6 = 1; // set check6 variable to 1 as the user input is invalid 
                    }
                    else if (h[i] == '.') { // if '.' is found
                        dpCounter2++; // increment dpCounter2 by 1
                    }
                }

                if (dpCounter2 > 1){ // if the string contains more than 1 decimal point
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                if (check5 == 0 && check6 == 0) { // if all user inputs are valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate surface area
                        sa = pow(atof(l), 2) + 2*atof(l)*sqrt(pow(atof(l), 2)/4 + pow(atof(h), 2)); // surface area formula for right square pyramid
                        printf("\nThe surface area of the right square pyramid is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate volume
                        v = pow(atof(l), 2)*(atof(h)/3); // volume formula for right square pyramid
                        printf("\nThe volume of the right square pyramid is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else if (check5 == 1 && check6 == 0) { // if user length input is invalid
                    printf("\nERROR: You have entered an invalid length. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 1) { // if user height input is invalid
                    printf("\nERROR: You have entered an invalid height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 1 && check6 == 1) { // if all user inputs are invalid
                    printf("\nERROR: You have entered an invalid length and height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[1]) == 0 && (strcmp(option2, list[3]) == 0 || strcmp(option2, list[6]) == 0)  && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0)) { // if user chose 3D objects, and the 3D object is a right circular cone or right cylinder
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList3[atoi(option3) - 1], threedimList2[atoi(option2) - 1]); // display onto screen
                printf("\nRadius: "); // display onto screen
                gets(r); // obtain radius from user
                printf("Height: "); // display onto screen
                gets(h); // obtain height from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                if (strlen(r) == 0 || atof(r) == 0) { // if r is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(r); i++) { // check if user input is valid
                    if (isdigit(r[i]) == 0 && r[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid 
                    }
                    else if (r[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (strlen(h) == 0 || atof(h) == 0) { // if h is an empty string or if its float value is 0
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(h); i++) { // check if user input is valid
                    if (isdigit(h[i]) == 0 && h[i] != '.') {
                        check6 = 1; // set check6 variable to 1 as the user input is invalid 
                    }
                    else if (h[i] == '.') { // if '.' is found
                        dpCounter2++; // increment dpCounter2 by 1
                    }
                }

                if (dpCounter2 > 1){ // if the string contains more than 1 decimal point
                    check6 = 1; // set check6 variable to 1 as the user input is invalid 
                }

                if (check5 == 0 && check6 == 0) { // if all user inputs are valid
                    if (strcmp(option2, list[3]) == 0 && strcmp(option3, list[0]) == 0) { // if the user chose to calculate surface area of right circular cone
                        sa = pi*pow(atof(r), 2) + pi*atof(r)*sqrt(pow(atof(h), 2) + pow(atof(r), 2)); // surface area formula for right circular cone
                        printf("\nThe surface area of the right circular cone is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option2, list[3]) == 0 && strcmp(option3, list[1]) == 0) { // if the user chose to calculate volume of right circular cone
                        v = (pi/3)*pow(atof(r), 2)*atof(h); // volume formula for right circular cone
                        printf("\nThe volume of the right circular cone is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option2, list[6]) == 0 && strcmp(option3, list[0]) == 0) { // if the user chose to calculate surface area of right cylinder
                        sa = 2*pi*atof(r)*atof(h) + 2*pi*pow(atof(r), 2); // surface area formula for right cylinder
                        printf("\nThe surface area of the right cylinder is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option2, list[6]) == 0 && strcmp(option3, list[1]) == 0) { // if the user chose to calculate volume of right cylinder
                        v = pi*pow(atof(r), 2)*atof(h); // volume formula for right cylinder
                        printf("\nThe volume of the right cylinder is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else if (check5 == 1 && check6 == 0) { // if user radius input is invalid
                    printf("\nERROR: You have entered an invalid radius. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 0 && check6 == 1) { // if user height input is invalid
                    printf("\nERROR: You have entered an invalid height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
                else if (check5 == 1 && check6 == 1) { // if all user inputs are invalid
                    printf("\nERROR: You have entered an invalid radius and height. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else if (strcmp(option1, list[1]) == 0 && (strcmp(option2, list[2]) == 0 && (strcmp(option3, list[0]) == 0 || strcmp(option3, list[1]) == 0))) { // if user chose 3D objects, and the 3D object is a sphere
                printf("\nYou have selected option %d - %s. Please provide the following dimensions of the %s...\n", atoi(option3), calcList3[atoi(option3) - 1], threedimList2[atoi(option2) - 1]); // display onto screen
                printf("\nRadius: "); // display onto screen
                gets(r); // obtain radius from user
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

                 if (strlen(r) == 0 || atof(r) == 0) { // if r is an empty string or if its float value is 0
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                for (i = 0; i < strlen(r); i++) { // check if user input is valid
                    if (isdigit(r[i]) == 0 && r[i] != '.') {
                        check5 = 1; // set check5 variable to 1 as the user input is invalid  
                    }
                    else if (r[i] == '.') { // if '.' is found
                        dpCounter1++; // increment dpCounter1 by 1
                    }
                }

                if (dpCounter1 > 1){ // if the string contains more than 1 decimal point
                    check5 = 1; // set check5 variable to 1 as the user input is invalid 
                }

                if (check5 == 0) { // if user radius input is valid
                    if (strcmp(option3, list[0]) == 0) { // if the user chose to calculate surface area
                        sa = 4*pi*pow(atof(r), 2); // surface area formula for sphere
                        printf("\nThe surface area of the sphere is %.2f.\n", sa); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                    else if (strcmp(option3, list[1]) == 0) { // if the user chose to calculate volume
                        v = 4*(pi/3)*pow(atof(r), 3); // volume formula for sphere
                        printf("\nThe volume of the sphere is %.2f.\n", v); // display onto screen
                        printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                        check4 = 1; // set check4 variable to 1 as the user input is valid
                    }
                }
                else if (check5 == 1) { // if user radius input is invalid
                    printf("\nERROR: You have entered an invalid radius. Please try again.\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                }
            }
            else {
                break; // break out of while loop
            }
        }

        while (quitCheck == 0) { // checks if user input is valid
            printf("\nWould you like to rerun the programme? (y/n) "); // display onto screen
            gets(rerunProgramme); // obtain input from user
            printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen

            if (strlen(&rerunProgramme) > 1) { // check if user input is a single character
                printf("\nERROR: You have entered more than one character. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop
            }

            for (i = 0; i < 2; i++) { // check if user input is valid
                val = strcmp(rerunProgramme, quitList[i]); // check if user input matches
                if (val == 0){ // if user input matches
                    quitCheck = 1; // set check1 variable to 1 as the user input is valid
                    break; // break out of for loop
                }
            }

            if (quitCheck == 0) { // if user input is invalid
                printf("\nERROR: You have entered an invalid input. Please try again.\n"); // display onto screen
                printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
                continue; // go to next iteration of while loop
            }

            if (strcmp(rerunProgramme, quitList[1]) == 0) { // if the user wants to quit
                    quit = 1; // this prevents the main while loop from running in the next iteration
                    printf("\nExiting progamme...\n"); // display onto screen
                    printf("--------------------------------------------------------------------------------------------------------------------------------------------"); // display onto screen
            }
            else {
                skipLoop = 0; // set skipLoop variable to 0 so that while loop involving check1 will execute again
            }
        }
    }
    return(0); // exit success
}