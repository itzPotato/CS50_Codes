#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#define file_name_size 7

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    FILE *card = fopen(argv[1], "r");
    FILE *img;

    uint8_t buffer[512];
    char file_name[8] = "";
    int count = 0;
    int header = 0;
    int firstjpg = 0;

    while (fread(buffer, 1, 512, card) == 512)
    {

        // Create JPEGs from the data
        if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) &&
            ((buffer[3] & 0xf0) == 0xe0))
        {
            header = 1;
            if (firstjpg == 0)
            {
                firstjpg = 1;
            }
            else
            {
                fclose(img);
                count++;
            }
            sprintf(file_name, "%03i.jpg", count);
            img = fopen(file_name, "w");
            fwrite(buffer, 1, 512, img);
        }
        else if (header == 1)
        {
            fwrite(buffer, 1, 512, img);
        }
    }
    if (img != NULL)
    {
        fclose(img);
    }
    fclose(card);
}
