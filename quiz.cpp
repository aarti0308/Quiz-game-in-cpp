//#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int i=0;
void crt1(int ch )    //For correct answer 1
{A: if (ch==1)
     cout<<"\nCorrect answer!\n";
  else
  if((ch==2)||(ch==3)||(ch==4))
     cout<<"\nIncorrect answer.\n";
  else
  { cout<<"\nIncorrect input taken. Try again.\n";
    cin>>ch;
    goto A;
  }
}
void crt2(int ch)
{ B: if (ch==2)
  cout<<"\nCorrect answer!\n";
  else
   if((ch==1)||(ch==3)||(ch==4))
     cout<<"\nIncorrect answer.\n";
   else
   { cout<<"\nIncorrect input.Try again.\n";
     cin>>ch;
     goto B;
   }
}
void crt3(int ch)
{ C: if (ch==3)
  cout<<"\nCorrect answer!\n";
  else
   if((ch==1)||(ch==2)||(ch==4))
     cout<<"\nIncorrect answer.\n";
  else
  { cout<<"\nIncorrect input.Try again.\n";
    cin>>ch;
    goto C;
  }
}
void crt4(int ch)
{ D : if(ch==4)
  cout<<"\nCorrect answer!\n";
  else
  if((ch==2)||(ch==3)||(ch==1))
     cout<<"\nIncorrect answer.\n";
  else
     { cout<<"\nIncorrect input.Try again.\n";
       cin>>ch;
       goto D;
     }
}
void vocab2()
{ 	clrscr();
	int ch1,ch2,ch3,ch4,ch5;
	cout <<"\nHello Chief! Welcome to the Wisdom World! We need your help!\n"
	     <<"\nYou need to answer some questions keeping these in mind:\n"
	     <<"\n1.To answer the questions,TYPE the NUMBER corresponding to answer"
	     <<"\n2.To answer the questions in the Maths section,"
	     <<"\nTYPE THE ANSWER IN NUMERICALS"
	     <<"\nHope you enjoy!\n";
	cout<<"\nEnter the number corresponding to best definition of :";
	cout<<"\nQ.1) subjugate"
	    <<"\n1.need"<<"\t2.convince"<<"\n3.send"<<"\t4.Dominate\n";
	cin>>ch1;
	if(ch1==4)
	 i++;
	crt4(ch1);
	cout<<"\nQ.2) inchoate"
	    <<"\n1.thoughtful"<<"\t2.accurate"<<"\n3.motionless"<<"\t4.unorganised\n";
	cin>>ch2;
	if(ch2==2)
	 i++;
	crt2(ch2);
	cout<<"\nQ.3) imminent"
	    <<"\n1.threatening"<<"\tlethal"<<"\navailable"<<"\texplanatory\n";
	cin>>ch3;
	if(ch3==3)
	 i++;
	crt3(ch3);
	cout<<"\nQ.4) tantamount"
	    <<"\n1.previous"<<"\t2.early"<<"\n3.unequal"<<"\t4.kind\n";
	cin>>ch4;
	if(ch4==3)
	 i++;
	crt3(ch4);
	cout<<"\nQ.5)laden"
	    <<"\n1.mature"<<"\t2.unkind"<<"\n3.capable"<<"\t4.loaded\n";
	cin>>ch5;
	if(ch5==4)
	 i++;
	crt4(ch5);
	getch();
}
void vocab3()
{       clrscr();
	int ch1,ch2,ch3,ch4,ch5,i=0;
	 cout <<"\nHello Chief! Welcome to the Wisdom World! We need your help!\n"
       <<"\nYou need to answer some questions keeping these in mind:\n"
       <<"\n1.To answer the questions,TYPE the NUMBER corresponding to answer"
       <<"\n2.To answer the questions in the Maths section,"
       <<"\nTYPE THE ANSWER IN NUMERICALS"
       <<"\nHope you enjoy!\n";
	cout<<"\nEnter the number corresponding to the best defination of: ";
	cout<<"\nQ.1) Indemnify";
	cout<<"\n1. Unify"<<"\t2. Insure"<<"\n3. Produce"<<"\t4. Wail";
	cout<<endl;
	A:cin>>ch1;
	if(ch1==2)
	   i++;
	crt2(ch1);
	cout<<"\nQ.2) Plauible";
	cout<<"\n1. Somber"<<"\t2. Undecided"<<"\n3. Believable"<<"\t4. Normal";
	cout<<endl;
	cin>>ch2;
	if (ch2==3)
	   i++;
	crt3(ch2);
	cout<<"\nQ.3) Disabuse";
	cout<<"\n1. Correct"<<"\t2. Publish"<<"\n3. Restrict"<<"\t4. Begin";
	cout<<endl;
	cin>>ch3;
	if (ch3==1)
	   i++;
	crt1(ch3);
	cout<<"\nQ.4) Enamored";
	cout<<"\n1. Devoted"<<"\t2. Ashamed"<<"\n3. Bored"<<"\t4. Used";
	cout<<endl;
	cin>>ch4;
	if (ch4==1)
	   i++;
	crt1(ch4);
	cout<<"\nQ.5 Dilligence";
	cout<<"\n1. Creativity"<<"\t2. Attention"<<"\n3. Religion"<<"\t4. Envy";
	cout<<endl;
	cin>>ch5;
	if (ch5==2)
	   i++;
	crt2(ch5);
	getch();
}
void vocab1()
{	int ch1,ch2,ch3,ch4,ch5;
	cout<<"\nHello! Welcome to the wisdom world! We need your help!\n"
	    <<"\nYou need to answer some questions keeping these in mind:\n"
	    <<"\n1.To answer the questions,TYPE THE NUMBER corresponding to answer\n"
	    <<"\n2.To answer the questions in maths"
	    <<"TYPE the ANSWER in NUMERICALS"
	    <<"\nHope you enjoy";
	cout<<"\nEnter the number corresponding to the best definition of:";
	cout<<"\nQ.1.Succumb"
	    <<"\n1.satisfy"<<"\t2.die" <<"\n3.assist"<<"\t4.draw\n";
	cin>>ch1;
	if(ch1==2)
	i++;
	crt2(ch1);
	cout<<"\nQ.2. exhort"
	    <<"\n1. marry"<<"\t2. find"<<"\n3. urge"<<"\t4. aim\n";
	cin>>ch2;
	if(ch2==3)
	 i++;
	crt3(ch2);
	cout<<"\nQ.3. vociferous"
	    <<"\n1.pleasant"<<"\t2.rushed"<<"\n3.loudmouthed"<<"\t4.spirited\n";
	cin>>ch3;
	if(ch3==3)
	 i++;
	crt3(ch3);
	cout<<"\nQ.4.oblivious"
	    <<"\n1.inexperienced"<<"\t2.unaware"<<"\n3.forbidden"<<"\t4.fragile\n";
	cin>>ch4;
	if(ch4==2)
	 i++;
	crt2(ch4);
	cout<<"\nQ.5.imminent"
	    <<"\n1.threatening"<<"\t2.lethal"<<"\n3.available"<<"\t4.explanatory\n";
	cin>>ch5;
	if(ch5==1)
	i++;
	crt1(ch5);
	getch();
}
void entertainment1()
{	clrscr();
	int ch1,ch2,ch3,ch4,ch5,ch6;
	cout<<"\nEnter the CHOICE NUMBER for selecting the correct answer :";
	cout<<"\nQ.1 When Phoebe cut Monica’s hair, she hilariously did it in the style of who? (Friends)";
	cout<<"\n1. Roger Moore"<<"\t2. Demi Moore"<<"\t3. Dudley Moore"<<"\n";
	cin>>ch1;
	if (ch1==2)
	i++;
	crt2(ch1);
	cout<<"\nQ.2 In the final episode-The Last One,Part 2-the friends are seen leaving the \napartment and heading for coffee. ";
	cout<<"What is the very last line of the show? (Friends)";
	cout<<"\n1. What?"<<"\t2. Why?"<<"\t3. Where?"<<"\n";
	cin>>ch2;
	if (ch2==3)
	i++;
	crt3(ch2);
	cout<<"\nQ.3 What organization does Claire Underwood run in the first season?\n (House Of Cards)";
	cout<<"\n1. Poverty Research Institute"<<"\t2. Global Heath International"<<"\n3. Clean Water Initiative"<<"\n";
	cin>>ch3;
	if (ch3==3)
	i++;
	crt3(ch3);
	cout<<"\nQ.4 Who said, A very small man can cast a very large shadow ? (Game Of Thrones)";
	cout<<"\n1. Tyrion Lannister"<<"\t2. Pycelle"<<"\t3. Petyr Baelish"<<"\n";
	cin>>ch4;
	if (ch4==1)
	i++;
	crt1(ch4);
	cout<<"\nQ.5 Which country's freedom struggle is portrayed in the Mel Gibson \nmovie 'Braveheart'?";
	cout<<"\n1. India"<<"\t2. Vietname"<<"\t3. Scotland"<<"\n";
	cin>>ch5;
	if (ch5==3)
	i++;
	crt3(ch5);
	cout<<"\nQ.6 What fictional language does Howard speak? (Big Bang Theory)";
	cout<<"\n1. Klingon"<<"\t2. Elvish"<<"\t3. Valyrian"<<"\n";
	cin>>ch6;
	if (ch6==1)
	i++;
	crt1(ch6);
	getch();
}
void entertainment2()
{	clrscr();
	int ch1,ch2,ch3,ch4,ch5,ch6;
	cout<<"\nEnter the CHOICE NUMBER for selecting the correct answer :";
	cout<<"\nQ.1 In the first movie, what does Mia say when she first finds out \nthat she is a princess? (The Princess Diaries)";
	cout<<"\n1. I always knew I was royalty!"<<"\t2. That is not possible!"
	<<"\t3. Shut up!\n";
	cin>>ch1;
	if (ch1==3)
	i++;
	crt3(ch1);
	cout<<"\nQ.2 Who said the quote that is inscribed on the watch Frank gave to Remmy?\n To improve is to change. To perfect is to change often. (House Of Cards)";
	cout<<"\n1. Abraham Lincoln"<<"\t2. John Major"<<"\t3. Winston Churchill\n";
	cin>>ch2;
	if (ch2==3)
	i++;
	crt3(ch2);
	cout<<"\nQ.3 What is the first line in the first book of The Harry Potter Series?";
	cout<<"\n1. At number four, Privet Drive, in the cupboard under the stairs,"<<"\t2. Harry Potter had not led a particularly remarkable childhood,"
	    <<"\t3. Mr. and Mrs. Dursley of number four, Privet Drive\n";
	cin>>ch3;
	if (ch3==3)
	i++;
	crt3(ch3);
	cout<<"\nQ.4 How did Katniss's father die? (The Hunger Games)";
	cout<<"\n1. He fell off the roof of his house"<<"\t2. Mine explosion"<<"\t3. Starvation\n";
	cin>>ch4;
	if (ch4==2)
	i++;
	crt2(ch4);
	cout<<"\nQ.5 Who works at the comic book store? (Big Bang Theory)";
	cout<<"\n1. Stuart"<<"\t2. Sheldon"<<"\t3. Steven\n";
	cin>>ch5;
	if (ch5==1)
	i++;
	crt1(ch5);
	cout<<"\nQ.6 What is the name of Joey's agent? (Friends)";
	cout<<"\n1. Gloria"<<"\t2. Estelle"<<"\t3. Veronica\n";
	cin>>ch6;
	if (ch6==2)
	i++;
	crt2(ch6);
	getch();
}
void genx(int a[5][5])
{	int h,j,k;
	randomize();
	for (h=0;h<5;h++)
	      for (j=0;j<5;j++)
	{	   k=random(10);
		   a[h][j]=k;
	}
}
int sumx(int a[5][5])
{	int h,j=0,k,s=0,i=0;
	for (h=0;h<5;h++)
	{	cout<<a[h][j]<<" + ";
		s+=a[h][j];
		j++;
	}
	cout<<" 0 = ? \n";
	cin>>k;
	if (k==s)
	{	 cout<<"\nCorrect answer\n";
		 i++;
	}
	else
	   cout<<"\nIncorrect answer\n";
	return i;
}
void multx(int a[5][5])
{	int h,j=0,k,p=1;
	for (h=0;h<5;h++)
	{	cout<<a[h][j]<<" x ";
		j++;
		p*=a[h][j];
	}
	cout<<" 1 = ? \n";
	cin>>k;
	if (k==p)
	{	 cout<<"\nCorrect answer\n";
		i++;
	}
	else
	cout<<"\nIncorrect answer\n";


}
void gk1()
{ 	int ch1,ch2,ch3,ch4;
	cout<<"\nFirst Indian women Olympic Medal is : "
	<<"\n1. Saina Nehwal"<<"\t2. MC Mary Kom"<<"\n3. Karnam Malleshwari"<<"\t4. Sakshi Malik\n";
	cin>>ch1;
	if (ch1==3)
	i++;
	crt3(ch1);
	cout<<"\nWho is the President of Israel?"
	<<"\n1. Hassam Rouhani"<<"\t2. Fuad Masum"<<"\n3. Michael Daniel Higgins"<<"\t4. Reuven Rivlin\n";
	cin>>ch2;
	if(ch2==4)
	i++;
	crt4(ch2);
	cout<<"\nWhat is the capital of Sikkim?"
	<<"\n1.Panaji"<<"\t2.Imphal"<<"\n3.Gangtok"<<"\t4.Silvassa\n";
	cin>>ch3;
	if (ch3==3)
	i++;
	crt3(ch3);
	cout<<"\nWho is the Defense Minsiter of India?"
	<<"\n1.Manohar Parrikar"<<"\n2.Arun Jaitley"<<"\3.Piyush Goyal"<<"\t4.Ram Kripal Yadav\n";
	cin>>ch4;
	if (ch4==1)
	i++;
	crt1(ch4);
}
void gk2()
{	int ch1,ch2,ch3,ch4,ch5;
	cout<<"Q.1) Murugappa Cup is associated with :";
	cout<<"\n1. Badminton"<<"\t2. Hockey"<<"\n3. Cricket"<<"\t4. Kho Kho\n";
	cin>>ch1;
	if (ch1==2)
	i++;
	crt2(ch1);
	cout<<"Who is president of Iraq?";
	cout<< "\n1. Hassam Rouhani"<<"\t2. Fuad Masum"<<"\n3. Michael Daniel Higgins"
	    <<"\t4. Reuven Rivlin\n";
	cin>>ch2;
	if(ch2==2)
	i++;
	crt2(ch2);
	cout<<"What is the capital of Manipur?";
	cout<<"\n1. Panaji"<<"\t2. Imphal"<<"\n3. Gangtok"<<"\t4. Silvassa\n";
	cin>>ch3;
	if(ch3==2)
	i++;
	crt2(ch3);
	cout<<"Who is the Energy Managing Minister Of India?";
	cout<<"\n1. Manohar Parrikar"<<"\t2. Arun Jaitley"<<"\n3. Piyush Goel"
	<<"\t4. Ram Crippal Yadav\n";
	cin>>ch4;
	if (ch4==3)
	i++;
	crt3(ch4);
	getch();
}
void gk3()
{	int ch1,ch2,ch3,ch4;
	cout<<"\nWho is the President of Mali?"
	<<"\n1. Ibrahim Keita"<<"\t2. Enrique Pena Nieto"<<"\n3. Thein Sein"<<"\n4. Jerry Mateparae\n";
	cin>>ch1;
	if (ch1==1)
	i++;
	crt1(ch1);
	cout<<"\nWho has scored 1st 200 runs in World Cup Cricket?"
	<<"\n1. Sachin Tendulkar"<<"\t2. Martin Guptill"<<"\n3. A B de Villiers"<<"\t4. Chris Gayle\n";
	cin>>ch2;
	if (ch2==4)
	i++;
	crt4(ch2);
	cout<<"\nWhat is the capital of Meghalaya?"
	<<"\n1. Mumbai"<<"\t2. Jaipur"<<"\n3. Aizawl"<<"\t4. Shillong\n";
	cin>>ch3;
	if (ch3==4)
	i++;
	crt4(ch3);
	cout<<"\nWho is the minister of Youth Affairs?"
	<<"\n1. Rajen Gohain"<<"\t2. M.J.Akbar"<<"\n3. Vijay Goel"<<"\t4. Krishan Pal\n";
	cin>>ch4;
	if(ch4==3)
	i++;
	crt3(ch4);
	getch();
}
void gk4()
{	int ch1,ch2,ch3,ch4;
	cout<<"\n who is the 1st Indian woman to win Asian gold in 400 m run?"
	    <<"/n1. M L Valsamma"<<"\t2. P T Usha"<<"\n3. kamalijit Sandu"
	    <<"\t4. K Malleshwari";
	cin>>ch1;
	if(ch1==3)
	 i++;
	crt3(ch1);
	cout<<"\nWho is the president of iran?"
	    <<"\n1. Hassan Rouhani"<<"\t2. Fuad masum"<<"\n3. Michael Daniel Higgins"
	<<"\t4. Reuven Rivlin";
	cin>>ch2;
	if(ch2==1)
	 i++;
	crt1(ch2);
	cout<<"\n What is the capital of Goa?"
	    <<"\n1. Panaji"<<"\t2. Imphan"<<"\n3. Gangtok"<<"\t4. Silvassa";
	cin>>ch3;
	if(ch3==1)
	 i++;
	crt1(ch3);
	cout<<"\nwho is the finance minister of india?"
	    <<"\n1. Manohar parrikar"<<"\t2. Arun Jaitley"<<"\n3. Piyush goel"
	    <<"\t4. Ram Kripal Yadav";
	cin>>ch4;
	if(ch4==2)
	 i++;
	crt2(ch4);
	getch();
}
void gk5()
{	int i,ch1,ch2,ch3,ch4;
	cout<<"\nWho is the president of Mexico?"
	    <<"\n1.Ibrahim keita"<<"\t2.Enrique Pena Neito"<<"\n3.Thein sein"
	    <<"\t4.Jerry Mateparae";
	cin>>ch1;
	if(ch1==2)
	i++;
	crt2(ch1);
	cout<<"\nThe term Grand Slam is associated with"
	    << "\n1.Badminton"<<"\t2.Lawn tennis"<<"\n3.Table tennis"
	    <<"\t4.Squash";
	cin>>ch2;
	if(ch2==2)
	 i++;
	crt2(ch2);
	cout<<"\nWhat is the capital of Mizoram?"
	    <<"\n1.Mumbai"<<"\t2.Jaipur"<<"\n3.Aizawl"<<"\t4.Shillong";
	cin>>ch3;
	if(ch3==3)
	 i++;
	crt3(ch3);
	cout<<"\nWho is the minister of Railways"
	    <<"\n1.M. J. Akbar"<<"\t2.Rajen Gohain"<<"\n3.Krishan Pal"
	    <<"\t4.Vijay Goel";
	cin>>ch4;
	if(ch4==2)
	 i++;
	crt2(ch4);
	getch();
}
void main()
{	clrscr();
	int a[5][5],b[5][5],r,s,t;
	randomize();
	r=random(3);
	if (r==0)
	vocab2();
	else if (r==1)
	vocab3();
	else if (r==2)
	vocab1();
	s=random(5);
	if (s==0)
	gk1();
	else if (s==1)
	gk2();
	else if (s==2)
	gk3();
	else if (s==3)
	gk4;
	else if (s==4)
	gk5();
	t=random(2);
	if (t==0)
	entertainment1();
	else if (t==1)
	entertainment2();
	genx(a);
	sumx(a);
	multx(a);
	genx(b);
	sumx(b);
	multx(b);
	cout<<"\nScore is "<<(i)*10<<" Out of 510";
	getch();
}
