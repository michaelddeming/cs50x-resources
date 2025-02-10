#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
     // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            int average_pigment = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);




            image[i][j].rgbtBlue = average_pigment;
            image[i][j].rgbtGreen = average_pigment;
            image[i][j].rgbtRed = average_pigment;
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

            float red = 0.0;
            float green = 0.0;
            float blue = 0.0;
            int count = 0;

            for (int row = -1; row <= 1; row++)
            {
                for (int col = -1; col <= 1; col++)
                {
                    if (i + row >= 0 && i + row < height)
                    {
                        if (j + col >= 0 && j + col < width)
                        {
                            red += copy[i + row][j + col].rgbtRed;
                            blue += copy[i + row][j + col].rgbtBlue;
                            green += copy[i + row][j + col].rgbtGreen;
                            count++;
                        }
                    }

                }
            }
            int avg_red = round(red / count);
            int avg_blue = round(blue / count);
            int avg_green = round(green / count);

            image[i][j].rgbtRed = avg_red;
            image[i][j].rgbtBlue = avg_blue;
            image[i][j].rgbtGreen = avg_green;

        }

    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
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

            float gx_red = 0.0;
            float gx_green = 0.0;
            float gx_blue = 0.0;
            float gy_red = 0.0;
            float gy_green = 0.0;
            float gy_blue = 0.0;

            for (int row = -1; row <= 1; row++)
            {
                for (int col = -1; col <= 1; col++)
                {
                    if (i + row >= 0 && i + row < height)
                    {
                        if (j + col >= 0 && j + col < width)
                        {

                            if (((row == -1 || row == 1) && col == -1))
                            {
                                gx_red += (copy[i + row][j + col].rgbtRed) * -1.0;
                                gx_blue += (copy[i + row][j + col].rgbtBlue) * -1.0;
                                gx_green += (copy[i + row][j + col].rgbtGreen) * -1.0;
                                if (row == -1)
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed) * -1.0;
                                    gy_blue += (copy[i + row][j + col].rgbtBlue) * -1.0;
                                    gy_green += (copy[i + row][j + col].rgbtGreen) * -1.0;
                                }
                                else
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed);
                                    gy_blue += (copy[i + row][j + col].rgbtBlue);
                                    gy_green += (copy[i + row][j + col].rgbtGreen);
                                }
                            }

                            else if (((row == -1 || row == 1) && col == 1))
                            {
                                gx_red += (copy[i + row][j + col].rgbtRed);
                                gx_blue += (copy[i + row][j + col].rgbtBlue);
                                gx_green += (copy[i + row][j + col].rgbtGreen);

                                if (row == -1)
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed) * -1.0;
                                    gy_blue += (copy[i + row][j + col].rgbtBlue) * -1.0;
                                    gy_green += (copy[i + row][j + col].rgbtGreen) * -1.0;
                                }
                                else
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed);
                                    gy_blue += (copy[i + row][j + col].rgbtBlue);
                                    gy_green += (copy[i + row][j + col].rgbtGreen);
                                }
                            }


                            else if (row == 0 && (col == -1 || col == 1))
                            {
                                if (col == -1)
                                {
                                    gx_red += (copy[i + row][j + col].rgbtRed) * -2.0;
                                    gx_blue += (copy[i + row][j + col].rgbtBlue) * -2.0;
                                    gx_green += (copy[i + row][j + col].rgbtGreen) * -2.0;
                                }
                                else
                                {
                                    gx_red += (copy[i + row][j + col].rgbtRed) * 2.0;
                                    gx_blue += (copy[i + row][j + col].rgbtBlue) * 2.0;
                                    gx_green += (copy[i + row][j + col].rgbtGreen) * 2.0;
                                }
                            }

                            else if ((row == -1 || row == 1) && col == 0)
                            {
                                if (row == -1)
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed) * -2.0;
                                    gy_blue += (copy[i + row][j + col].rgbtBlue) * -2.0;
                                    gy_green += (copy[i + row][j + col].rgbtGreen) * -2.0;
                                }
                                else
                                {
                                    gy_red += (copy[i + row][j + col].rgbtRed) * 2.0;
                                    gy_blue += (copy[i + row][j + col].rgbtBlue) * 2.0;
                                    gy_green += (copy[i + row][j + col].rgbtGreen) * 2.0;
                                }
                            }
                        }
                    }
                }
            }
            int g_red_total = round(sqrt((gx_red * gx_red) + (gy_red * gy_red)));
            if (g_red_total > 255)
            {
                g_red_total = 255;
            }
            int g_blue_total = round(sqrt((gx_blue * gx_blue) + (gy_blue * gy_blue)));
            if (g_blue_total > 255)
            {
                g_blue_total = 255;
            }
            int g_green_total = round(sqrt((gx_green * gx_green) + (gy_green * gy_green)));
            if (g_green_total > 255)
            {
                g_green_total = 255;
            }

            image[i][j].rgbtRed = g_red_total;
            image[i][j].rgbtBlue = g_blue_total;
            image[i][j].rgbtGreen = g_green_total;

        }

    }
    return;
}
