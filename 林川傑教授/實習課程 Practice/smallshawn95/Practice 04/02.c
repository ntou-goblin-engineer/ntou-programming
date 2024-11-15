#include <stdio.h>

int main()
{
    // [Basic] Astrology
    int month, day;
    char* zodiac_name[12] = {
        "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo",
        "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"
    };
    int beginning_day[12] = {21, 21, 21, 22, 23, 23, 23, 23, 22, 22, 20, 20};
    printf("Enter your birthday (in the format of month/day): ");
    scanf("%d/%d", &month, &day);
    int zodiac_code = (month + 9) % 12;
    if(day < beginning_day[month]){
        zodiac_code = (zodiac_code + 11) % 12;
    }
    printf("You are %s. Its zodiac code is %d.", zodiac_name[zodiac_code], zodiac_code);
    return 0;
}
