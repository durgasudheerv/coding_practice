#include "check_uppercase.h"
//code for check give string in uppercase or not 

/// @brief 
/// @param str 



void scan_data(char *str) 
{
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character
}
void check_is_uppercase(const char *str) 
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            to_uppercase((char *)str[i]);
            return;
        }
    }
    printf(" %s",str);
}

void to_uppercase(char *str) 
{
  if(*str >= 'a' && *str <= 'z)
    {
        *str = (char)('A' + (*str - 'a'));
    }

}

