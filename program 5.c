#include <stdio.h>

int main()
{
  int nums[10];
  int largest = 0;
  int second_largest = 0;
  int count_neg = 0;
  printf("Please Input 10 numbers: \n");
  for (int i = 0; i < 10; i++)
  {
    int num = scanf("%d", &nums[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    // counting negetive numbers
    if (nums[i] < 0)
    {
      count_neg++;
    }

    // calculating second largest number
    if (nums[i] > largest)
    {
      second_largest = largest;
      largest = nums[i];
    }
    else if (nums[i] > second_largest)
    {
      second_largest = nums[i];
    }

    int flag = 1;
    // checking for prime number
    for (int j = 2; j <= nums[i] / 2; ++j)
    {
      if (nums[i] > 0)
      {
        // condition for non-prime
        if (nums[i] % j == 0)
        {
          flag = 1;
          break;
        } else {
          flag = 0;
        }
      } else {
        flag = 1;
        break;
      }
    }
    if (nums[i] == 1)
    {
      continue;
    }
    else
    {
      if (flag == 0)
      {
        printf("%d is a prime number. \n", nums[i]);
      }
    }
  }

  printf("Second largest number is: %d \n", second_largest);
  printf("Total negative elements: %d \n", count_neg);
}
