void f4()
{
    bool forward = true;
    int begin = 'a';
    int capDist = 'A' - 'a';
    for (int i = 0; i >= 0; )
    {
        string str;
        for (int j = 0; j < 26; j++)
        {
            if (j ==i) str.push_back(char(begin + j + capDist));
            else str.push_back(char(begin + j));
        }
        cout << str << endl;
        i = forward ? i+1 : i-1;
        if (i == 26) forward = false;
    }
}
