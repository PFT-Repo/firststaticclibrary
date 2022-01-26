char *ft_strrchr(const char *str, int ch)
{
int i;
int u; 
int len;
len = 0;
while ( str[len] != '\0')
{
    len++;
}

char * r;
while (str[len] != ch)
{
    len--;
    if(str[len] == ch)
    {
        u = len;
    }
}
i = 0;
while (str[u]!= '\0')
{
    r[i] = str[u];
    i++;
    u++;
}
return(r);
}