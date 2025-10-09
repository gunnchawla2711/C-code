//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;

    
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

   
    printf("Formatted Date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
