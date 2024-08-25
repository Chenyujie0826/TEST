namespace Test
{
    class Tool
    {
    private:
        int *arr;
        int n;
    public:
        Tool(int b[],int c);
        float average();
        float median();
        float variance(float x);
        float range();
        void mode(int b[]);
        ~Tool();
    };
}
