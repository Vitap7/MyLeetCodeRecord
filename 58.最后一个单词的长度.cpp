int lengthOfLastWord(char * s){
    int a=0,c=0,d=0,i=0;
    a=strlen(s);
    for(i=a-1;i>=0;i--)
    {
        if(s[i]!=' ')c++;
        if(s[i]==' '&&c!=0)break;
    }
    return c;
}
