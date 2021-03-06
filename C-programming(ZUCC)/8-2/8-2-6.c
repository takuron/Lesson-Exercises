#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */

void StringCount( char *s ){
	int i;
	int big=0,small=0,space=0,number=0,other=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='A'&&s[i]<='Z'){
			big++;
		}
		else if(s[i]>='a'&&s[i]<='z'){
			small++;
		}
		else if(s[i]>='0'&&s[i]<='9'){
			number++;
		}
		else if(s[i]==' '){
			space++;
		}
		else{
			other++;
		}
	}
	printf("%d %d %d %d %d",big,small,space,number,other);
}
