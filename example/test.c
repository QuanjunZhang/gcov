#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* twoSum(int* nums, int numsSize, int target) {
    int loop = 0;
    int inloop = 0;
    int* result = NULL;
    result =(int*) malloc(2*sizeof(int));
    memset(result,0,2*sizeof(int));
    printf("numsSize=%d\n",numsSize);
    if(NULL == nums || numsSize==0)
    {
        return result;
    }

    for(loop = 0;loop < numsSize;loop++)
    {
        for(inloop = loop+1;inloop <numsSize;inloop++)
        {
            if(*(nums+loop)+*(nums+inloop) == target)
            {
                if(NULL != result)
                {

                    *result = loop;
                    *(result+1) = inloop;
                }
                return result;
            }
        }
    }
    return result;
}

int main(int arg,char argv[])
{
    int nums[4]={2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int* result = twoSum(nums,numsSize,target);
    printf("index1:%d\nindex2:%d\n",*result,*(result+1));
}
