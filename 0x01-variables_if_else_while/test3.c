#include <stdio.h>
/**
 *
 */
int main(void)
{
	int  a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;

	for (a = 12 ; a <= 789 ; a++)
	{
		for (b = 20; b <= 22; b++)
		{
			for (c = 30; c <= 34; c++)
			{
				for (d = 40; d <= 45; d++)
				{
					for (e = 50 ; e <= 55 ; e++)
					{
						for (f = 60 ; f <= 66; f++)
						{
							for (g = 70 ; g <= 77; g++)
							{
								for (h = 80; h <= 88; h++)
								{
									for (i = 90; i <= 122; i++)
									{
										for (j = 130 ; j <= 133 ; j++)
										{
											for (k = 140; k <= 144; k++)
											{
												for (l = 150 ; l <= 153; l++)
												{
													for (m = 160 ; m <= 166; m++)
													{
														if (b || c || d || e || f || g || h || i || j | k || l || m ) 
														{
															o = a % 100;
															putchar((a / 100) + '0');
															putchar((o / 10) + '0');
															putchar((o % 10) + '0');
															putchar(' ');
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (0);
}
