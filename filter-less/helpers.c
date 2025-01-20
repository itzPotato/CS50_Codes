#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int temp =
                round((image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0);
            image[i][j].rgbtRed = temp;
            image[i][j].rgbtBlue = temp;
            image[i][j].rgbtGreen = temp;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            double originalRed = image[i][j].rgbtRed;
            double originalBlue = image[i][j].rgbtBlue;
            double originalGreen = image[i][j].rgbtGreen;

            int Red = round((.393 * originalRed) + (.769 * originalGreen) + (.189 * originalBlue));
            int Green =
                round((.349 * originalRed) + (.686 * originalGreen) + (.168 * originalBlue));
            int Blue = round((.272 * originalRed) + (.534 * originalGreen) + (.131 * originalBlue));
            if (Red > 255)
                Red = 255;
            if (Blue > 255)
                Blue = 255;
            if (Green > 255)
                Green = 255;

            image[i][j].rgbtRed = Red;
            image[i][j].rgbtGreen = Green;
            image[i][j].rgbtBlue = Blue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int k;
            if (i != 0)
                k = i - 1;
            else
                k = i;
            int l;
            if (j != 0)
                l = j - 1;
            else
                l = j;
            int m, n;
            if (i == (height - 1))
                m = i;
            else
                m = i + 1;
            if (j == (width - 1))
                n = j;
            else
                n = j + 1;
            float tempR = 0;
            float tempB = 0;
            float tempG = 0;
            int count = 0;
            for (int o = k; o <= m; o++)
            {
                for (int p = l; p <= n; p++)
                {
                    tempR += copy[o][p].rgbtRed;
                    tempB += copy[o][p].rgbtBlue;
                    tempG += copy[o][p].rgbtGreen;
                    count++;
                }
            }
            image[i][j].rgbtRed = round(tempR / count);
            image[i][j].rgbtBlue = round(tempB / count);
            image[i][j].rgbtGreen = round(tempG / count);
        }
    }
    return;
}
