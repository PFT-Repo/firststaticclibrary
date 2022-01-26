char *ft_strchr(const char *str, int ch)
{
int i;
int u; 
char * r;
i = 0;
while (str[i] != '\0')
{
    if(str[i] == ch)
    {
        u = i;
    }
    else{
        i++;
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