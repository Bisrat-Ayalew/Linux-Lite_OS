#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<errno.h>

int main()
{
  const char *name = "linux";
  mode_t type = 0755:

  int result = mkdir(name,type);
  if(result==0)
  {
    printf("successful");
  }
  else
  {
    perror("failed");
  }
return 0;
}


 
