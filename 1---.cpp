struct stack
{
    int size;
    int Top;
    int *s;

};
int main()
{
    struct stack st;
    cout<<"Enter the size of stack";
    cin>>st.size;
    st.s= new int[st.size];
    st.Top= -1;


}