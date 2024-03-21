#include <stdio.h>

int main(void)
{
    FILE *fp;
    struct whale {
        char name[1024];  // Big enough for any line this program will encounter
        float length;
        int mass;
    };
    
    struct whale w;
    fp = fopen("test.txt", "r");

    while (fscanf(fp, "%s %f %d", w.name, &w.length, &w.mass) != EOF)
        printf("%s whale, %.1f meters, %d tonnes\n", w.name, w.length, w.mass);

    fclose(fp);
}
