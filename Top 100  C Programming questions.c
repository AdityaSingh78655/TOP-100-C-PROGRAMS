
//top 100 programs in c language......
// made by:- Aditya singh(CS 3rd year)
           
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int factorial(int a);
void main()
{
	int n,m,sum=0,i,max,min,a,j,k,l,sum1=0,x,y,temp,r;
	int c,d,p;
	printf("\n\n****************************************\n");
	printf("****************************************\n");
	printf("1. positive or negative no.\n");
	printf("2. even or odd number\n");
	printf("3. sum of first N natural no.\n");
	printf("4. sum of numbers in a given range\n");
	printf("5. gretest in n numbers\n");
	printf("6. leap year or not\n");
	printf("7. prime number\n");
	printf("8. prime no. with a given range\n");
	printf("9. sum of digit of a number\n");
	printf("10. reverse of a number\n");
	printf("11. palindrome number\n");
	printf("12. armstrong number\n");
	printf("13. armstrong number in a given range\n");
	printf("14. fibonacci series upto nth term\n");
	printf("15. factorial of a number\n");
	printf("16. power of a number\n");
	printf("17. factor of a number\n");
	printf("18. strong number\n");
	printf("19. perfect number\n");
	printf("20. automorphic number\n");
	printf("21. harshad number\n");
	printf("22. abundant number\n");
	printf("23. friendly pair\n");
	printf("24. HCF\n");
	printf("25. LCM\n");
	printf("26. greatest common divisor\n");
	printf("27. binary to decimal conversion\n");
	printf("28. decimal to binary conversion\n");
	printf("29. decimal to octal conversion\n");
	printf("30. octal to binary conversion\n");
	printf("31. octal to decimal conversion\n");
	printf("32. quadrents in which a given coordinate lies\n");
	printf("33. permutation in which n people can occupy r seats in a classroom\n");
	printf("34. maximum number of handshakes\n");
	printf("35. addition of two fractions\n");
	printf("36. replace all 0's with 1 in a given integer\n");
	printf("37. can a number be expressed as a sum of two prime numbers\n");
	printf("38. count possible decoding of a given digit sequence\n");
	printf("39. check whether a charecter is vowel or consonant\n");
	printf("40. check whether a charecter is alphabet or not\n");
	printf("41. calculate the area of circle\n");
	printf("42. find the ASCII value of charecter\n");
	printf("43. find the prime no. between 1 to 100\n");
	printf("44. calculate the number of digit in an integer\n");
	printf("45. convert digit/number into word\n");
	printf("46. counting number of days in a given month of a year\n");
	printf("47. find number of time x digit occurs in a given input\n");
	printf("48. finding number of integers which has exactly x divisors\n");
	printf("49. finding root of a quadretic equarion\n");
	printf("50. find smallest element in the array\n");
	printf("51. find second smallest element in the array\n");
	printf("52. find largest element in an array\n");
	printf("53. find smallest and largest element in an array\n");
	printf("54. calculate the sum of elemnts in an array\n");
	printf("55. reverse an array\n");
	printf("56. sort first half in ascending order and second half in descending order\n");
	printf("57. sort the elements of an array\n");
	printf("58. finding the frequency of element in an array\n");
	printf("59. finding the longest palindrome in an array\n");
	printf("60. counting distinct element in an array\n");
	printf("61. finding repeating element in an array\n");
	printf("62. find non repeating element in an array\n");
	printf("63. remove duplicate element from an array \n");
	printf("64. finding minimum scaler product of two vectors\n");
	printf("65. finding maximum scaler product of two vectors in an array\n ");
	printf("66. counting the no. of even an odd element in an array\n");
	printf("67. finding all symmetric pairs in an array \n");
	printf("68. find maximum product sub-array in a give array\n");
	printf("69. find array is disjoint or not\n");
	printf("70. determine array is subset of another array or not \n");
	printf("71. determine can all numbers of an array be made equal\n");
	printf("72. finding minimum sum of absolute difference of given array\n");
	printf("73.* sorting element of an array by frequency\n");
	printf("74. sort an array according to the order defined by another array\n");
	printf("75.* replace each element of the array by its rank in the array\n");
	printf("76. finding equilibrium index of an array\n");
	printf("77. rotation of element of array left and right\n");
	printf("78.* block swap algorithm of array rotation\n");
	printf("79.* juggling algorithm for array rotation\n");
	printf("80.* finding circular rotation of an array by k positions\n");
	printf("81. length of string without using strlen() function\n");
	printf("82. toggle each charecter in a string\n");
	printf("83. count the number of vowel\n");
	printf("84. remove the vowels from a string\n");
	printf("85. check if the given string is palindrome or not\n");
	printf("86. print the given string in reverse order\n");
	printf("87. remove all charecters from string except alphabet\n");
	printf("88. remove spaces from string\n");
	printf("89. remove brackets from an algebric expression\n");
	printf("90. count the sum of numbers in a string\n");
	printf("91. capitalize the first and last charecters of each word of a string\n");
	printf("*92. calculate the frequency of charecter in a string\n");
	printf("93. find non-repiting charecter in a string\n");
	printf("*94. check two string are anagram or not\n");
	printf("95. replace a sub string in a string\n");
	printf("* 96. count common sub-sequence in two strings\n");
	printf("* 97. check if two strings match where one string contains wildcard charecters\n");
	printf("98. star pattern first alphabet of our name\n");
	printf("99. pyramid number pattern\n");
	printf("100. pascal triangle\n");
	printf("\n\n****************************************\n");
	printf("****************************************\n");
	printf("enter our choice\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the number");
			scanf("%d",&m);
			if(m>0)
			{
				printf("positive no.");
			}
			else if(m==0)
			{
				printf("neither +ve nor -ve");
			}
			else 
			printf("negative number");
			break;
			
		case 2:
		printf("enter the number");
		scanf("%d",&m);
		if(m%2==0)
		{
			printf("even number");
			}	
		else 
		{
			printf("odd number");
			}
			break;
			
		case 3:
		printf("enter number of terms");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		sum=sum+i;
	}
	printf("sum= %d",sum);
				break;
	
	 
	    case 4:
{
		 printf("enter lower range and upper range");
		 scanf("%d%d",&m,&n);
	     for(i=m;i<=n;i++)
	     {
	     	sum=sum+i;
		 }
		 printf("sum=%d",sum);
	     break;
	     
	    case 5:
		printf("enter the number of elements to find gretest number");
		scanf("%d",&n);
		printf("enetr %d elements",n);
		int a[n],i;
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		 } 
		 max=a[0];
		 for(i=1;i<=n-1;i++)
		 {
		 if(a[i]>max)
		 {
		 	max=a[i];
			 }
		}
		printf("largest =%d",max);	 
		 break;
}
    case 6:
	   printf("enter the year");
	   scanf("%d",&n);
	   if(n%4==0||n%400==0)
	   {
	   	printf("leap year");
		  }
		else 
		printf("not a leap year");
		break;     
      
	case 7:
	{
	   printf("enter the number");
	   scanf("%d",&n);
	   for(i=1;i<=n;i++)
	   {
	   	if(n%i==0)
	   	c++;
		  }   
        if(c==2)
        {
        	printf("prime number");
		}
		else
		printf("not prime");
	   break;
	}
	
	case 8:
		printf("enter the lower and upper range number");
		scanf("%d%d",&m,&n);
		for(i=m;m<=n;m++)
		{ c=0;
		 for(j=1;j<=m;j++)
		{
			if(m%j==0)
			c=c+1;	
			}
		if(c==2)
		printf("%d is prime\n",m);
		else
		printf("%d is not prime\n",m);	
		}
		break;

    case 9:
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
	  c=n%10;
	  n=n/10;
	sum=sum+c;  
	  }  
	 printf("sum of digit=%d",sum); 

    case 10:
    	printf("enter the no.");
    	scanf("%d",&n);
    	sum=0;
    	while(n!=0)
    	{  //123 = 321
    	   c=n%10;
    	   n=n/10;
    	   sum=sum*10+c; 
		}
		printf("reverse number=%d",sum);
		break;

    case 11:
    	printf("enter the no.");
    	scanf("%d",&n);
    	sum=0;
    	m=n;
    	while(n!=0)
    	{  //123 = 321
    	   c=n%10;
    	   n=n/10;
    	   sum=sum*10+c; 
		}
		if(sum==m)
		printf("Palindrome number");
		else
		printf("not a palindrome number");
		break;
	
	case 12:
		printf("enter the number");
		scanf("%d",&n);
		c=0;
		a=j=n;
		sum=0;
		while(n!=0)
		{
			m=n%10;
			n=n/10;
			c++;
		}
		while(a!=0)
		{
			m=a%10;
			a=a/10;
			sum=sum+pow(m,c);
		}
		if(sum==j)
		{
			printf("Armstrong number");
		}
		else 
		printf("not a armstrong number");
		break;
	
	case 13:
	   printf("enter the lower and upper range");
	   scanf("%d%d",&m,&n);
	   
	   for(i=m;m<=n;m++)
	   {   i=j=m; 
	      sum=0,c=0;
	   	   while(i!=0)
	   	   {
	   	   	k=i%10;
	   	   	i=i/10;
	   	   	c++;
			  }
		while(j!=0)
		{
		  l=j%10;
		  j=j/10;
		  sum=sum+pow(l,c); 	
				}
		if(sum==m)		
		printf("%d is armstrong number\n",sum);		  	  
		   }
	
	case 14:
{
	   printf("enter the range of fibonacci series");
	   scanf("%d",&n);
	   int a[n];
	   sum=0;
	    a[0]=0;
	    a[1]=1;
	   for(i=2;i<=n-1;i++)
	   	{
	   a[i]=a[i-1]+a[i-2];	
	  }
	    for(i=0;i<=n-1;i++)
	    {
	    	printf("%d ",a[i]);
		}
	     	break;
}
	case 15:
	  printf("enter a number");
	  scanf("%d",&n);
	  j=1;
	  for(i=1;i<=n;i++)
	  {
	  	j=j*i;
	  	}
	   printf("factorial= %d",j);
	   break;
	
	case 16:
		printf("enter a number");
		scanf("%d",&n);
		printf("enter power number");
		scanf("%d",&m);
		c=pow(n,m);
		printf("%d",c);
		break;
	
	case 17:
	printf("enter the number");
	scanf("%d",&n);
	printf("factor of %d is =",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
				   }
			break;
			
				   
	case 18:
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	k=n;
    while(n!=0)
	{  j=1;
		m=n%10;
	   for(i=1;i<=m;i++)	
		{j=j*i;}
		n=n/10;
		sum=sum+j;
		}	
	if(sum==k)
	{
		printf("strong number");
		}	
	else 
	printf("not a strong number");	
      break;
    
	
	case 19:  
    printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
		sum=sum+i;	
		}
}
	if(sum==n)
	{
		printf("strong number");
		}
	else 
	printf("not a strong number");	
	
	case 20:
	printf("enter the number:=  ");
	scanf("%d",&n);
	c=0;
	m=n;
	while(n!=0)
	{
		k=n%10;
		n=n/10;
		c=c+1;
	}
	 p=pow(m,c);
	 printf("\n%d  ",p);
	d=0;
	int sum=0;
	int total=0,l;
	while(d<c)
	{  k=p%10;
	   p=p/10;
	   sum=sum*10+k;
	   d++;
}
      while(sum!=0)
	  {
	    l=sum%10;
	   sum=sum/10;
	   total=total*10+l;
		
	}
	if(total==m)
	{
		printf("automorphic number");
	}
	else 
	printf("not a automorphic number");
	
	   break;
	   
	case 21:
		printf("enter the number");
		scanf("%d",&n);
		sum=0;
		m=n;
	   while(n!=0)
	   {
	   	k=n%10;
	   	n=n/10;
	   	sum=sum+k;
	   }
	   if(m%sum==0)
	   {
	   	printf("harshad number");
	   }
	   else
	   printf("not harshed number");
         break;

    case 22:
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum>n)
	{
		printf("abundent number");
	}
	else
	printf("not abundent number");
	  
	  break;
	  
	case 23:
	printf("enter the two number");
	scanf("%d%d",&n,&m);
	sum=sum1=0;
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	for(i=1;i<=m-1;i++)	
	{
			if(m%i==0)
		{
			sum1=sum1+i;
		}
	  }
	  if(n==sum&&sum1==m)
	  {
	  	printf("friendly pair number");
	  }
	  else
	  printf("not a friendly pair number");
	    break;
	    
	case 24:
	printf("enter the number");
	scanf("%d%d",&n,&m);
	for(p=n<m?n:m;p>=1;p--)
	{
		if(n%p==0&&m%p==0)
	    break;
	}
	  printf("HCF= %d ",p);
	    break;
	 
	case 25:
	printf("enter the two number");
	scanf("%d%d",&n,&m);
	i=n<m?n:m;
	while(m!=n)
	{
		if(i%n==0&&i%m==0)
		{
		
			break;
		}
		i++;
	}
		printf("LCM is %d ", i);
		break;
		
    case 26:
    	printf("enter the two number");
    	scanf("%d%d",&n,&m);
    	for(i=n<m?n:m;i>=1;i--)
    	{
    		if(n%i==0&&m%i==0)
    		{
    			break;
			}
		
		}
		printf("GCD is %d",i);
		   break;
		   
	
	case 27:
	printf("enter the number");
	scanf("%d",&n);
	sum=0;
	k=n;
	i=0;
	
	while(n!=0)
	{
		p=n%10;
		n=n/10;
		sum=sum+p*pow(2,i);
		i++;
		}
	    printf("%d of decimal number is %d",k,sum);	
	      break;
	
	
	case 28:
		printf("enter the number");
		scanf("%d",&n);
		p=n;
		sum=0,sum1=1;
		while(n!=0)
		{
			k=n%2;
			
		sum=sum+k*sum1;
		  n=n/2;
		sum1=sum1*10;
		}
		printf("%d",sum);
	     break;		

     
    case 29:
	printf("enter the number");
	scanf("%d",&n);
	sum=0,sum1=1;
	while(n!=0)
	{
		k=n%8;
		sum=sum+k*sum1;;
		n=n/8;
		sum1=sum1*10;
		
	 } 
        printf("octal number is %d",sum);
        
        break;


    case 30:
    	printf("enter the number");
    	scanf("%d",&n);
    	p=n;
    	sum=0,sum1=1;
    	while(n!=0)
    	{
    	 k=n%2;
		 sum=sum+k*sum1;
		 n=n/2;	
		 sum1=sum1*10;
		}
		printf("octal %d to binary is %d",p,sum);
		 break;
	
	case 31:
		printf("enter the number");
		scanf("%d",&n);
		p=n;
		sum=0,i=0;
		while(n!=0)
		{
			k=n%10;
			n=n/10;
			sum=sum+k*pow(8,i);
			i++;
		}
		printf("%d octal to decimal is %d",p,sum);
		   break;
	
	
	case 32:
	    printf("enter the quardinates");
		scanf("%d%d",&x,&y);
		if(x>0&&y>0)
		{
			printf("first quadrent");
			}	
		else if(x<0&&y>0)
		{
			printf("secand quadrent");
			}	
		else if(x<0&&y<0)
		{
			printf("third quadrent");
		}
		else if(x>0&&y<0)
		{
			printf("fourth qudrent");
		}
		else
		printf("lies at origin");
		   break;
		   
		   
	case 33:
		{
			printf("enter the number of students\n");
			scanf("%d",&n);
			printf("number of seats\n");
			scanf("%d",&r);
			if(n>r)
			{
				printf("\narrengements are not possible");
			}
			else if(n<r)
			{
		    p=factorial(r)/factorial(r-n);
			printf("number of way people can seated %d ",p);
		    }
		    break;   	 
		}
		  
	case 34:
	    printf("enter number of person");
		scanf("%d",&n);
		c= n*(n-1)/2;
		printf("maximum number of handshake is %d",c);
		break;
		
	
	case 35:
		{
		float c,m,n,p,k;
	printf("enter 1st fraction numerator and denomenator");
	scanf("%f%f",&m,&n);
	printf("\nenter 2nd fraction numerator and denomenator");	
	scanf("%f%f",&p,&k);
	
	c= (m/n)+ (p/k);
	printf("%f",c);
	
}
        break;
		   
	case 36:
		printf("enter the number");
		scanf("%d",&n);
		sum=0,sum1=1;
		while(n!=0)
		{
			k=n%10;
			if(k==0)
			{
				k=k+1;
			}
		sum=sum+k*sum1;
		n=n/10;
		sum1=sum1*10;	
		}
	    printf("%d",sum);
	    break;
		
	
	case 37:
	{
	
		printf("enter the number");
		scanf("%d",&n);
		p=n;
		 int t[p];
		 p=0,k=0;
		 for(i=2;i<=n;i++)
		{    c=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c++;
				}
			}
			if(c==2)
			{	
			  t[p]=i;
			  p++;
			  k++;
				}
		}
		printf("prime number are:-");
		for(i=0;i<=k-1;i++)
		{
			printf("%d ",t[i]);
			
		}
		printf("\nnumber of prime between 1 to %d is :- %d ",n,k);
		for(i=0;i<=k-1;i++)
		{
			for(j=0;j<=k-1;j++)
			{
				if(t[i]+t[j]==n)
				{
					printf("\n%d + %d is sum of two prime number\n",t[i],t[j]);
				}
			}
		}
	}
	  		   break;
	  		   
	  		   
	case 38:
	printf("enter the number");
	scanf("%d",&n);
	c=0;
	while(n!=0)
	{
		k=n%10;
		n=n/10;
		c++;
				 }
		break;		 
				    
		   
    case 39:
    	{
    	char n;
    	printf("enter the charecter");
    	fflush(stdin);
    	scanf("%c",&n);
    	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    	{
    		printf("\nvowel");
    	}
		else
		printf("\nconsonent");
}
          break;
          
          
    case 40:
    	{
    		char n;
    	printf("enter the element");
    	fflush(stdin);
    	scanf("%c",&n);
    	if((n>=65&&n<=90)||(n>=97&&n<=122))
    	{
    		printf("alphabet");
		}
		else
		printf("not alphabet");
	}
		break;
		
	
	case 41:
		{
		float n,c;
	  printf("enter the radius");
	  scanf("%f",&n);
	  	c=3.14*n*n;
	  	printf("area of circle is %f",c);
	  }
	  break;
	  
	  
	case 42:
	  printf("enter the charecter");
	  fflush(stdin);
	  scanf("%c",&n);
	  if((n>=65&&n<=90)||(n>97&&n<=122))
	  {
	  	printf("%c ASCII value is %d",n,n);
	  }
	    break;
	    
	    
	case 43:
		printf("prime number between 1 to 100 are:\n ");
	  for(i=1;i<=100;i++)
	{  
	     c=0;
	  	for(j=1;j<=i;j++)
	  	{
	  		if(i%j==0)
	  		{
	  			c++;
			  }
		  }
		  if(c==2)
		  {
		  	printf("%d is prime\n",i);
		  }
		  }    
	      break;
	      
	      
	case 44:
		printf("enter the number");
		scanf("%d",&n);
		c=0;
		while(n!=0)
		{
			n=n/10;
			c++;
		}
	      printf("number of digit are %d",c);
	      break;
	      
	 
	case 45:      
        printf("enter the number");
        scanf("%d",&n);
        break;


    case 46:
    	printf("enter the year\n");
    	scanf("%d",&y);
    	printf("\n enter the months\n");
    	scanf("%d",&m);
    	if(y%4!=0)
    	{
    		if(m==1)
            printf("january :> 31 days"); 
			else if(m==2)
			printf("february :> 28 days");
			else if(m==3)
			printf("march :> 31 days");
			else if(m==4)
			printf("april :> 30 days");
			else if(m==5)
			printf("may :> 30 days");
			else if(m==6)
			printf("june :> 31 days");
			else if(m==7)
			printf("july :> 30 days");
			else if(m==8)
			printf("auguast :> 31 days");
			else if(m==9)
			printf("september :> 30 days");
			else if(m==10)
			printf("october :> 31 days");
			else if(m==11)
			printf("november :> 30 days");
			else if(m==12)
			printf("december :> 31 days");
		}
    	else if(y%4==0&&y%400==0)
    	{
    		if(m==1)
            printf("january :> 31 days"); 
			else if(m==2)
			printf("february :> 29 days");
			else if(m==3)
			printf("march :> 31 days");
			else if(m==4)
			printf("april :> 30 days");
			else if(m==5)
			printf("may :> 30 days");
			else if(m==6)
			printf("june :> 31 days");
			else if(m==7)
			printf("july :> 30 days");
			else if(m==8)
			printf("auguast :> 31 days");
			else if(m==9)
			printf("september :> 30 days");
			else if(m==10)
			printf("october :> 31 days");
			else if(m==11)
			printf("november :> 30 days");
			else if(m==12)
			printf("december :> 31 days");
		}
		   break;
		   
	
	case 47:
		{
		    c=0;
	        printf("enter the number of digit\n");
	        scanf("%d",&n);
	        int a[n];
	        printf("enter the digit values");
	        for(i=0;i<=n-1;i++)
	        {
	          scanf("%d",&a[i]);	
			}
	       
	        printf("enter the digit you find how many times it comes\n");
	        scanf("%d",&m);
	        for(i=0;i<=n-1;i++)
	        {
	        if(a[i]==m)
	        {
	        	c++;
			}
		    }
		    printf("\ndigit comes %d times \n",c);
			 break;
	   }
	 
	case 48:
	     {  c=0;
		     printf("enter the number");
	         scanf("%d",&n);
	         for(i=1;i<=n;i++)
	         {
	         	if(n%i==0)
	         	{
	         		printf("%d is divisor of %d\n",i,n);
	         		c++;
				 }
			 }
			 printf("total number of divisors are %d",c);
	         break;
		 }
	case 49:
	       printf("enter x^2 coefficient");
		   scanf("%d",&a);
		   printf("enter x coefficient");
		   scanf("%d",&n);		 		
		   printf("enter constent value");
		   scanf("%d",&c);
		   printf("equation is :> %dx^2+%dx+%d",a,n,c);
		   d=pow(n,2)-4*a*c;
		    k=d;
		   	if(d==0)
			   {
			x= -n/(2*a);
			y= -n/(2*a);
			printf("\nx= %d  y= %d",x,y);   	
						 } 		 
			else if(d<0)
			{
				 d=-d;
			  x= (-n-sqrt(d))/2*a;
						   
			y= (-n+sqrt(d))/2*a;
			printf("\nx= %di y= %di",x,y);
		}
			else if(d>0)
			{
			x= (-n-sqrt(d))/2*a;
						   
			y= (-n+sqrt(d))/2*a;
				printf("\nx= %d y= %d",x,y);
				
					} 	   
			
			break;
			
			
	case 50:
		{
	     printf("enter the size of an array");
		 scanf("%d",&n);
		 int a[n];
		 printf("enter the elements of an array");
		 for(i=0;i<n;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		 min=a[0];
		 for(i=1;i<n;i++)
		 {
		 	if(a[i]<min)
		 	   min=a[i];
		 }
		 printf("smallest in array is %d",min);
		 			break;
		 	}
		 			
	case 51:
		{
	    printf("enter size of an array");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
			 			
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i;j++)
    	{
    		if(a[j]>a[j+1])
    		{
			min=a[j];
    		a[j]=a[j+1];
    		a[j+1]=min;
    	}
    		}  		
    		}
    for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
			}		
	
		printf("\nsecond smallest is %d",a[1]);		
    		break;
    	}
    		
    case 52:
	    	{
	    printf("enter size of an array");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
			 			
    for(j=0;j<n;j++)
    {
    	for(i=0;i<n-j;i++)
    	{
    		if(a[i]>a[i+1])
    		{
			min=a[i];
    		a[i]=a[i+1];
    		a[i+1]=min;
    	}
    		}  		
    		}
    for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
			}		
	
		printf("\n largest is %d",a[n-1]);		
    		break;
    	}
    	
    	
    case 53:
		{
	    printf("enter size of an array");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
			 			
    for(j=0;j<n;j++)
    {
    	for(i=0;i<n-j;i++)
    	{
    		if(a[i]>a[i+1])
    		{
			min=a[i];
    		a[i]=a[i+1];
    		a[i+1]=min;
    	}
    		}  		
    		}
    for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
			}		
	
		printf("\n smallest is %d largest is %d",a[0],a[n-1]);		
    		break;
    	}
    	

    case 54:
    	{
		
    	printf("enter the size of array");
    	scanf("%d",&n);
    	int a[n];
    	sum=0;
    	printf("enter the elements of an array");
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("\nsum of array is %d",sum);
		break;
    }
    	
    case 55:
    	{
		
	  printf("enter the size of an array");
	  scanf("%d",&n);
	  int a[n];
	  printf("enter the elements of an array");
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
		  }	
		printf("\narray is\n");  
	  for(i=0;i<n;i++)
	  {
	  	printf("%d ",a[i]);
		  }		  	  
		  printf("\nreverse of an array is\n");
	   for(i=n-1;i>=0;i--)
	  {
	  	printf(" %d",a[i]);
		  }	 
		  
	}
             break;
             
             
    case 56:
    	{
	  printf("enter the size of an array");
	  scanf("%d",&n);
	  k=n/2;
	  int a[n];
	  printf("\nenter the elements of an array\n");
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
				}
	    	
	  for(j=0;j<=k;j++)
	  {
	  	for(i=0;i<=k-j;i++)
	  	{
	  		if(a[i]>a[i+1])
	  		{
	  		   max=a[i];
	  		   a[i]=a[i+1];
	  		   a[i+1]=max;
			  }
		  }
	  }
	  printf("\nascending order :=\n");
	  for(i=0;i<=k;i++)
	  {
	  	printf("%d  ",a[i]);
	  }
	   for(j=k+1;j<=n-1;j++)
	   {
	   	for(i=k+1;i<=n-1;i++)
	   	{
	   		if(a[k+1]<a[k+2])
	   		{
	   			min=a[k+1];
	   			a[k+1]=a[k+2];
	   			a[k+2]=min;
			   }
		   }
		   
	   }
	   printf("\n decending order:=");
	  for(i=k+1;i<=n-1;i++)
	  {
	  	printf("%d  ",a[i]);
	  }
	    break;
}


	case 57:
{
	    printf("enter size of an array");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
	    }
			 			
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i;j++)
    	{
    		if(a[j]>a[j+1])
    		{
			min=a[j];
    		a[j]=a[j+1];
    		a[j+1]=min;
    	}
    		}  		
    		}
	  printf("sorted array is:= ");
	  for(i=0;i<=n-1;i++)
	  {
	  	printf("%d  ",a[i]);
			   }		 
	  	break;	
}
		  
	case 58:
	   {
	   printf("enter the size of an array");
	   scanf("%d",&n);
	   int a[n];
	   printf("enter the elements");
	   for(i=0;i<=n-1;i++)
	   {
	   	scanf("%d",&a[i]);
		 }
		for(j=0;j<=n-1;j++)
		{   c=0;
			for(i=0;i<=n-1;i++)
			{
				if(a[j]==a[i])
				{
					c=c+1;
			    }
				
			}
			if(c>=2)
			{
				printf("%d %d times   ",a[j],c);
			}
			else 
			printf("%d   %d times   ",a[j],c);
			 } 	  			  
             break;
         }
          
		     
    case 59:
    	{
		printf("enter the size of an array");
		scanf("%d",&n);
		int a[n];
		//int r[100];
		printf("entre the elements in the array");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<=n-1;i++)
		{ sum=0,c=0;
		   r=a[i];
			while(r!=0)
			{
			  p=r%10;
			  r=r/10;
			  sum=sum*10+p;
			  c++;
			}
			  
			if(sum==a[i])
			{
			  printf("%d is palindrome number\n",a[i]);
			   max=c;
			}
			if(c>max)
			{
				temp=c;
				c=max;
				max=temp;
			}
		}
		printf("maximum length pelindrome is %d",max);
		
         break;
        }
    
    case 60:
    	{
    	printf("enter the size of array ");
    	scanf("%d",&n);
    	  int a[n];
    	  sum=0;
    	printf("enter the elements of an array");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		} 
		for(j=0;j<n;j++)
		{  c=0;
			for(i=0;i<n;i++)
			{
			if(a[j]==a[i])
			{
				c++;
				if(c>=2)
				{
					printf("%d  %d",a[j],c);
				}
				}		
				
			}
			
		 } 
		       break;
		   }
    case 61:
    	   {
	     printf("enter the number of elements");
		 scanf("%d",&n);
		  int a[n];	  
         printf("enter the elements");
		 for(i=0;i<n;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		 for(i=0;i<n;i++)
		 {     p=0;
		 	for(j=i+1;j<=n;j++)
		 	{    
		 		if(a[i]==a[j])
		 		{
		 		   p++;	
				 }
			 }
			  if(p>=1)
			  {  
			  	printf("%d is repeted\n",a[i]);
			}
			
				  }
             break;				  
				  }
				  
	case 62:
		{
	    printf("enter number of elements");
		scanf("%d",&n);
		int a[n];
		
		printf("enter the elements");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		} 
		for(i=0;i<=n-1;i++)
		{    p=0;
			for(j=0;j<=n-1;j++)
			{
		      if(a[i]==a[j])
			  {
			  	p++;
				  }
			}
			if(p==1)
		   {
		   	printf("%d is non repetative\n",a[i]);
				}		 
	    } 
		    break;
}

	case 63:
		{
	
	     printf("enter the number of elements");
	     scanf("%d",&n);
	     int a[n];
	     printf("enter %d elements",n);
	     printf("enter the elements");
	     for(i=0;i<=n-1;i++)
	     {
	     	scanf("%d",&a[i]);
		 }
		 for(i=0;i<=n-1;i++)
		 {
		 	for(j=i+1;j<=n-1;j++)
		 	{
		 		if(a[i]==a[j])
		 		{
		 			for(k=j;k<n-1;k++)
		 			{
		 				a[k]=a[k+1];
					 }
					 n--;
					 
				 }
			 }
			 
		 }
        for(i=0;i<=n-1;i++)
        {
           printf("%d",a[i]);	
		}
		  break;
}
	case 64:
		{	
	  printf("enter the number of elements in 1st array\n");
	  scanf("%d",&n);
	  int a[n];
	  printf("enter %d elements in 1st array\n",n);
	     
	  for(i=0;i<=n-1;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  printf("ascending order array 1st");
	  for(j=0;j<=n-1;j++)
	  {
	  	for(i=0;i<n-j-1;i++)
	  	{  
		  if(a[i]>a[i+1])
	  	   	{
		    temp= a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		  }
	  }
	   for(i=0;i<=n-1;i++)
		 {
		     printf("%d  ",a[i]);
	     }
	  printf("\nenter the number of elements in 2nd array\n");
	  scanf("%d",&m);
	  int b[m];
	  printf("\nenter %d elements in 2nd array\n",m);
	     
	  for(i=0;i<=m-1;i++)
	  {
	  	scanf("%d",&b[i]);
	  }
	  for(j=0;j<=m-1;j++)
	  {
	  	for(i=0;i<m-j-1;i++)
	  	{  
		  if(b[i]<b[i+1])
	  	   	{
		    temp= b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		  }
		  }
	      }
	   for(i=0;i<=m-1;i++)
		 {
		     printf("%d ",b[i]);
	     }
	     sum=0;
	   for(i=0;i<=n-1;i++)
	   {
	   	sum=sum+a[i]*b[i];
		} 
	   printf("sum is = %d ",sum);
	   
	   break;
}
	case 65:
		{
		
	   printf("enter the number of elements in 1st array\n");
	  scanf("%d",&n);
	  int a[n];
	  printf("enter %d elements in 1st array\n",n);
	     
	  for(i=0;i<=n-1;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  printf("ascending order array 1st");
	  for(j=0;j<=n-1;j++)
	  {
	  	for(i=0;i<n-j-1;i++)
	  	{  
		  if(a[i]>a[i+1])
	  	   	{
		    temp= a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		  }
	  }
	   for(i=0;i<=n-1;i++)
		 {
		     printf("%d  ",a[i]);
	     }
	  printf("\nenter the number of elements in 2nd array\n");
	  scanf("%d",&m);
	  int b[m];
	  printf("\nenter %d elements in 2nd array\n",m);
	     
	  for(i=0;i<=m-1;i++)
	  {
	  	scanf("%d",&b[i]);
	  }
	  for(j=0;j<=m-1;j++)
	  {
	  	for(i=0;i<m-j-1;i++)
	  	{  
		  if(b[i]>b[i+1])
	  	   	{
		    temp= b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		  }
		  }
	      }
	   for(i=0;i<=m-1;i++)
		 {
		     printf("%d ",b[i]);
	     }
	     sum=0;
	   for(i=0;i<=n-1;i++)
	   {
	   	sum=sum+a[i]*b[i];
	   	printf("sum is = %d ",sum);
		} 
	    break;
}
	case 66:
		{
	    printf("enter number of elements\n");
		scanf("%d",&n);
		int a[n];
		printf("\n enter the %d elemnts", n);
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		c=0,k=0;
		for(i=0;i<=n-1;i++)
		{  
			if(i%2==0)
			{
				c++;
			}
			else if(i%2!=0)
			{
				k++;
			}
		}
		  printf("\ntotal odd = %d \n total even = %d",k,c);
		   break;
	}
    case 67:  
          {
		  
          printf("enter the number of elements in array 1st and 2nd");
          scanf("%d%d",&n,&m);
          int a[n],b[m];
          if(m==n)
          {
          for(i=0;i<=n-1;i++)
          {
          	scanf("%d  %d",&a[i],&b[i]);
		  }
		  
	  	  for(i=0;i<=m-1;i++)
			{
				for(j=i;j<=m-1;j++)
				{
				if(a[i]==b[j]&&b[i]==a[j])
				{
					printf("%d %d is symmetric to %d %d",a[i],b[i],a[j],b[j]);
				}
				}
			}
             }
			 else 
			 printf("elemnts are not equal");
			  break;
			  
	}
	case 68:
	   	printf("incomplete");	  
           break;
           
    case 69:
    	{
    	   c=0;
	       printf("enter the number of elements in 1st and 2nd array");
		   scanf("%d%d",&n,&m);
		   int a[n], b[m];
		   printf("enter the elements of 1st array");
		   for(i=0;i<=n-1;i++)
		   {
		   	scanf("%d",&a[i]);
		   }
		   printf("enter the elemnts of 2nd array");
		   for(i=0;i<=m-1;i++)
		   {
		   	scanf("%d",&b[i]);
			  }   
			  
			for(j=0;j<=n-1;j++)
			{
				for(i=0;i<=m-1;i++)
				{
					if(a[j]!=b[i])
					{
						c++;
					}
				}
			  }
			  if(m*n==c)
			  {
			  	printf("disjoint array");
			  }
			  else 
			  printf("not disjoint");
			  break; 
		}
	case 70:
		{
	    printf("enter the number of element 1st and 2nd array");
	    scanf("%d%d",&n,&m);
	    int a[n],b[m],c=0;
	    printf("elements of array 1st");
	    for(i=0;i<=n-1;i++)
	    {
	    	scanf("%d",&a[i]);
		}
		printf("\n elements of 2nd array");
		for(i=0;i<=m-1;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=m-1;j++)
			{
				if(a[i]==b[j])
				{
				    c++;
					break;	
				}
			}
			}
			if(c==n)
			{
				printf("array 1st is subset of array 2nd");
		     }		   
			else
			{
			printf("ist array is not subset of array 2nd");		   
            }
            break; 
		}
    case 71:
    	{
	    printf("enter the number of elements");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
	    }
	    for(i=0;i<=n-1;i++)
	    {
		while(a[i]%2==0)
		{
			a[i]=a[i]/2;
		}
		while(a[i]%3==0)
		{
			a[i]=a[i]/3;
		 } 
     	}
     	for(i=0;i<n-1;i++)
     	{
     	 	if(a[i]==a[i+1])
			{
				c++;
			}
     	 
	     }
	     if(c==n-1)
	     {
	     	printf("number of array can be made equal");
		 }
		 else
		 printf("number of array can't be made equal");
		 break;
	}
		 
	case 72:
		{
	    printf("enter the size of an array");
		scanf("%d",&n);
		int a[n];
		printf("enter the elements of an array");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
			 }
		for(i=0;i<=n-1;i++)
		 {
		 for(j=0;j<n-i-1;j++)
		 {
		    if(a[j]>a[j+1])	
		    {
		    	c=a[j];
		    	a[j]=a[j+1];
		    	a[j+1]=c;
			}
			  }
			  	  	 
		}
		for(i=0;i<=n-1;i++)
		{
		   printf(" %d  ",a[i]);
	}
		if(n%2==0)	
		{
		   k=n/2-1;
		   for(i=0;i<=n-1;i++)
		   {
		   	if(a[i]<a[k])
		   	sum=sum-(a[i]-a[k]);
		   	else
		   	sum=sum+(a[i]-a[k]);
			   }	
			  }	   	 
        else if(n%2!=0)
		{
		    k=n/2+1;	
		    for(i=0;i<=n-1;i++)
		    {
		     if(a[i]<a[k])
		   	sum=sum-(a[i]-a[k]);
		   	else
		   	sum=sum+(a[i]-a[k]);
			}
						 }     			
        printf("\n sum is = %d",sum);
           break;
 }
	case 73:
	    printf("incomplete");
		break;
		
	case 74:
		{
	    printf("enter the size of array 1st and 2nd");
		scanf("%d%d",&m,&n);
		int a[m],b[n],c[m];
		int k=0;
		printf("enter the elements of array 1st");
		for(i=0;i<=m-1;i++)
		{
			scanf("%d",&a[i]);
				 }	 
		printf("enter the 2nd array element");		     
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&b[i]);
				 }
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=m-1;j++)
			{
				if(a[j]==b[i])
				{
					c[k]= a[j];
					k++;
				}
			}
		  }
		  for(i=0;i<=k-1;i++)
		  {
		  	printf("%d",c[i]);
							}		 		 
              break;
          }
    case 75:
         printf("incomplete");
		 break;
		 
		 
	case 76:
		{
	
	     printf("enter the array size");
		 scanf("%d",&n);
		 int a[n];
		 printf("enter the elements of an array");
		 for(i=0;i<=n-1;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		  sum=0,sum1=0;
		 for(i=0;i<=n-1;i++)
		 {   
		 	sum=sum+a[i];
		 	sum1=sum1+a[n-1-i];
		 	if(sum==sum1)
		 	{
		 		i++;
		 		break;
			 }
				}
		printf("equilibrium index is = %d",i);		
		     break;
		}
	case 77:
	     {
									  		 		  	           
         printf("enter the size of an array");
		 scanf("%d",&n);
		 int a[n],c=0;
		 printf("enter the elements of an array");
		 for(i=0;i<=n-1;i++)
         {
         	scanf("%d",&a[i]);
		 }
		 printf("enter the index value from where you apply rotation");
		 scanf("%d",&m);
		 for(i=m;i<=n-1;i++)
		 {
		 	c++;
		 }
		 for(i=0;i<=c;i++)
		 {
		 	k=a[n-1];
		 	for(j=n-1;j>=0;j--)
		 	{
		 		a[j]=a[j-1];
			 }
			 a[0]=k;
		    	 
		 }
		  printf("roteted array\n");
		  for(i=0;i<=n-1;i++)
		  {
		  	printf("%d ",a[i]);
		  }
		    break;
	}
	case 78:
	    printf("incomplete");
		   break;
		   
	case 79:
	    printf("incomplete");
		   break;
		   
	case 80:
	    printf("incomplete");
		  break;
		  
	case 81:
		{   fflush(stdin);                        
			char a[50];
			printf("enter the string");
			 gets(a);
				c=0;
			for(i=0;a[i]!='\0';i++)
			{
				c++;
			}
	        printf("\nlength of string is = %d",c);
			break; 	     	  
 }
 
    case 82:
    	{
		
    	printf("enter the string");
    	fflush(stdin);
    	char a[50];
    	gets(a);
    	for(i=0;a[i]!='\0';i++)
    	{
    		if(a[i]>='A' && a[i]<='Z')
    		{
    			a[i]=a[i]+32;
			}
			else if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
			printf("\n Toggle string %s",a);
				break;
			}
			
	case 83:
	    {
	      printf("enter the string");
		  fflush(stdin);
		  char a[50];
		  c=0;	
		  gets(a);
		  for(i=0;a[i]!='\0';i++)
		  {
		  	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		  	{
		  		c++;
			  }
		  }
		  printf("number of vowel=%d",c);
		  break;
		}		
		
	case 84:
	   {
	   	 printf("enter the string ");
	   	 fflush(stdin);
	   	 char a[50];
	   	 gets(a);
	   	 for(i=0;a[i]!='\0';i++)
	   	 {
	   	 	
			
          if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
           {
		  	for(j=i;a[j]!='\0';j++)
            	{
            		
            	a[j]=a[j+1];
            	
				}
				i--;
            	
	     	}
			}
	   	 printf("removed vowel string is %s",a);
	   	 break;
		   }
		   
	case 85:
		{
	    char a[50],b[50];
	    printf("enter the string");
	    fflush(stdin);
	    gets(a);
	    strcpy(b,a);
	    strrev(a);
	    if(strcmp(a,b)==0)
	    {
	    	printf("palindrome string");
		}
		else
		printf("non palindrome string");
		  break;
	    }
	    
	case 86:
		{
	    printf("enter the string");
		fflush(stdin);
		c=0;
		char a[50];
		char b[50];
		gets(a);
		for(i=0;a[i]!='\0';i++)
		{
			c++;
		}
		for(i=c;i>=1;i--)
		{
			b[c-i]=a[i-1];
		} 
		printf("revere string is %s",b)  ; 
	    break;
	   }
	   
	case 87:
	  {
		printf("enter the string");
		fflush(stdin);
		char a[50];
		char b[50];
		gets(a);
		for(i=0;a[i]!='\0';i++)
		{
			if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
			{
				b[i]=a[i];
			}
		    
			
		}
		puts(b);
		  break;
	   }   
		
	case 88:
	    { c=0,k=0;
	     printf("enter the string");
		 fflush(stdin);
		 char a[50];
		 char b[50];
		 gets(a);
		 gets(b);
		 for(i=0;a[i]!='\0';i++)
		 {
		 	c++;
		 }
		  for(i=0;b[i]!='\0';i++)
		 {
		 	k++;
		 }
		 p=c+k;
		 for(i=c;i<=p;i++)
		 {
		 	a[i]=b[i-c];
		 }
		 puts(a);
		 break;
      	}
      	
    case 89:
	  {
	     printf("enter the string");
	     fflush(stdin);
	     char a[50];
	     gets(a);
	     k=strlen(a);
	     for(i=0;i<=k;i++)
	     {
	     	if(a[i]=='(' || a[i]==')')
	     	{ 
	     	for(j=i;a[j]!='\0';j++)
	     	{
	     	 a[j]=a[j+1];	
			 }
			 }
		 }
		 puts(a);
	     break;
	  }
	case 90:
		{
		sum=0;
	     printf("enter the string");
		 fflush(stdin);
		 char a[50];
		 gets(a);
		 for(i=0;a[i]!='\0';i++)
		 {
		 	if((a[i]>='0')&&(a[i]<='9'))
		 	{
		 		sum=sum+a[i]-'0';
			 }
			 
			  }
		  printf("%d",sum);
		  break;	     
		}
	  	
	case 91:
		{
		c=0;
	   printf("enter the string");
	   fflush(stdin);
	   char a[50];
	   gets(a);
	   for(i=0;a[i]!='\0';i++)
	   {
	   	   c++;
			  }
		a[0]=toupper(a[0]);
		a[c-1]=toupper(a[c-1]);
		puts(a);
		break;
      }
      
    case 92:
    	{
		
	    printf("enter the string");
	    fflush(stdin);
	    char a[50];
         gets(a);
         
		 for(i=0;a[i]!='\0';i++)
		 {  c=0;
		  for(j=0;a[j]!='\0';j++)
		  {
		  	if(a[i]==a[j])
		  	{
		  		c++;
		  	 if(c>=2)
		  	 {
		  	 	for(k=j;a[k]!='\0';k++)
		  	 	{
		  	 	a[k]=a[k+1]; 	
				   }
		  	  	}
			}
			  }
		printf("frequency of %c is %d\n",a[i],c);	  		  
				 }
		break;		 
			}
				 
	case 93:
		{
		
	    printf("enter the string");
	    fflush(stdin);
	    char a[50];
	    gets(a);
	    for(i=0;a[i]!='\0';i++)
	    {  c=0;
	       for(j=0;a[j]!='\0';j++)
	    {
	         if(a[i]==a[j])
	         {
	         	c++;
			 }
		}
		   if(c==1)
		   {
		   	printf("%c is non repeating\n",a[i]);
		   }
		}
		break;
	     }  
	    
	    
	case 94:
	    printf("incomplete");
	    break;
	    
	case 95:
		{
	   char a[50];
	   char b[50];
	   fflush(stdin);
	   printf("enter the string 1st\n");
	   gets(a);
	   printf("enter the string 2nd\n");
	   gets(b);
	   c=strlen(a);
	   d=strlen(b);
	   for(i=0;i<=c-1;i++)
	   { sum=0;
	   	k=i;
	   	m=i;
	   	for(j=0;j<=d-1;j++)
	   	{
	   	   if(a[k]!=b[j])
	   		break;
	   	     k++;
	   	     sum++;
		}
		if(sum==d)
		{ x=m+d;
		  for(l=m;l<=x-1;l++)
		  {
		  	a[l]='\0';
		  }
		}
		    
	   }
	   for(i=0;i<=c-1;i++)
	   {
	   	printf("%c",a[i]);
	   }
	      break; 
	   }
	   
	case 96:
	      printf("incomplete");
	      break;
	      
	case 97:
	      printf("incomplete");
		  break;   
	   
	case 98:
	     {  
	     	for(i=1;i<=4;i++)
	     	{
	     	  for(j=1;j<=7;j++)
	     	  {
	     	  	if(i==3||j-i==3||i+j==5)
	     	  	{
	     	  		printf("*");
				   }
				 else
				 printf(" ");  
			   }
			   printf("\n");
			 }
			 break;
			 }    
	    
	case 99:
		{
	    printf("enter the number of rows");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		  for(j=n-i;j>=1;j--)
		  {
		  	printf(" ");
		  }
		  for(k=1;k<=2*i-1;k++)
		  {
		  	 printf("*");
		  }
		  printf("\n");
			}    
	      break;
	  }
	case 100:
		 {
		 	printf("enter the number of rows");
		 	scanf("%d",&n);
		 	for(i=0;i<=n-1;i++)
		 	{
		 		k=pow(11,i);
		 		printf("%d ",k);
		 		printf("\n");
			 }
			 break;
		 }
		  			 		 	    
	default:
	  printf("wrong input");
	  break;    
}
        getch();
 } 
 // factoria function calling
   int factorial(int a)
		  { 
		  int sum=1,i;
		  	for(i=a;i>=1;i--)
		  	  sum=sum*i;
			  return sum;  
			   }
			   
// * incomplete solutions............			   
