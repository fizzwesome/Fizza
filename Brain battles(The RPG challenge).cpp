      #include<stdio.h>
      #include<ctype.h>
      #include<stdlib.h>
      #include<time.h>
     int main() 
{
     int score = 0 , playerHealth = 100 , enemyHealth = 50 , choice;
     char answer;

     printf("\n\n\n\n\t\t\t\t    WELCOME TO THE \"BRAIN BATTLES GAME : THE RPG CHALLENGE!\" \n");
     printf("\n\n\n  PLEASE READ THE FOLLOWING INSTRUCTIONS BELOW :  ");
     printf("\n Remember this game has total 2 levels only and if the player scores greater than 5 out of 10 questions only then player would be upgraded to the level 2 otherwise not");
     printf("\n\n\n\t\t\t\t\t  LEVEL 1 HAS BEEN UNLOCKED!!! ");
     printf("\t\n\n\t\t\t\t\t  Be ready for the quiz!   ");

     // Question 1
     
     printf("\n\nWhat is the capital of France?\n");
     printf("A) London  B) Paris  C) Berlin  D) Madrid\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))

  {
     if (toupper(answer) == 'B') 
  {
     printf("Correct!\n");
     score++;
  } 
	 else 
  {
     printf("\nIncorrect. The correct answer is B.\n");
  }
  }
     else
  {
	 printf("\nINVALID INPUT");
	
  }

     // Question 2
    
      printf("\n\nWhich planet is known as the Red Planet?\n");
      printf("A) Venus  B) Mars  C) Jupiter  D) Saturn\n");
      printf("Enter your answer (A, B, C, or D): ");
      scanf(" %c", &answer);
      
      if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
  {
	  if (toupper(answer) == 'B') 
  {
      printf("\nCorrect!\n");
      score++;
  }     else 
  {
      printf("\nIncorrect. The correct answer is B.\n");
  }
  }
      else
  {
	  printf("\nINVALID INPUT");
  }
    

     // Question 3
    
     printf("\n\nWhat is the largest mammal in the world?\n");
     printf("A) Elephant  B) Giraffe  C) Blue Whale  D) Dolphin\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
      if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
  {
      if (toupper(answer) == 'C') 
  {
      printf("\nCorrect!\n");
      score++;
  }   else 
  {
      printf("\nIncorrect. The correct answer is C.\n");
  }
  }
      else
  {
      printf("\nINVALID INPUT");
  }

     // Question 4
     
      printf("\n\nWho wrote 'Romeo and Juliet'?\n");
      printf("A) William Shakespeare   B) Charles Dickens C) Jane Austen  D) Mark Twain\n");
      printf("Enter your answer (A, B, C, or D): ");
      scanf(" %c", &answer);
      
      if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
  {
	  if (toupper(answer) == 'A') 
  {
      printf("\nCorrect!\n");
      score++;
  }   else 
  {
      printf("\nIncorrect. The correct answer is A.\n");
  }
  }
      else
  {
      printf("\nINVALID INPUT");
    		
  }
	
    //Question 5
    
     printf("\n\nWhich programming language is known for its readability'?\n");
     printf("A)JAVA script B) C  C) JAVA  D) PYTHON\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
  {
	 if (toupper(answer) == 'D') 
  {
     printf("\nCorrect!\n");
     score++;
  }  else 
  {
     printf("\nIncorrect. The correct answer is D.\n");
  }
  }
     else
  {
     printf("\nINVALID INPUT");
  }

     //Question 6
     
     printf("\n\nWhat is the powerhouse of the cell'?\n");
     printf("A)Nucleus  B)Ribosome   C) mitochondria  D)Endoplasmic Reticulum \n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
 {
	 if (toupper(answer) == 'C') 
 {
     printf("\nCorrect!\n");
     score++;
 }   else 
 {
     printf("\nIncorrect. The correct answer is C.\n");
 }
 }
     else
 {
     printf("\nINVALID INPUT");
 }

     //Question 7
    
     printf("\n\nWhat is the capital of Japan'?\n");
     printf("A)Tokyo   B)Seoul  C)Beijing   D)Bangkok\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
 {
	 if (toupper(answer) == 'A')
 {
     printf("\nCorrect!\n");
     score++;
 }   else 
 {
     printf("\nIncorrect. The correct answer is A.\n");
 }
 }
     else
 {
    		
	 printf("\nINVALID INPUT");
 }

    //Question 8
    
     printf("\n\nWhat is the largest planet in our solar system'?\n");
     printf("A)jupiter   B)earth  C)pluto   D)neptune\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
 {
	 if (toupper(answer) == 'A')
 {
     printf("\nCorrect!\n");
     score++;
 }   else 
 {
     printf("\nIncorrect. The correct answer is A.\n");
 }
 }
     else
 {
     printf("\nINVALID INPUT");
 }

    //question 9
    
     printf("\n\nWho wrote 'Hamlet'?\n");
     printf("A)Jane Austen   B)Charles Dickens  C)Mark Twain  D)William Shakespeare\n");
     printf("Enter your answer (A, B, C, or D): ");
     scanf(" %c", &answer);
     
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
 {
	 if (toupper(answer) == 'D') 
 {
     printf("\nCorrect!\n");
     score++;
 }   else 
 {
     printf("\nIncorrect. The correct answer is D.\n");
 }
 }
     else
 {
     printf("\nINVALID INPUT");
 }
     //question 10
     
      printf("\n\nWho was the first president of USA'?\n");
      printf("A)Trump  B)George Washington  C)Mark Twain  D)Marina khan\n");
      printf("Enter your answer (A, B, C, or D): ");
      scanf(" %c", &answer);
      
     if((answer>='A'|| answer>='a')  &&  (answer<='D'|| answer<='d'))
 {
	 if (toupper(answer) == 'B')
 {
     printf("\nCorrect!\n");
     score++;
 }   else 
 {
     printf("\nIncorrect. The correct answer is B.\n");
 }
 }
     else
 {
     printf("\nINVALID INPUT");
 }
     
     // Display the final score
     
     printf("\n\n\n\t\aYour final score is: %d out of 10\n", score);
     
     if(score>5)
 {
     printf("\n\t\t\t\t\aYou are Upgraded to the level 2");
     printf("\n\t\t\t\tWelcome to the \"Dungeon Crawler Game!\"\n");
     printf("\n\t\t\t\tLET'S HAVE AN ADVENTURE...BE READY!");
     while (playerHealth > 0  &&  enemyHealth > 0) 
 {
     printf("\nPlayer Health: %d\n", playerHealth);
     printf("\nMonster Health: %d\n", enemyHealth);
     printf("----------------------------\n");
     printf("\a\n1. Attack?\n");
     printf("\a\n2. Run?\n");

     scanf("%d", &choice);

        if (choice ==  1) 
	{
            // Player attacks
            
            int playerDamage = rand() % 10 + 1; // Random damage between 1 and 10
            
            printf("\t\tYou attack and deal %d damage to the monster!\n", playerDamage);
            
            enemyHealth -= playerDamage;

            // Monster attacks
            
            int enemyDamage = rand() % 8 + 1; // Random damage between 1 and 8
            
            printf("\t\tThe monster attacks and deals %d damage to you!\n", enemyDamage);
            
            playerHealth -= enemyDamage;
    } 
	    else if (choice == 2) 
	{
            // Player tries to run away
            
            printf("\t\tYou try to run away, but you cannot escape!\n");

            // Monster attacks
            int enemyDamage = rand() % 8 + 1; // Random damage between 1 and 8
            
            printf("\t\tThe Monster attacks and deals %d damage to you!\n", enemyDamage);
            
            playerHealth -=  enemyDamage;
    }   else 
	{
            printf("\t\t\tInvalid choice. Try again.\n");
    }
    }

        if (playerHealth <=  0) 
	{
           printf("\t\t\t\t\t\tYou were defeated. Game over!\n");
    }   else
	{
           printf("\t\t\t\t\t\tCongratulations! You defeated the Monster and won the game!\n");
    }

	}
	    else
	{
		   printf("\n\t\t\t\t\tSorry you are not upgraded to the next level");
		   printf("\n\a\t\t\t\t\tBetter luck next time!");
	}

    return 0;
}