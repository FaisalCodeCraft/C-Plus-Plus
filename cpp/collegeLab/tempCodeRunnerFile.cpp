int main()
{
    int num, rem, sum = 0;
    cout << "Enter any Number :\t";
    cin >> num;
    int orgNum=num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num /= 10;
    }
    cout << " Number " << sum << endl;
    if (sum == orgNum)
    {

        cout << sum << " is Armstrong Number \n";
    }
    else
        cout << orgNum << " is not Armstrong Number \n";

    return 0;
}