#include<stdio.h>
#include<string.h>

char str[10000];//input string
int T, //test cases
    n,//length of the string
    num;

int main() {
    
    int last, second_last, third_last;

    scanf("%d", &T);

    n = strlen(str);

    while(T--) {

          scanf("%s", str);

          n = strlen(str);
          
          if(n == 1){
          
             num = str[0]-'0';
             
             if(num % 8 == 0) printf("%s", "Yes");

                 else 
                              printf("%s", "No");         
             
             
          } else if(n == 2) {

            num = (str[n-2]-'0') * 10; 

            num += 1 * str[n-1] + 0;
            
            if(num % 8 == 0) printf("%s", "Yes");

                     else 
                             printf("%s", "No");         
            
          } else {

            last = str[n-1] - '0'; 

            second_last = str[n-2] - '0';
            
            third_last = str[n-3] - '0';
            
            num = last * 1000 + second_last * 100 + third_last * 10;
            
            if(num % 8 == 0) printf("%s", "Yes");

                      else 
                             printf("%s", "No");                     
          }          

          printf("\n");
    }

return(0);
}