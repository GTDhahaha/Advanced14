#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	char str[]="I $am 5a$ go68od#@$ st-ude[nt].";
	int i, j;
    int count = 0;
    for (i = 0, j = 0; str[i]; i++)
    {
        if (str[i] == ' '||str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){  
           str[j++] = str[i];
        }else{
            count++;
        }       
    }
    str[j] = '\0';	
	printf("%s\n",str);

	system("pause");
	return 0;
}


