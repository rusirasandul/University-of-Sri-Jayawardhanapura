#include <stdio.h>

int main() {
      int isVIP = 0; // 0 indicates not a VIP member, 1 indicates VIP member
      int hasTicket = 1; // 0 indicates no ticket, 1 indicates has a ticket

      if (isVIP || hasTicket) {
            printf("Access granted. Enjoy the concert!\n");
            return 1;
      } else {
            printf("Access denied. You need to be a VIP member or have a ticket.\n");
            return 0;
      }
}