#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#define s system("cls");

char* animals();
char* birds();
char* places();
char* vegetables();
char* flowers();
void singleplayer();
void multiplayer();
int main()
{

int key1,key2;


printf("**************************************************************");
printf("\n\t\t**          HANGMAN                  **\t\t\n");
printf("\n\t||||| SAVE *MAN* BEFORE ITS TOO LATE |||||\t\n");
printf("\n\t\t ___*WITH WORDS*___ \t\t\n\n");

while(1){

printf("\t\t 1)Play The Game \n\t\t 2)Help \n\t\t 3)Credits \n\t\t 4)EXIT \n\t");
printf(" ENTER here- ");
scanf("%d",&key1);

s

switch(key1){
    case 1: printf("\n\t 1)Single-Player \n\t 2)Multi-player \n\t");
            printf(" ENTER here- ");
            scanf("%d",&key2);
             s
            switch(key2){
            case 1: singleplayer();
            break;
            case 2: multiplayer();
            break;
            default : printf(" Enter a valid number \n\t ");
             getch(); s
             }
            break;



    case 2:     printf(" Welcome to our help center \n");
                printf("\t\t This is all about guessing the word... \n");
                printf("\t\t Before we get started,let us know some important aspects \t\t of this game \n");
                printf("\t\t 1)\n\t\t Single player mode.. \n");
                printf("\t\t Here the to be guessed is picked by the computer \n");
                printf("\t\t The user has to guess the word \n");
                printf("\t\t 2)\n\t\t Multi player mode.. \n");
                printf("\t\t Here two or more players are involved,and the while one player \t\t gives the word..the other player has to guess it \n");
                printf("\t\t The player need not worry of reveal of his word,because the \n\t\t word will be hidden \n");

                printf("\t\t How does this game works?? \n");
                printf("\n\t\t After the word guessing starts..\n");
                printf("\t\t The word without the consonants is displayed \n");
                printf("\t\t The desired location and the letter should be entered \n");
                printf("\t\t the locations go as follows...\n");
                printf("\t\t let us take a sample word: hello \n\thello\n\t12345 \n");
                printf("\t\t If the entered letter is wrong..the you lose a point. \n");
                printf("\t\t You will have 6 points,and when all lost..the man will be hung \n");
                printf("\t\t *REMEMBER THE WORDS ARE CASE-SENSITIVE* \n");
                  getch(); s
                break;



     case 3: printf(" this was developed by....");
        getch(); s
        break;



        case 4 : exit(1);
        getch(); s
        break;



        default : printf("\n #Invalid option# \n\n");
         

}


}

}

void singleplayer()

    {
	int i,n,f,count=0,k,j;
	char *g,a[20],b[20],c[20],t,h;
	char *x,*y,*z,*w,*u;


	printf("\nENTER YOUR CHOICE");
	printf("\nPRESS");
	printf("\n\n1)ANIMALS\n2)BIRDS\n)FLOWERS\n3)FLOWERS\n4)PLACES\n5)VEGETABLES\n\t");
	printf(" Enter here - ");
	scanf("%d",&f);
	s

     switch(f)
     {

	    case 1: printf("Choice is animals\n\t");
			 x=(animals());

			   g=x;
			   break;
       case 2: printf("Choice is birds\n\t");
               y=birds();

			   g=y;
			    break;
       case 3: printf("Choice is flowers\n\t");
               z=(flowers());

			   g=z;
			    break;
      case 4: printf("Choice is places\n\t");
               u=(places());

			   g=u;
			 break;
      case 5: printf("Choice is vegetables\n\t");
               w=(vegetables());

			   g=w;
			   break;


       default: printf(" Choice other than 1, 2, 3, 4 and 5 \t");

	            break;
         }
        i=0;

     	while(*g!='\0')
     	{


     		*g++;
			a[i]=g[-1];

     		i=i+1;


		 }a[i]='\0';



   n=strlen(a);

	for(i=0;i<=n;i++)
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='a'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
         b[i]=a[i];
	 }
    else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
      {
      b[i]='.';
	  }
	  b[n]='\0';


strcpy(c,b);
         printf(" GUESS- "); puts(c);

		printf("\n \t guess the missing letters \n");


		          while(strcmp(a,b)!=0)
				{
                   if(count==6)
                   {

					 break;
				   }
			printf(" \nenter the location and then the letter ");
			scanf("%d %c",&k,&t);
			j=k-1;
		       if(t==a[j])
				{
				b[j]=a[j];
				c[j]=a[j];

				s

				printf("\n\nentered letter is correct\n");
				printf("\n\nyour guessing word now :%s\n",c);
				if(strcmp(a,c)==0)
				{
					break;
				}
				continue;

				}

			else if((t!=a[j]||t==a[j])&&a[j]==b[j])
				{
					s

				printf(" a letter already exists in this position %d \n",k);
				printf(" try with a valid position \n");
				printf("\n\nyour guessing word now :%s\n",c);
				continue;
				}

			 else (t!=a[j]);
                                {
								  s

                                count++;
                                printf("entered letter did not matched \n");
                                printf("lost a chance....try again \n");
				printf("available chances are %d \n",6-count);

				switch(count)
				{

				case 1:
				{

				printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |          \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 5 CHOICES");
				printf("\n\nyour guessing word now :%s\n",c);
					break;
		      }
				case 2:
		        	{

					   printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\  \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 4 CHOICES");
				printf("\n\nyour guessing word now :%s\n",c);
					break;
			 }
				case 3:
				{

						printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\ 0 \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 3 CHOICES");
				printf("\n\nyour guessing word now :%s\n",c);
					break;
			}
				case 4:
				{

						printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\ 0 /\n");
				printf(" |          \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 2 CHOICES");
				printf("\n\nyour guessing word now :%s\n",c);
					break;
		    	}
				case 5:
				{

					printf("YOUR LIFE\n");
    			printf("  ________________\n");
    			printf(" |         :\n");
				printf(" |         }\n");
    			printf(" |       \\ 0 /\n");
				printf(" |         | \n");
				printf(" |         | \n");
				printf(" |          \n");
				printf("_|___\n");
	            printf("YOUR FINAL CHOICES");
				printf("\n\nyour guessing word now :%s\n",c);
					break;
		    	}
				case 6:
	            {

				     printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
    			printf(" |       \\ 0 /\n");
    			printf(" |         |\n");
				printf(" |         |\n");
				printf(" |        / \\ \n");
    			printf("_|___\n");

                                        printf(" \nYOU ARE HANGED\nall given chances are over \n");
                                        printf(" given phrase could not be guesed ");



			puts(b);


			printf(" \nSORRY YOU LOST THE GAME \n\t");
			printf("Enter any key");
              getch();s
              break;
				 }

	          }
    }
  }
  	if(strcmp(a,c)==0)
  	{
  		printf("\ncongrutlations u won the game \n\t");
  		printf("press any key for menu");
  		getch();s
	  }

}

char *animals()
{

int lower = 0, upper = 9;


    srand(time(0));
    int m = (rand() + lower) % (upper + 1);


	char *a[]={

				"lion",
				"tiger",
				"girrafi",
				"goat",
				"cat",
				"dog",
				"sheep",
				"monkey",
				"hippo",
				"elephant"

				};
	   return  a[m];
}

char *birds()
{

int lower = 0, upper = 9;


    srand(time(0));
    int m = (rand() + lower) % (upper + 1);


	char *b[]={
	   		"sparrow",
			"parrot",
			"crane",
			"crow",
			"pegion",
			"kingfisher",
			"peacock",
			"owl",
			"goose",
			"hummingbird"
  };
	return  b[m];
}
char *flowers()
{

int lower = 0, upper = 9;


    srand(time(0));
    int m = (rand() + lower) % (upper + 1);

	char *f[]={
			"rose",
			"marygold",
			"jasmine",
			"lily",
			"hibiscus",
			"tulip",
			"lotus",
			"orchid",
			"sunflower",
			"zinna"
	};
	return  f[m];
}

char *places()
{

int lower = 0, upper = 9;


    srand(time(0));
    int m = (rand() + lower) % (upper + 1);

	char *p[]={
			"delhi",
			"andhrapradesh",
			"telengana",
			"kerala",
			"madhayapradesh",
			"maharastra",
			"tamilnadu",
			"hyderabad",
			"jammu",
			"mumbai"
   };
	return p[m];

}

char *vegetables()
{

int lower = 0, upper = 9;


    srand(time(0));
    int m = (rand() + lower) % (upper + 1);

	char *v[]={
			"capsicum",
			"tomato",
			"greenchily",
			"radish",
			"ladyfinger",
			"onion",
			"carrot",
			"cucumber",
			 "brinjal",
			"pototao"

	};
	return  v[m];
}

void multiplayer()
   {

		int  k,i,n,count=0,j,z=0;

		char a[100],b[100],c[100],t,x,y=' ',h;

		printf(" Enter the desired word to be guesed \n\t");

	while (z<=100)
	{
    a[z]=getch();
    y=a[z];
    if(y==13)
    break;
    else
	 printf("*");
    z++;
	}
	a[z]='\0';
	z=0;
	printf("\n");

		s

		strcpy(b,a);

		n=strlen(a);

		printf(" The phrases have been taken succesfuly \n");

		printf(" Now the time for guessing the phrase \n\t");

		for(i=0;i<n;i++)
		{

			if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
				{

					}

			else
			{
			b[i]='.';

			}
		}
          strcpy(c,b);
         printf(" GUESS- "); puts(c);

		printf("\n \t guess the missing letters \n");


		          while(strcmp(a,b)!=0)
				{
                   if(count==6)
                   {
                   break;
				   }
			printf(" \nenter the location and then the letter ");
			scanf("%d %c",&k,&t);
			j=k-1;
		       if(t==a[j])
				{
				b[j]=a[j];
				c[j]=a[j];

				s

				printf("\n\nentered letter is correct\n");
				printf("\nyour guessing word now :%s",c);
				if(strcmp(a,c)==0)
				{
					break;
				}
				continue;

				}

			else if((t!=a[j]||t==a[j])&&a[j]==b[j])
				{
					s

				printf(" a letter already exists in this position %d \n",k);
				printf(" try with a valid position \n");
				printf("\nyour guessing word now :%s",c);
				continue;
				}

			 else (t!=a[j]);
                                {
								  s

                                count++;
                                printf("entered letter did not matched \n");
                                printf("lost a chance....try again \n");
				printf("available chances are %d \n",6-count);

				switch(count)
				{

				case 1:
				{

				printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |          \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 5 CHOICES");
				printf("\nyour guessing word now :%s",c);
					break;
		      }
				case 2:
		        	{

					   printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\  \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 4 CHOICES");
				printf("\nyour guessing word now :%s",c);
					break;
			 }
				case 3:
				{

						printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\ 0 \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 3 CHOICES");
				printf("\nyour guessing word now :%s",c);
					break;
			}
				case 4:
				{

						printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
				printf(" |       \\ 0 /\n");
				printf(" |          \n");
				printf(" |          \n");
				printf("_|___\n");
				printf("YOU ARE LEFT WITH 2 CHOICES");
				printf("\nyour guessing word now :%s",c);
					break;
		    	}
				case 5:
				{

					printf("YOUR LIFE\n");
    			printf("  ________________\n");
    			printf(" |         :\n");
				printf(" |         }\n");
    			printf(" |       \\ 0 /\n");
				printf(" |         | \n");
				printf(" |         | \n");
				printf(" |          \n");
				printf("_|___\n");
	            printf("YOUR FINAL CHOICES");
				printf("\nyour guessing word now :%s",c);
					break;
		    	}
				case 6:
	            {

				     printf("YOUR LIFE\n");
				printf(" ________________\n");
				printf(" |         :\n");
				printf(" |         }\n");
    			printf(" |       \\ 0 /\n");
    			printf(" |         |\n");
				printf(" |         |\n");
				printf(" |        / \\ \n");
    			printf("_|___\n");

                                        printf(" \nYOU ARE HANGED\nall given chances are over \n");
                                        printf(" given phrase could not be guesed ");



			puts(b);


			printf(" \nSORRY YOU LOST THE GAME ");
              getch();s
              break;
				 }

	          }

    }
  }
  	if(strcmp(a,c)==0)
  		printf("\ncongrutlations u won the game\n");
        getch();s
}
