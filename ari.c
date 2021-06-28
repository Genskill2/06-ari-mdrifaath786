#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<cs50.h>
#include<ctype.h>
 string ari(string s)
{
     float l=0,w=0,sen=0;
     for(int i=0;s[i]!='\0';i++)
    {
         if (isalnum(s[i]))
         {
             l+=1;
         }
        if (s[i]=='.'||s[i]=='!'||s[i]=='?')
         {
             sen+=1;
         }
         if(s[i]==' ')
         {
             w=w+1;
         }
    }
         float score=4.7*(l/w)+0.5*(w/sen)-21.43;
         int x=(int)(score);
         if(score-x!=0)
         {
             score=x+1;
         }
         if(score==1)
         {
             char st[]="Kindergarten";
             return st;
         }
         if(score==2)
         {
             char st[]="First/Second Grade";
             return st;
         }
         if(score==3)
         {
             char st[]="Third Grade";
             return st;
         }
         if(score==4)
         {
             char st[]="Fourth Grade";
             return st;
         }
         if(score==5)
         {
             char st[]="Fifth Grade";
             return st;
         }
         if(score==6)
         {
             char st[]="Sixth Grade";
             return st;
         }
         if(score==7)
         {
             char st[]="Seventh Grade";
             return st;
         }
         if(score==8)
         {
             char st[]="Eighth Grade";
             return st;
         }
         if(score==9)
         {
             char st[]="Ninth Grade";
             return st;
         }
         if(score==10)
         {
             char st[]="Tenth Grade";
             return st;
         }
         if(score==11)
         {
             char st[]="Eleventh Grade";
             return st;
         }
         if(score==12)
         {
             char st[]="Twelfth grade";
             return st;
         }
         if(score==13)
         {
             char st[]="College student";
             return st;
         }
         if(score==14)
         {
             char st[]="Professor";
             return st;
         }
         

} 
