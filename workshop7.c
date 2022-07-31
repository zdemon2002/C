#include<string.h>
#include<stdio.h>
#include<conio.h>

int validate(char *buf){
    int i;
    for(i=0; i< strlen(buf); ++i)
        if(!isalpha(buf[i]))     
            return 0;
        return 1;
}

void ChuanHoa(char *s){
    int i,j,n;
    n=strlen(s);
    //Xoa khoang trang o dau xau
    while(s[0]==' '){
        for(i=0;i<n;i++)
            s[i]=s[i+1];
        n=n-1;
    }
    //Xoa khoang trang o cuoi xau
    while(s[n-1]==' '){
        s[n-1]=0;
        n=n-1;
 
    }
    //Moi tu cach nhau 1 khoang trang
 
    for(i=0;i<n;i++){
        j=i;
        int k;
        while( s[j]==' '){
            if(s[j+1]==' '){
            for(k=j;k<n;k++)    s[k]=s[k+1];
            n=n-1;
            }
            else j++;
        }
    }
             s[n]=0;
    
 
}

int main(){
	char str[100];
	int i,j,cnt;
	int Selection;
	int n;
	n=strlen(str);	

	
	do {
	printf("Choose one of the following options:");
	printf("\n1. Input a string");
	printf("\n2. Split a string into words");
	printf("\n3. Convert a string into proper form");
	printf("\n4. Remove redundant spaces");
	printf("\n5. Check valid name");
	printf("\n0. Exit");
	printf("\nYour selection (0 -> 6): ");
	scanf("%d",&Selection);
	
// 0.
	if (Selection == 0){
		break;
	}	
// 1.
	if (Selection == 1){
		printf("Input a string: ");
		fflush(stdin);
		gets(str);
		
	printf("\n");
	}
// 2.
	if (Selection == 2){
		char splitStrings[10][10];	
		j=0; cnt=0;
	    for(i=0;i<=(strlen(str));i++){
	        // if space or NULL found, assign NULL into splitStrings[cnt]
	        if(str[i]==' '||str[i]=='\0')
	        {
	            splitStrings[cnt][j]='\0';
	            cnt++;  //for next word
	            j=0;    //for next word, init index to 0
	        }
	        else
	        {
	            splitStrings[cnt][j]=str[i];
	            j++;
	        }
	    }
	printf("\nThe original string: %s",str);
	printf("\nNumber of words in the string: %d they are\n", cnt);
	for(i=0;i < cnt;i++)
        printf("%s\n",splitStrings[i]);
	printf("\n");   
	}	
// 3.
	if (Selection == 3){
		
		printf("The original string: %s", str);		
		
		for(i=0;i<n;i++){
			str[0] = toupper(str[0]);
        	if(str[i-1]==' '){
				str[i]=toupper(str[i]);
			}
		}
		
		printf("\nThe proper form: ");
		printf("%s",str);
		printf("\n");
	}	
// 4.
	if (Selection == 4){
	    printf("The original string: %s", str);			
		ChuanHoa(str);
		printf("\nThe cleaned form: %s",str);
	    printf("\n");
		}
// 5.
	if (Selection == 5){
		if (validate(str) == 0){
			printf("\ninvalid name");
		}	else	{
			printf("\nvalid name");
		}
	printf("\n");
	}
	
}	while (Selection < 6);

}
