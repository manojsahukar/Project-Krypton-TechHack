#include<stdio.h>

void main()
{
char b[26],code[3],msg[30];
int i,n,j,index;

puts("Enter the 3 letter code in CAPs:__=__");
gets(code);

n=code[0]-65;

index=n;

i=1;


b[n]=code[2];

while(b[n]!='A' && n!=25)
{
b[n+1]=code[2]-i;
i++;
n++;
}

n=n+1;

printf("n=%d\n\n",n);


if(n==26 && b[25]==65)
{

j=0;
i=0;

while(j!=index)
{
b[j]=90-i;
j++;
i++;
}

}


else if(n==26)

{

b[0]=b[25]-1;

i=2;
j=0;

while(b[j]!='A')
{
b[j+1]=b[25]-i;
i++;
j++;
}

i=0;

while(j!=index)
{
b[j+1]=90-i;
j++;
i++;
}


}


else

{

i=0;

while(n!=26)
{
b[n]=90-i;
i++;
n++;
}

n=0;

while(n!=index)
{
b[n]=90-i;
i++;
n++;
}

}

puts(b);
puts("\n\n");

puts("Enter the msg to encode or decode");
gets(msg);

puts("\n\n");

i=0;
while(msg[i]!=NULL)
{
index=msg[i]-65;
if(index>25 || index<0)
printf("%c",msg[i]);
else
printf("%c",b[index]);
i++;
}

printf("\n\n\n\nprogrammed by:\nMANOJ SAHUKAR");

}
