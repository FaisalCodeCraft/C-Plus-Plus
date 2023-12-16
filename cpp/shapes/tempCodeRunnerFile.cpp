int main()
{
    int row = 1;
    int column = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int column = 1; column <= 5; column++)
        {
            if (row == 1 || row == 5 || column == 1 || column == 5)
            {
                cout << "* ";
                // cout<<(char) 219;
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
 