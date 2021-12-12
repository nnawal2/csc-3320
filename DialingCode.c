#include <stdio.h>

struct dialing_code {
   //initializing char and integer variables
   char *country;
    int code;
};
//initializing all integer variable international code and argc
int
main (int argc, char* argv[]) {
    int intl_code, i;
    const struct dialing_code country_codes[] =
        {

        {"Bangladesh",   880}, {"United States",   1},
        {"Malaysia",     60},  {"Turkey",          90},
        {"Maldives",     960}, {"Sri Lanka",       94},
        {"Australia",    61},  {"Singapore",       65},
        {"Belgium",      32},  {"Qatar",           974},
        {"Bahrain",      973}, {"Iran",            98},
        {"Bhutan",       975}, {"Hong Kong",       852},
        {"Mexico",       52},  {"Nigeria",         234},
        {"Canada",       1},   {"Italy",           39},
        {"Afghanistan",  93},  {"India",           91}

        };
//checking if conditions are being met 
    int n_entries = sizeof(country_codes) / sizeof(*country_codes);

    do {
        int found = 0;

        printf("Please enter the international code(Enter -12345 to exit): ");
        scanf("%d", &intl_code);
        if (intl_code == -12345)
            break;

        for (i = 0; i < n_entries; i++) {
            if (country_codes[i].code == intl_code) {
                printf("You have entered the code of the following country: %s\n", country_codes[i].country);
                found = 1;
            }
        }
        if (!found)
            printf("The code entered is not found.\n"); //if condition is met then print
    } while(1);

    return 0;
}
