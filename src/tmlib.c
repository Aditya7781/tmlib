int getStringLength(char *p)
{
int x;
for(x=0;*p;p++,x++);
return x;
}
void copyString(char *p,char *q)
{
for(;*p;p++,q++) *p=*q;
*p='\0';
}