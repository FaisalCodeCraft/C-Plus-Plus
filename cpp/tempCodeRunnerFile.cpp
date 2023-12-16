int main()
{
    int sum = 0, count = 0, num = 2;

loop_start:
    if (num > 100)
        goto end;

    sum += num;
    count++;

    num += 2;
    goto loop_start;

end:
    if (count > 0)
    {
        double average = sum / count;
        cout << "Average of even numbers between 1 and 100: " << average << endl;
    }
    else
    {
        cout << "No even numbers found between 1 and 100." << endl;
    }

    //     return 0;
}