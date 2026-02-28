int FindIdOfBounder(int size, int nums[size])
{
    int left = 0;
    int rigth = size-1;
    while (true) {
        if (nums[left] == 0 && nums[left+1] == 1)
        {
            return left;
        }
        else {
            if (nums[rigth] == 1 && nums[rigth-1] == 0) {
                return rigth;
            }
        }
    }
}