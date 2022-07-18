#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
    -J'ai ecrit un programme qui combine les deux fonctions en une seule. 
    -Pour tester plusieurs input vous pouvez changer a la main la valeur de la variable ch[]
*/
int main()
{ char ch[]="hello    world    !!!!!     am     Asma";
  int count=0;
  int i=0;
  int j;
  char delim=' ';
  while(i<strlen(ch))
  {
  	if(ch[i]==delim)
  	{
  		count++;
  		j=i;
  		while((j<strlen(ch))&&(ch[j]==delim))
  		{
  			j++;	
  		}
  		i=j-1;
  	}
  	i++;
  }
  
  if((ch[strlen(ch)-1]==delim)&&(ch[0]==delim))
	count--;
  //if(ch[0]==delim)
  	//count++;
  if((ch[strlen(ch)-1]!=delim)&&(ch[0]!=delim))
	count++;
 
printf("count= %d\n",count);
///////////////////////////////////////////////////////


  if(count!=0)
 {	
  char **s=(char**)malloc(count*sizeof(char*));
  for(int i=0;i<count;i++)
  {
     s[i]=(char*)malloc(strlen(ch)*sizeof(char));
  }
  int cot=0;
  while(i<strlen(ch))
  {
  	if(ch[i]!=delim)
  	{
  		j=0;
  		while(ch[i]!=delim)
  		{
  			s[cot][j]=ch[i];
  			j++;
  			i++;
  		}
  		cot++;
  	}
  	i++;
  }
  
  for(int i=0;i<count;i++)
  {
   printf("%s",s[i]);
  	
  	
  }
  printf("\n");

 }
 
 
 
 
  	
  	

  	
 
}
