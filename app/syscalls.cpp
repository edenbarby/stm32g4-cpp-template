extern "C"
{
    // void _exit(int)
    // {
    //     while (true)
    //     {
    //     }
    // }

    // void* _sbrk(int)
    // {
    //     while (true)
    //     {
    //     }
    //     return nullptr;
    // }

    // int _fstat(int, struct stat*)
    // {
    //     while (true)
    //     {
    //     }
    //     return 0;
    // }

    // int _isatty(int)
    // {
    //     while (true)
    //     {
    //     }
    //     return 0;
    // }

    int _lseek(int, int, int)
    {
        while (true)
        {
        }
        return 0;
    }

    int _read(int, char*, int)
    {
        while (true)
        {
        }
        return 0;
    }

    int _write(int, char*, int)
    {
        while (true)
        {
        }
        return 0;
    }

    int _close(int)
    {
        while (true)
        {
        }
        return 0;
    }
}