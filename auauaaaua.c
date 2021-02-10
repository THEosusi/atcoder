#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct str_person_data{
    char name[16];
    double x;
    double y;
}Person;
void input( Person *p_list, int n ){
    int i;
    scanf("%f",&p_list->x);
    scanf("%f",&p_list->y);
    for(i=0;i<n;i++){
    scanf("%s",p_list->name);     
    }
}
double dist( Person *a, Person *b ){
    return sqrt(((b->x)-(a->x))*((b->x)-(a->x))+((b->y)-(a->y))*((b->y)-(a->y)))
} 
int find( char *name, Person *p_list, int n ){
int i,j;
for(i=0;i<n;i++){
    j=0;
    while(name+j==*Person[i]->name[j]){
        if(name+j=='\0'){
            if(*Person[i]->name[j]=='\0'){
                return i;
            }
        }
        j++;
    }
}
return n;
}
double max_dist( Person *p_list, int n ){
    double aaa=0,bbb;
    int j,i;
    for(i=0;i++;i<n){
        for(j=0;j++;j<n){
 bbb=dist(p_list[i],(p_list[j]);
            if(aaa<bbb){
                aaa=bbb;
            }
    
        }
    }
    return aaa;
}
int main(void){}
