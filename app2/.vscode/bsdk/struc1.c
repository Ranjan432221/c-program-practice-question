    #include<stdio.h>
    #include<string.h>
    struct student
    {
        int id;
        int marks;
        char fav_char;
        char name[40];
    };
    int main()
    {
       struct student harry,ranjan,rahul; 
        harry.id = 1;
        ranjan.id = 2;
        rahul.id = 3;
         harry.marks = 455;
        ranjan.marks = 455;
        rahul.marks = 320;
        harry.fav_char = 'p';
        ranjan.fav_char = 'q';
        rahul.fav_char = 'r';
        strcpy(ranjan.name,"ranjan kumar sahoo");
        strcpy(rahul.name,"pratik kumar sahoo");
        strcpy(harry.name,"pravash kumar sahoo");
        printf("\nharry got %d marks\n",harry.marks);
        printf("ranjn got marks:%d\n",ranjan.marks);
        printf("rahul marks is:%d\n",rahul.marks);
        printf("harry id is:%d\n",harry.id);
        printf("ranjan id is:%d\n",ranjan.id);
        printf("rahul id is:%d\n",rahul.id);
        printf("harry fav_char is:%c\n",harry.fav_char);
        printf("ranjan fav_char is:%c\n",ranjan.fav_char);
        printf("rahul fav_char is:%c\n",rahul.fav_char);
        printf("ranjan name is:%s\n",ranjan.name);
        printf("rahul name is:%s\n",rahul.name);
        printf("harry name is:%s\n",harry.name);
        return 0;

    }
    